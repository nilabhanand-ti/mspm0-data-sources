#!/usr/bin/env python3
"""Build a CMSIS-SVD file from the register descriptions in a CCS targetdb.

TI does not ship an SVD for the AM13E2x family. Code Composer Studio describes every register
of the device in its targetdb instead: `devices/<PART>.xml` lists the peripheral instances and
their base addresses, and each instance points at a module XML under `Modules/` that holds the
registers, bitfields and enumerations. This script turns that into an SVD so the usual tooling
(chiptool, svd2rust) can consume it.

Groups in the module XML become SVD clusters and `instances`/`instaddr` become `dim` arrays.
Every instance after the first of a module is emitted with `derivedFrom`.

The targetdb leaves out the KEY field of registers which need a key written alongside the data
(PWREN, RSTCTL, SYSCTL.RESETCMD, ...). Writes without the key are ignored by the hardware, so the
KEY fields and their key values are merged in from the SDK register headers (`hw_<module>.h`).
The targetdb also hides a few security registers (SYSCTL.FLBANKSWP, INITDONE, ...); those are not
added.

Usage:
    targetdb2svd.py <ccs_base/common/targetdb> <PART> <sdk hw/ directory> > out.svd
"""

import re
import sys
import xml.etree.ElementTree as ET
from pathlib import Path
from xml.sax.saxutils import escape

# Instances which describe the Arm core rather than device peripherals.
CORE_INSTANCES = {"NVIC", "SYSTICK", "CPU_SCB"}

IDENT = re.compile(r"[^A-Za-z0-9_]")


def ident(name: str) -> str:
    name = IDENT.sub("_", name.strip())
    if not name or name[0].isdigit():
        name = "_" + name
    return name


def num(value: str) -> int:
    return int(value, 0)


def access(rw: str) -> str:
    rw = rw.upper()
    if rw == "R":
        return "read-only"
    if rw in ("W", "W1S", "W1C", "WO"):
        return "write-only"
    return "read-write"


def text(tag: str, value, indent: int) -> str:
    return f"{' ' * indent}<{tag}>{escape(str(value))}</{tag}>\n"


def description(node: ET.Element) -> str:
    desc = (node.get("description") or "").strip()
    return desc or node.get("id", "")


def emit_field(field: ET.Element, indent: int) -> str:
    msb = num(field.get("begin"))
    lsb = num(field.get("end"))
    if msb < lsb:
        msb, lsb = lsb, msb
    out = f"{' ' * indent}<field>\n"
    out += text("name", ident(field.get("id")), indent + 2)
    out += text("description", description(field), indent + 2)
    out += text("bitOffset", lsb, indent + 2)
    out += text("bitWidth", msb - lsb + 1, indent + 2)
    out += text("access", access(field.get("rwaccess", "R/W")), indent + 2)

    enums = []
    seen_names = set()
    seen_values = set()
    for e in field.findall("bitenum"):
        name = ident(e.get("id"))
        value = num(e.get("value"))
        # The XML sometimes lists the same name or value twice (MINIMUM/MAXIMUM range
        # markers next to real encodings). SVD consumers reject duplicates, so keep the first.
        if name in seen_names or value in seen_values:
            continue
        seen_names.add(name)
        seen_values.add(value)
        enums.append((name, description(e), value))

    if enums:
        out += f"{' ' * (indent + 2)}<enumeratedValues>\n"
        for name, desc, value in enums:
            out += f"{' ' * (indent + 4)}<enumeratedValue>\n"
            out += text("name", name, indent + 6)
            out += text("description", desc, indent + 6)
            out += text("value", f"0x{value:X}", indent + 6)
            out += f"{' ' * (indent + 4)}</enumeratedValue>\n"
        out += f"{' ' * (indent + 2)}</enumeratedValues>\n"

    out += f"{' ' * indent}</field>\n"
    return out


def emit_dim(node: ET.Element, indent: int) -> str:
    count = num(node.get("instances", "1"))
    if count <= 1:
        return ""
    out = text("dim", count, indent)
    out += text("dimIncrement", f"0x{num(node.get('instaddr')):X}", indent)
    return out


class HeaderKeys:
    """KEY fields of one module, from its SDK register header."""

    def __init__(self, module: str, hw_dir: Path):
        self.keys = {}
        header = hw_dir / f"hw_{module.lower()}.h"
        if not header.exists():
            return
        content = header.read_text()
        # `#define X (24)` and `#define X ((uint32_t)0xFF000000U)`
        defines = dict(
            re.findall(r"#define\s+(\w+)\s+\((?:\(uint32_t\))?(0x[0-9A-Fa-f]+|\d+)U?\)", content)
        )
        prefix = f"{module.upper()}_"
        for macro, ofs in defines.items():
            m = re.fullmatch(rf"{prefix}(\w+)_KEY_OFS", macro)
            if not m:
                continue
            reg = m.group(1)
            mask = num(defines.get(f"{prefix}{reg}_KEY_MASK", "0xFF000000"))
            ofs = num(ofs)
            width = bin(mask >> ofs).count("1")
            values = [
                (name, num(value) >> ofs)
                for macro2, value in defines.items()
                for name in [macro2[len(f"{prefix}{reg}_KEY_"):]]
                if macro2.startswith(f"{prefix}{reg}_KEY_") and name not in ("OFS", "MASK")
            ]
            self.keys[reg] = (ofs, width, values)

    def field(self, reg: str, indent: int) -> str:
        if reg not in self.keys:
            return ""
        ofs, width, values = self.keys[reg]
        out = f"{' ' * indent}<field>\n"
        out += text("name", "KEY", indent + 2)
        out += text("description", "Key which must be written for the write to take effect.", indent + 2)
        out += text("bitOffset", ofs, indent + 2)
        out += text("bitWidth", width, indent + 2)
        out += text("access", "write-only", indent + 2)
        if values:
            out += f"{' ' * (indent + 2)}<enumeratedValues>\n"
            seen = set()
            distinct = {value for _, value in values}
            for name, value in values:
                if value in seen:
                    continue
                seen.add(value)
                # The SDK calls the single key value UNLOCK_W or VALUE depending on the module;
                # name it KEY like the MSPM0 SVDs do.
                if len(distinct) == 1:
                    name = "KEY"
                out += f"{' ' * (indent + 4)}<enumeratedValue>\n"
                out += text("name", ident(name), indent + 6)
                out += text("description", "Write key.", indent + 6)
                out += text("value", f"0x{value:X}", indent + 6)
                out += f"{' ' * (indent + 4)}</enumeratedValue>\n"
            out += f"{' ' * (indent + 2)}</enumeratedValues>\n"
        out += f"{' ' * indent}</field>\n"
        return out


# Set per module while emitting its registers.
KEYS: HeaderKeys = None


def emit_register(reg: ET.Element, indent: int) -> str:
    name = ident(reg.get("id"))
    dim = emit_dim(reg, indent + 2)
    out = f"{' ' * indent}<register>\n"
    out += dim
    out += text("name", f"{name}[%s]" if dim else name, indent + 2)
    out += text("description", description(reg), indent + 2)
    out += text("addressOffset", f"0x{num(reg.get('offset')):X}", indent + 2)
    out += text("size", reg.get("width", "32"), indent + 2)

    fields = reg.findall("bitfield")
    key = ""
    if KEYS is not None and not any(f.get("id") == "KEY" for f in fields):
        key = KEYS.field(name, indent + 4)
    if fields or key:
        out += f"{' ' * (indent + 2)}<fields>\n"
        for f in fields:
            out += emit_field(f, indent + 4)
        out += key
        out += f"{' ' * (indent + 2)}</fields>\n"
    out += f"{' ' * indent}</register>\n"
    return out


def emit_children(node: ET.Element, indent: int) -> str:
    out = ""
    for child in node:
        if child.tag == "register":
            out += emit_register(child, indent)
        elif child.tag == "group":
            out += emit_cluster(child, indent)
    return out


def emit_cluster(group: ET.Element, indent: int) -> str:
    name = ident(group.get("id"))
    dim = emit_dim(group, indent + 2)
    out = f"{' ' * indent}<cluster>\n"
    out += dim
    out += text("name", f"{name}[%s]" if dim else name, indent + 2)
    out += text("description", description(group), indent + 2)
    out += text("addressOffset", f"0x{num(group.get('offset')):X}", indent + 2)
    out += emit_children(group, indent + 2)
    out += f"{' ' * indent}</cluster>\n"
    return out


def module_extent(node: ET.Element, base: int = 0) -> int:
    """Highest byte address used by the module, relative to its base."""
    end = 0
    for child in node:
        if child.tag not in ("register", "group"):
            continue
        offset = base + num(child.get("offset"))
        count = num(child.get("instances", "1"))
        stride = num(child.get("instaddr", "0"))
        if child.tag == "register":
            size = num(child.get("width", "32")) // 8
            end = max(end, offset + (count - 1) * stride + size)
        else:
            inner = module_extent(child, 0)
            end = max(end, offset + (count - 1) * stride + inner)
    return end


def parse_irqs(header: Path) -> dict:
    irqs = {}
    pattern = re.compile(r"^\s+(\w+?)(?:_INT)?_IRQn\s+=\s+(\d+),", re.M)
    for name, number in pattern.findall(header.read_text()):
        irqs[name] = int(number)
    return irqs


def main() -> None:
    global KEYS

    targetdb = Path(sys.argv[1])
    part = sys.argv[2]
    hw_dir = Path(sys.argv[3])
    irqs = parse_irqs(hw_dir / "hw_ints.h")

    device = ET.parse(targetdb / "devices" / f"{part}.xml").getroot()
    cpu = device.find(".//cpu")

    instances = []
    for inst in cpu.findall("instance"):
        name = inst.get("id")
        if name in CORE_INSTANCES or not inst.get("baseaddr"):
            continue
        href = inst.get("href")
        module = (targetdb / "devices" / href).resolve()
        if not module.exists():
            # The href is relative to the cpus/ directory in some device files.
            module = (targetdb / "devices" / "cpus" / href).resolve()
        instances.append((name, num(inst.get("baseaddr")), module))

    out = '<?xml version="1.0" encoding="utf-8"?>\n'
    out += '<device schemaVersion="1.3" xmlns:xs="http://www.w3.org/2001/XMLSchema-instance" '
    out += 'xs:noNamespaceSchemaLocation="CMSIS-SVD.xsd">\n'
    out += text("vendor", "Texas Instruments", 2)
    out += text("name", part, 2)
    out += text("version", "1.0", 2)
    out += text("description", f"{part}, generated from the CCS targetdb by targetdb2svd.py", 2)
    out += "  <cpu>\n"
    out += text("name", "CM33", 4)
    out += text("revision", "r0p1", 4)
    out += text("endian", "little", 4)
    out += text("mpuPresent", "true", 4)
    out += text("fpuPresent", "true", 4)
    out += text("vtorPresent", "true", 4)
    out += text("nvicPrioBits", 4, 4)
    out += text("vendorSystickConfig", "false", 4)
    out += "  </cpu>\n"
    out += text("addressUnitBits", 8, 2)
    out += text("width", 32, 2)
    out += text("size", 32, 2)
    out += text("resetValue", "0x00000000", 2)
    out += text("resetMask", "0xFFFFFFFF", 2)
    out += "  <peripherals>\n"

    first_of_module = {}
    for name, base, module in instances:
        root = ET.parse(module).getroot()
        module_id = root.get("id")
        derived = first_of_module.get(module)
        tag = f'<peripheral derivedFrom="{derived}">' if derived else "<peripheral>"
        out += f"    {tag}\n"
        out += text("name", ident(name), 6)
        if not derived:
            out += text("groupName", ident(module_id), 6)
            out += text("description", f"{module_id} module", 6)
        out += text("baseAddress", f"0x{base:08X}", 6)
        if not derived:
            out += "      <addressBlock>\n"
            out += text("offset", "0x0", 8)
            out += text("size", f"0x{max(module_extent(root), 4):X}", 8)
            out += text("usage", "registers", 8)
            out += "      </addressBlock>\n"
        for irq_name, irq_num in sorted(irqs.items(), key=lambda i: i[1]):
            if irq_name == name or irq_name.startswith(name + "_"):
                out += "      <interrupt>\n"
                out += text("name", irq_name, 8)
                out += text("value", irq_num, 8)
                out += "      </interrupt>\n"
        if not derived:
            KEYS = HeaderKeys(module_id, hw_dir)
            out += "      <registers>\n"
            out += emit_children(root, 8)
            out += "      </registers>\n"
            first_of_module[module] = ident(name)
        out += "    </peripheral>\n"

    out += "  </peripherals>\n"
    out += "</device>\n"
    sys.stdout.write(out)


if __name__ == "__main__":
    main()

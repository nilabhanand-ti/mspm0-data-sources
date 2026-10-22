Data sources for MSPM0 devices.

The data comes from the following:
- Header files from the [MSPM0 SDK] available on GitHub
- The metadata from SysConfig included in the `utils` folder of a CCS installation.
- Header files from the [AM13E2x SDK] available on GitHub (AM13E230x)
- Header files from the AM13E2x SDK 26.02.00.03 for the AM13E232x in `am13e232x-sdk`. That SDK is
  not on GitHub; only the register headers (`source/device/am13e232x/include/hw`) are copied, which
  carry a BSD 3-Clause license in each file.
- `svd/AM13E230X.svd` and `svd/AM13E232X.svd`, built by `tools/targetdb2svd.py` from the register
  descriptions in the `ccs_base/common/targetdb` folder of a CCS installation (CCS 21.0.1), since TI
  ships no SVD for these families. The SysConfig metadata in `sysconfig/AM13E230x` comes from
  SysConfig 1.28.1, the one in `sysconfig/AM13E232x` from SysConfig 1.28.999 (build 107).

The current version of the sysconfig metadata is 1.23

# Licensing

Please consult the license in the [MSPM0 SDK] repository and the [TPSA] for the sysconfig files. We cannot guarantee that the information in this repository is correct.

An important clause to note is that the [TPSA] only allows use with TI devices. The header files in the [MSPM0 SDK] appear to contain a BSD 3-Clause license.

[MSPM0 SDK]: https://github.com/TexasInstruments/mspm0-sdk
[AM13E2x SDK]: https://github.com/TexasInstruments/am13e2x_sdk
[TPSA]: TPSA.pdf

/*****************************************************************************

  Copyright (C) 2026 Texas Instruments Incorporated - http://www.ti.com/

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions
  are met:

   Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

   Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the
   distribution.

   Neither the name of Texas Instruments Incorporated nor the names of
   its contributors may be used to endorse or promote products derived
   from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*****************************************************************************/

#ifndef hw_sdfm__include
#define hw_sdfm__include


#ifndef __CORTEX_M
  #ifdef __cplusplus
    #define __I  volatile        /*!< Defines 'read only' permissions */
  #else
    #define __I  volatile const  /*!< Defines 'read only' permissions */
  #endif
  #define __O  volatile          /*!< Defines 'write only' permissions */
  #define __IO  volatile         /*!< Defines 'read / write' permissions */

  /* following defines should be used for structure members */
  #define __IM  volatile const   /*! Defines 'read only' structure member permissions */
  #define __OM  volatile         /*! Defines 'write only' structure member permissions */
  #define __IOM  volatile        /*! Defines 'read / write' structure member permissions */
#endif

/* Use standard integer types with explicit width */
#include <stdint.h>

#ifdef __cplusplus
 extern "C" {
#endif

#if defined ( __CC_ARM )
#pragma anon_unions
#endif

/******************************************************************************
* SDFM Registers
******************************************************************************/


/** @addtogroup SDFM
  @{
*/

typedef struct {
  __IO uint32_t SDIFLG;                            /* !< (@ 0x00000000) SD Interrupt Flag Register */
  __IO uint32_t SDIFLGCLR;                         /* !< (@ 0x00000004) SD Interrupt Flag Clear Register */
  __IO uint16_t SDCTL;                             /* !< (@ 0x00000008) SD Control Register */
       uint16_t RESERVED0;
  __IO uint16_t SDMFILEN;                          /* !< (@ 0x0000000C) SD Master Filter Enable */
  __IO uint16_t SDSTATUS;                          /* !< (@ 0x0000000E) SD Status Register */
  __IO uint16_t SDINTMODE;                         /* !< (@ 0x00000010) SD Interrupt Mode register */
       uint16_t RESERVED1[7];
  __IO uint16_t SDCTLPARM1;                        /* !< (@ 0x00000020) Control Parameter Register for Ch1 */
  __IO uint16_t SDDFPARM1;                         /* !< (@ 0x00000022) Data Filter Parameter Register for Ch1 */
  __IO uint16_t SDDPARM1;                          /* !< (@ 0x00000024) Data Parameter Register for Ch1 */
  __IO uint16_t SDFLT1CMPH1;                       /* !< (@ 0x00000026) High-level Threshold Register for Ch1 */
  __IO uint16_t SDFLT1CMPL1;                       /* !< (@ 0x00000028) Low-level Threshold Register for Ch1 */
  __IO uint16_t SDCPARM1;                          /* !< (@ 0x0000002A) Comparator Filter Parameter Register for Ch1 */
  __IO uint32_t SDDATA1;                           /* !< (@ 0x0000002C) Data Filter Data Register (16 or 32bit) for Ch1 */
  __IO uint32_t SDDATFIFO1;                        /* !< (@ 0x00000030) Filter Data FIFO Output(32b) for Ch1 */
  __IO uint16_t SDCDATA1;                          /* !< (@ 0x00000034) Comparator Filter Data Register (16b) for Ch1 */
  __IO uint16_t SDFLT1CMPH2;                       /* !< (@ 0x00000036) Second high level threhold  for CH1 */
  __IO uint16_t SDFLT1CMPHZ;                       /* !< (@ 0x00000038) High-level (Z) Threshold Register for Ch1 */
  __IO uint16_t SDFIFOCTL1;                        /* !< (@ 0x0000003A) FIFO Control Register for Ch1 */
  __IO uint16_t SDSYNC1;                           /* !< (@ 0x0000003C) SD Filter Sync control for Ch1 */
  __IO uint16_t SDFLT1CMPL2;                       /* !< (@ 0x0000003E) Second low level threhold  for CH1 */
  __IO uint16_t SDCTLPARM2;                        /* !< (@ 0x00000040) Control Parameter Register for Ch2 */
  __IO uint16_t SDDFPARM2;                         /* !< (@ 0x00000042) Data Filter Parameter Register for Ch2 */
  __IO uint16_t SDDPARM2;                          /* !< (@ 0x00000044) Data Parameter Register for Ch2 */
  __IO uint16_t SDFLT2CMPH1;                       /* !< (@ 0x00000046) High-level Threshold Register for Ch2 */
  __IO uint16_t SDFLT2CMPL1;                       /* !< (@ 0x00000048) Low-level Threshold Register for Ch2 */
  __IO uint16_t SDCPARM2;                          /* !< (@ 0x0000004A) Comparator Filter Parameter Register for Ch2 */
  __IO uint32_t SDDATA2;                           /* !< (@ 0x0000004C) Data Filter Data Register (16 or 32bit) for Ch2 */
  __IO uint32_t SDDATFIFO2;                        /* !< (@ 0x00000050) Filter Data FIFO Output(32b) for Ch2 */
  __IO uint16_t SDCDATA2;                          /* !< (@ 0x00000054) Comparator Filter Data Register (16b) for Ch2 */
  __IO uint16_t SDFLT2CMPH2;                       /* !< (@ 0x00000056) Second high level threhold  for CH2 */
  __IO uint16_t SDFLT2CMPHZ;                       /* !< (@ 0x00000058) High-level (Z) Threshold Register for Ch2 */
  __IO uint16_t SDFIFOCTL2;                        /* !< (@ 0x0000005A) FIFO Control Register for Ch2 */
  __IO uint16_t SDSYNC2;                           /* !< (@ 0x0000005C) SD Filter Sync control for Ch2 */
  __IO uint16_t SDFLT2CMPL2;                       /* !< (@ 0x0000005E) Second low level threhold  for CH2 */
  __IO uint16_t SDCTLPARM3;                        /* !< (@ 0x00000060) Control Parameter Register for Ch3 */
  __IO uint16_t SDDFPARM3;                         /* !< (@ 0x00000062) Data Filter Parameter Register for Ch3 */
  __IO uint16_t SDDPARM3;                          /* !< (@ 0x00000064) Data Parameter Register for Ch3 */
  __IO uint16_t SDFLT3CMPH1;                       /* !< (@ 0x00000066) High-level Threshold Register for Ch3 */
  __IO uint16_t SDFLT3CMPL1;                       /* !< (@ 0x00000068) Low-level Threshold Register for Ch3 */
  __IO uint16_t SDCPARM3;                          /* !< (@ 0x0000006A) Comparator Filter Parameter Register for Ch3 */
  __IO uint32_t SDDATA3;                           /* !< (@ 0x0000006C) Data Filter Data Register (16 or 32bit) for Ch3 */
  __IO uint32_t SDDATFIFO3;                        /* !< (@ 0x00000070) Filter Data FIFO Output(32b) for Ch3 */
  __IO uint16_t SDCDATA3;                          /* !< (@ 0x00000074) Comparator Filter Data Register (16b) for Ch3 */
  __IO uint16_t SDFLT3CMPH2;                       /* !< (@ 0x00000076) Second high level threhold  for CH3 */
  __IO uint16_t SDFLT3CMPHZ;                       /* !< (@ 0x00000078) High-level (Z) Threshold Register for Ch3 */
  __IO uint16_t SDFIFOCTL3;                        /* !< (@ 0x0000007A) FIFO Control Register for Ch3 */
  __IO uint16_t SDSYNC3;                           /* !< (@ 0x0000007C) SD Filter Sync control for Ch3 */
  __IO uint16_t SDFLT3CMPL2;                       /* !< (@ 0x0000007E) Second low level threhold  for CH3 */
  __IO uint16_t SDCTLPARM4;                        /* !< (@ 0x00000080) Control Parameter Register for Ch4 */
  __IO uint16_t SDDFPARM4;                         /* !< (@ 0x00000082) Data Filter Parameter Register for Ch4 */
  __IO uint16_t SDDPARM4;                          /* !< (@ 0x00000084) Data Parameter Register for Ch4 */
  __IO uint16_t SDFLT4CMPH1;                       /* !< (@ 0x00000086) High-level Threshold Register for Ch4 */
  __IO uint16_t SDFLT4CMPL1;                       /* !< (@ 0x00000088) Low-level Threshold Register for Ch4 */
  __IO uint16_t SDCPARM4;                          /* !< (@ 0x0000008A) Comparator Filter Parameter Register for Ch4 */
  __IO uint32_t SDDATA4;                           /* !< (@ 0x0000008C) Data Filter Data Register (16 or 32bit) for Ch4 */
  __IO uint32_t SDDATFIFO4;                        /* !< (@ 0x00000090) Filter Data FIFO Output(32b) for Ch4 */
  __IO uint16_t SDCDATA4;                          /* !< (@ 0x00000094) Comparator Filter Data Register (16b) for Ch4 */
  __IO uint16_t SDFLT4CMPH2;                       /* !< (@ 0x00000096) Second high level threhold  for CH4 */
  __IO uint16_t SDFLT4CMPHZ;                       /* !< (@ 0x00000098) High-level (Z) Threshold Register for Ch4 */
  __IO uint16_t SDFIFOCTL4;                        /* !< (@ 0x0000009A) FIFO Control Register for Ch4 */
  __IO uint16_t SDSYNC4;                           /* !< (@ 0x0000009C) SD Filter Sync control for Ch4 */
  __IO uint16_t SDFLT4CMPL2;                       /* !< (@ 0x0000009E) Second low level threhold  for CH4 */
       uint32_t RESERVED2[8];
  __IO uint16_t SDCOMP1CTL;                        /* !< (@ 0x000000C0) SD Comparator event filter1 Control Register */
  __IO uint16_t SDCOMP1EVT2FLTCTL;                 /* !< (@ 0x000000C2) COMPL/CEVT2 Digital filter1 Control Register */
  __IO uint16_t SDCOMP1EVT2FLTCLKCTL;              /* !< (@ 0x000000C4) COMPL/CEVT2 Digital filter1 Clock Control Register */
  __IO uint16_t SDCOMP1EVT1FLTCTL;                 /* !< (@ 0x000000C6) COMPH/CEVT1 Digital filter1 Control Register */
  __IO uint16_t SDCOMP1EVT1FLTCLKCTL;              /* !< (@ 0x000000C8) COMPH/CEVT1 Digital filter1 Clock Control Register */
       uint16_t RESERVED3[2];
  __IO uint16_t SDCOMP1LOCK;                       /* !< (@ 0x000000CE) SD  compartor event filter1 Lock Register */
  __IO uint16_t SDCOMP2CTL;                        /* !< (@ 0x000000D0) SD Comparator event filter2 Control Register */
  __IO uint16_t SDCOMP2EVT2FLTCTL;                 /* !< (@ 0x000000D2) COMPL/CEVT2 Digital filter2 Control Register */
  __IO uint16_t SDCOMP2EVT2FLTCLKCTL;              /* !< (@ 0x000000D4) COMPL/CEVT2 Digital filter2 Clock Control Register */
  __IO uint16_t SDCOMP2EVT1FLTCTL;                 /* !< (@ 0x000000D6) COMPH/CEVT1 Digital filter2 Control Register */
  __IO uint16_t SDCOMP2EVT1FLTCLKCTL;              /* !< (@ 0x000000D8) COMPH/CEVT1 Digital filter2 Clock Control Register */
       uint16_t RESERVED4[2];
  __IO uint16_t SDCOMP2LOCK;                       /* !< (@ 0x000000DE) SD  compartor event filter2 Lock Register */
  __IO uint16_t SDCOMP3CTL;                        /* !< (@ 0x000000E0) SD Comparator event filter3 Control Register */
  __IO uint16_t SDCOMP3EVT2FLTCTL;                 /* !< (@ 0x000000E2) COMPL/CEVT2 Digital filter3 Control Register */
  __IO uint16_t SDCOMP3EVT2FLTCLKCTL;              /* !< (@ 0x000000E4) COMPL/CEVT2 Digital filter3 Clock Control Register */
  __IO uint16_t SDCOMP3EVT1FLTCTL;                 /* !< (@ 0x000000E6) COMPH/CEVT1 Digital filter3 Control Register */
  __IO uint16_t SDCOMP3EVT1FLTCLKCTL;              /* !< (@ 0x000000E8) COMPH/CEVT1 Digital filter3 Clock Control Register */
       uint16_t RESERVED5[2];
  __IO uint16_t SDCOMP3LOCK;                       /* !< (@ 0x000000EE) SD  compartor event filter3 Lock Register */
  __IO uint16_t SDCOMP4CTL;                        /* !< (@ 0x000000F0) SD Comparator event filter4 Control Register */
  __IO uint16_t SDCOMP4EVT2FLTCTL;                 /* !< (@ 0x000000F2) COMPL/CEVT2 Digital filter4 Control Register */
  __IO uint16_t SDCOMP4EVT2FLTCLKCTL;              /* !< (@ 0x000000F4) COMPL/CEVT2 Digital filter4 Clock Control Register */
  __IO uint16_t SDCOMP4EVT1FLTCTL;                 /* !< (@ 0x000000F6) COMPH/CEVT1 Digital filter4 Control Register */
  __IO uint16_t SDCOMP4EVT1FLTCLKCTL;              /* !< (@ 0x000000F8) COMPH/CEVT1 Digital filter4 Clock Control Register */
       uint16_t RESERVED6[2];
  __IO uint16_t SDCOMP4LOCK;                       /* !< (@ 0x000000FE) SD  compartor event filter4 Lock Register */
} SDFM_Regs;

/*@}*/ /* end of group SDFM */



/******************************************************************************
* SDFM Register Offsets
******************************************************************************/
#define SDFM_SDIFLG                              (0x00000000U)
#define SDFM_SDIFLGCLR                           (0x00000004U)
#define SDFM_SDCTL                               (0x00000008U)
#define SDFM_SDMFILEN                            (0x0000000CU)
#define SDFM_SDSTATUS                            (0x0000000EU)
#define SDFM_SDINTMODE                           (0x00000010U)
#define SDFM_SDCTLPARM1                          (0x00000020U)
#define SDFM_SDDFPARM1                           (0x00000022U)
#define SDFM_SDDPARM1                            (0x00000024U)
#define SDFM_SDFLT1CMPH1                         (0x00000026U)
#define SDFM_SDFLT1CMPL1                         (0x00000028U)
#define SDFM_SDCPARM1                            (0x0000002AU)
#define SDFM_SDDATA1                             (0x0000002CU)
#define SDFM_SDDATFIFO1                          (0x00000030U)
#define SDFM_SDCDATA1                            (0x00000034U)
#define SDFM_SDFLT1CMPH2                         (0x00000036U)
#define SDFM_SDFLT1CMPHZ                         (0x00000038U)
#define SDFM_SDFIFOCTL1                          (0x0000003AU)
#define SDFM_SDSYNC1                             (0x0000003CU)
#define SDFM_SDFLT1CMPL2                         (0x0000003EU)
#define SDFM_SDCTLPARM2                          (0x00000040U)
#define SDFM_SDDFPARM2                           (0x00000042U)
#define SDFM_SDDPARM2                            (0x00000044U)
#define SDFM_SDFLT2CMPH1                         (0x00000046U)
#define SDFM_SDFLT2CMPL1                         (0x00000048U)
#define SDFM_SDCPARM2                            (0x0000004AU)
#define SDFM_SDDATA2                             (0x0000004CU)
#define SDFM_SDDATFIFO2                          (0x00000050U)
#define SDFM_SDCDATA2                            (0x00000054U)
#define SDFM_SDFLT2CMPH2                         (0x00000056U)
#define SDFM_SDFLT2CMPHZ                         (0x00000058U)
#define SDFM_SDFIFOCTL2                          (0x0000005AU)
#define SDFM_SDSYNC2                             (0x0000005CU)
#define SDFM_SDFLT2CMPL2                         (0x0000005EU)
#define SDFM_SDCTLPARM3                          (0x00000060U)
#define SDFM_SDDFPARM3                           (0x00000062U)
#define SDFM_SDDPARM3                            (0x00000064U)
#define SDFM_SDFLT3CMPH1                         (0x00000066U)
#define SDFM_SDFLT3CMPL1                         (0x00000068U)
#define SDFM_SDCPARM3                            (0x0000006AU)
#define SDFM_SDDATA3                             (0x0000006CU)
#define SDFM_SDDATFIFO3                          (0x00000070U)
#define SDFM_SDCDATA3                            (0x00000074U)
#define SDFM_SDFLT3CMPH2                         (0x00000076U)
#define SDFM_SDFLT3CMPHZ                         (0x00000078U)
#define SDFM_SDFIFOCTL3                          (0x0000007AU)
#define SDFM_SDSYNC3                             (0x0000007CU)
#define SDFM_SDFLT3CMPL2                         (0x0000007EU)
#define SDFM_SDCTLPARM4                          (0x00000080U)
#define SDFM_SDDFPARM4                           (0x00000082U)
#define SDFM_SDDPARM4                            (0x00000084U)
#define SDFM_SDFLT4CMPH1                         (0x00000086U)
#define SDFM_SDFLT4CMPL1                         (0x00000088U)
#define SDFM_SDCPARM4                            (0x0000008AU)
#define SDFM_SDDATA4                             (0x0000008CU)
#define SDFM_SDDATFIFO4                          (0x00000090U)
#define SDFM_SDCDATA4                            (0x00000094U)
#define SDFM_SDFLT4CMPH2                         (0x00000096U)
#define SDFM_SDFLT4CMPHZ                         (0x00000098U)
#define SDFM_SDFIFOCTL4                          (0x0000009AU)
#define SDFM_SDSYNC4                             (0x0000009CU)
#define SDFM_SDFLT4CMPL2                         (0x0000009EU)
#define SDFM_SDCOMP1CTL                          (0x000000C0U)
#define SDFM_SDCOMP1EVT2FLTCTL                   (0x000000C2U)
#define SDFM_SDCOMP1EVT2FLTCLKCTL                (0x000000C4U)
#define SDFM_SDCOMP1EVT1FLTCTL                   (0x000000C6U)
#define SDFM_SDCOMP1EVT1FLTCLKCTL                (0x000000C8U)
#define SDFM_SDCOMP1LOCK                         (0x000000CEU)
#define SDFM_SDCOMP2CTL                          (0x000000D0U)
#define SDFM_SDCOMP2EVT2FLTCTL                   (0x000000D2U)
#define SDFM_SDCOMP2EVT2FLTCLKCTL                (0x000000D4U)
#define SDFM_SDCOMP2EVT1FLTCTL                   (0x000000D6U)
#define SDFM_SDCOMP2EVT1FLTCLKCTL                (0x000000D8U)
#define SDFM_SDCOMP2LOCK                         (0x000000DEU)
#define SDFM_SDCOMP3CTL                          (0x000000E0U)
#define SDFM_SDCOMP3EVT2FLTCTL                   (0x000000E2U)
#define SDFM_SDCOMP3EVT2FLTCLKCTL                (0x000000E4U)
#define SDFM_SDCOMP3EVT1FLTCTL                   (0x000000E6U)
#define SDFM_SDCOMP3EVT1FLTCLKCTL                (0x000000E8U)
#define SDFM_SDCOMP3LOCK                         (0x000000EEU)
#define SDFM_SDCOMP4CTL                          (0x000000F0U)
#define SDFM_SDCOMP4EVT2FLTCTL                   (0x000000F2U)
#define SDFM_SDCOMP4EVT2FLTCLKCTL                (0x000000F4U)
#define SDFM_SDCOMP4EVT1FLTCTL                   (0x000000F6U)
#define SDFM_SDCOMP4EVT1FLTCLKCTL                (0x000000F8U)
#define SDFM_SDCOMP4LOCK                         (0x000000FEU)



#if defined ( __CC_ARM )
#pragma no_anon_unions
#endif

/******************************************************************************
* SDFM Register Control Bits
******************************************************************************/

/* SDFM_SDIFLG Bits */
/* SDFM_SDIFLG[FLT1_FLG_CEVT1] Bits */
#define SDFM_SDIFLG_FLT1_FLG_CEVT1_OFS           (0)                             /* !< FLT1_FLG_CEVT1 Offset */
#define SDFM_SDIFLG_FLT1_FLG_CEVT1_MASK          ((uint32_t)0x00000001U)         /* !< High-level Interrupt flag for Ch1 */
/* SDFM_SDIFLG[FLT1_FLG_CEVT2] Bits */
#define SDFM_SDIFLG_FLT1_FLG_CEVT2_OFS           (1)                             /* !< FLT1_FLG_CEVT2 Offset */
#define SDFM_SDIFLG_FLT1_FLG_CEVT2_MASK          ((uint32_t)0x00000002U)         /* !< Low-level Interrupt flag for Ch1 */
/* SDFM_SDIFLG[FLT2_FLG_CEVT1] Bits */
#define SDFM_SDIFLG_FLT2_FLG_CEVT1_OFS           (2)                             /* !< FLT2_FLG_CEVT1 Offset */
#define SDFM_SDIFLG_FLT2_FLG_CEVT1_MASK          ((uint32_t)0x00000004U)         /* !< High-level Interrupt flag for Ch2 */
/* SDFM_SDIFLG[FLT2_FLG_CEVT2] Bits */
#define SDFM_SDIFLG_FLT2_FLG_CEVT2_OFS           (3)                             /* !< FLT2_FLG_CEVT2 Offset */
#define SDFM_SDIFLG_FLT2_FLG_CEVT2_MASK          ((uint32_t)0x00000008U)         /* !< Low-level Interrupt flag for Ch2 */
/* SDFM_SDIFLG[FLT3_FLG_CEVT1] Bits */
#define SDFM_SDIFLG_FLT3_FLG_CEVT1_OFS           (4)                             /* !< FLT3_FLG_CEVT1 Offset */
#define SDFM_SDIFLG_FLT3_FLG_CEVT1_MASK          ((uint32_t)0x00000010U)         /* !< High-level Interrupt flag for Ch3 */
/* SDFM_SDIFLG[FLT3_FLG_CEVT2] Bits */
#define SDFM_SDIFLG_FLT3_FLG_CEVT2_OFS           (5)                             /* !< FLT3_FLG_CEVT2 Offset */
#define SDFM_SDIFLG_FLT3_FLG_CEVT2_MASK          ((uint32_t)0x00000020U)         /* !< Low-level Interrupt flag for Ch3 */
/* SDFM_SDIFLG[FLT4_FLG_CEVT1] Bits */
#define SDFM_SDIFLG_FLT4_FLG_CEVT1_OFS           (6)                             /* !< FLT4_FLG_CEVT1 Offset */
#define SDFM_SDIFLG_FLT4_FLG_CEVT1_MASK          ((uint32_t)0x00000040U)         /* !< High-level Interrupt flag for Ch4 */
/* SDFM_SDIFLG[FLT4_FLG_CEVT2] Bits */
#define SDFM_SDIFLG_FLT4_FLG_CEVT2_OFS           (7)                             /* !< FLT4_FLG_CEVT2 Offset */
#define SDFM_SDIFLG_FLT4_FLG_CEVT2_MASK          ((uint32_t)0x00000080U)         /* !< Low-level Interrupt flag for Ch4 */
/* SDFM_SDIFLG[MF1] Bits */
#define SDFM_SDIFLG_MF1_OFS                      (8)                             /* !< MF1 Offset */
#define SDFM_SDIFLG_MF1_MASK                     ((uint32_t)0x00000100U)         /* !< Modulator Failure for Filter 1 */
/* SDFM_SDIFLG[MF2] Bits */
#define SDFM_SDIFLG_MF2_OFS                      (9)                             /* !< MF2 Offset */
#define SDFM_SDIFLG_MF2_MASK                     ((uint32_t)0x00000200U)         /* !< Modulator Failure for Filter 2 */
/* SDFM_SDIFLG[MF3] Bits */
#define SDFM_SDIFLG_MF3_OFS                      (10)                            /* !< MF3 Offset */
#define SDFM_SDIFLG_MF3_MASK                     ((uint32_t)0x00000400U)         /* !< Modulator Failure for Filter 3 */
/* SDFM_SDIFLG[MF4] Bits */
#define SDFM_SDIFLG_MF4_OFS                      (11)                            /* !< MF4 Offset */
#define SDFM_SDIFLG_MF4_MASK                     ((uint32_t)0x00000800U)         /* !< Modulator Failure for Filter 4 */
/* SDFM_SDIFLG[AF1] Bits */
#define SDFM_SDIFLG_AF1_OFS                      (12)                            /* !< AF1 Offset */
#define SDFM_SDIFLG_AF1_MASK                     ((uint32_t)0x00001000U)         /* !< Acknowledge flag for Filter 1 */
/* SDFM_SDIFLG[AF2] Bits */
#define SDFM_SDIFLG_AF2_OFS                      (13)                            /* !< AF2 Offset */
#define SDFM_SDIFLG_AF2_MASK                     ((uint32_t)0x00002000U)         /* !< Acknowledge flag for Filter 2 */
/* SDFM_SDIFLG[AF3] Bits */
#define SDFM_SDIFLG_AF3_OFS                      (14)                            /* !< AF3 Offset */
#define SDFM_SDIFLG_AF3_MASK                     ((uint32_t)0x00004000U)         /* !< Acknowledge flag for Filter 3 */
/* SDFM_SDIFLG[AF4] Bits */
#define SDFM_SDIFLG_AF4_OFS                      (15)                            /* !< AF4 Offset */
#define SDFM_SDIFLG_AF4_MASK                     ((uint32_t)0x00008000U)         /* !< Acknowledge flag for Filter 4 */
/* SDFM_SDIFLG[SDFFOVF1] Bits */
#define SDFM_SDIFLG_SDFFOVF1_OFS                 (16)                            /* !< SDFFOVF1 Offset */
#define SDFM_SDIFLG_SDFFOVF1_MASK                ((uint32_t)0x00010000U)         /* !< FIFO Overflow Flag for Ch1. */
/* SDFM_SDIFLG[SDFFOVF2] Bits */
#define SDFM_SDIFLG_SDFFOVF2_OFS                 (17)                            /* !< SDFFOVF2 Offset */
#define SDFM_SDIFLG_SDFFOVF2_MASK                ((uint32_t)0x00020000U)         /* !< FIFO Overflow Flag for Ch2 */
/* SDFM_SDIFLG[SDFFOVF3] Bits */
#define SDFM_SDIFLG_SDFFOVF3_OFS                 (18)                            /* !< SDFFOVF3 Offset */
#define SDFM_SDIFLG_SDFFOVF3_MASK                ((uint32_t)0x00040000U)         /* !< FIFO Overflow Flag for Ch3 */
/* SDFM_SDIFLG[SDFFOVF4] Bits */
#define SDFM_SDIFLG_SDFFOVF4_OFS                 (19)                            /* !< SDFFOVF4 Offset */
#define SDFM_SDIFLG_SDFFOVF4_MASK                ((uint32_t)0x00080000U)         /* !< FIFO Overflow Flag for Ch4 */
/* SDFM_SDIFLG[SDFFINT1] Bits */
#define SDFM_SDIFLG_SDFFINT1_OFS                 (20)                            /* !< SDFFINT1 Offset */
#define SDFM_SDIFLG_SDFFINT1_MASK                ((uint32_t)0x00100000U)         /* !< SDFIFO interrupt for Ch1 */
/* SDFM_SDIFLG[SDFFINT2] Bits */
#define SDFM_SDIFLG_SDFFINT2_OFS                 (21)                            /* !< SDFFINT2 Offset */
#define SDFM_SDIFLG_SDFFINT2_MASK                ((uint32_t)0x00200000U)         /* !< SDFIFO interrupt for Ch2 */
/* SDFM_SDIFLG[SDFFINT3] Bits */
#define SDFM_SDIFLG_SDFFINT3_OFS                 (22)                            /* !< SDFFINT3 Offset */
#define SDFM_SDIFLG_SDFFINT3_MASK                ((uint32_t)0x00400000U)         /* !< SDFIFO interrupt for Ch3 */
/* SDFM_SDIFLG[SDFFINT4] Bits */
#define SDFM_SDIFLG_SDFFINT4_OFS                 (23)                            /* !< SDFFINT4 Offset */
#define SDFM_SDIFLG_SDFFINT4_MASK                ((uint32_t)0x00800000U)         /* !< SDFIFO interrupt for Ch4 */
/* SDFM_SDIFLG[MIF] Bits */
#define SDFM_SDIFLG_MIF_OFS                      (31)                            /* !< MIF Offset */
#define SDFM_SDIFLG_MIF_MASK                     ((uint32_t)0x80000000U)         /* !< Master Interrupt Flag */

/* SDFM_SDIFLGCLR Bits */
/* SDFM_SDIFLGCLR[FLT1_FLG_CEVT1] Bits */
#define SDFM_SDIFLGCLR_FLT1_FLG_CEVT1_OFS        (0)                             /* !< FLT1_FLG_CEVT1 Offset */
#define SDFM_SDIFLGCLR_FLT1_FLG_CEVT1_MASK       ((uint32_t)0x00000001U)         /* !< High-level Interrupt flag for Ch1 */
/* SDFM_SDIFLGCLR[FLT1_FLG_CEVT2] Bits */
#define SDFM_SDIFLGCLR_FLT1_FLG_CEVT2_OFS        (1)                             /* !< FLT1_FLG_CEVT2 Offset */
#define SDFM_SDIFLGCLR_FLT1_FLG_CEVT2_MASK       ((uint32_t)0x00000002U)         /* !< Low-level Interrupt flag for Ch1 */
/* SDFM_SDIFLGCLR[FLT2_FLG_CEVT1] Bits */
#define SDFM_SDIFLGCLR_FLT2_FLG_CEVT1_OFS        (2)                             /* !< FLT2_FLG_CEVT1 Offset */
#define SDFM_SDIFLGCLR_FLT2_FLG_CEVT1_MASK       ((uint32_t)0x00000004U)         /* !< High-level Interrupt flag for Ch2 */
/* SDFM_SDIFLGCLR[FLT2_FLG_CEVT2] Bits */
#define SDFM_SDIFLGCLR_FLT2_FLG_CEVT2_OFS        (3)                             /* !< FLT2_FLG_CEVT2 Offset */
#define SDFM_SDIFLGCLR_FLT2_FLG_CEVT2_MASK       ((uint32_t)0x00000008U)         /* !< Low-level Interrupt flag for Ch2 */
/* SDFM_SDIFLGCLR[FLT3_FLG_CEVT1] Bits */
#define SDFM_SDIFLGCLR_FLT3_FLG_CEVT1_OFS        (4)                             /* !< FLT3_FLG_CEVT1 Offset */
#define SDFM_SDIFLGCLR_FLT3_FLG_CEVT1_MASK       ((uint32_t)0x00000010U)         /* !< High-level Interrupt flag for Ch3 */
/* SDFM_SDIFLGCLR[FLT3_FLG_CEVT2] Bits */
#define SDFM_SDIFLGCLR_FLT3_FLG_CEVT2_OFS        (5)                             /* !< FLT3_FLG_CEVT2 Offset */
#define SDFM_SDIFLGCLR_FLT3_FLG_CEVT2_MASK       ((uint32_t)0x00000020U)         /* !< Low-level Interrupt flag for Ch3 */
/* SDFM_SDIFLGCLR[FLT4_FLG_CEVT1] Bits */
#define SDFM_SDIFLGCLR_FLT4_FLG_CEVT1_OFS        (6)                             /* !< FLT4_FLG_CEVT1 Offset */
#define SDFM_SDIFLGCLR_FLT4_FLG_CEVT1_MASK       ((uint32_t)0x00000040U)         /* !< High-level Interrupt flag for Ch4 */
/* SDFM_SDIFLGCLR[FLT4_FLG_CEVT2] Bits */
#define SDFM_SDIFLGCLR_FLT4_FLG_CEVT2_OFS        (7)                             /* !< FLT4_FLG_CEVT2 Offset */
#define SDFM_SDIFLGCLR_FLT4_FLG_CEVT2_MASK       ((uint32_t)0x00000080U)         /* !< Low-level Interrupt flag for Ch4 */
/* SDFM_SDIFLGCLR[MF1] Bits */
#define SDFM_SDIFLGCLR_MF1_OFS                   (8)                             /* !< MF1 Offset */
#define SDFM_SDIFLGCLR_MF1_MASK                  ((uint32_t)0x00000100U)         /* !< Modulator Failure for Filter 1 */
/* SDFM_SDIFLGCLR[MF2] Bits */
#define SDFM_SDIFLGCLR_MF2_OFS                   (9)                             /* !< MF2 Offset */
#define SDFM_SDIFLGCLR_MF2_MASK                  ((uint32_t)0x00000200U)         /* !< Modulator Failure for Filter 2 */
/* SDFM_SDIFLGCLR[MF3] Bits */
#define SDFM_SDIFLGCLR_MF3_OFS                   (10)                            /* !< MF3 Offset */
#define SDFM_SDIFLGCLR_MF3_MASK                  ((uint32_t)0x00000400U)         /* !< Modulator Failure for Filter 3 */
/* SDFM_SDIFLGCLR[MF4] Bits */
#define SDFM_SDIFLGCLR_MF4_OFS                   (11)                            /* !< MF4 Offset */
#define SDFM_SDIFLGCLR_MF4_MASK                  ((uint32_t)0x00000800U)         /* !< Modulator Failure for Filter 4 */
/* SDFM_SDIFLGCLR[AF1] Bits */
#define SDFM_SDIFLGCLR_AF1_OFS                   (12)                            /* !< AF1 Offset */
#define SDFM_SDIFLGCLR_AF1_MASK                  ((uint32_t)0x00001000U)         /* !< Acknowledge flag for Filter 1 */
/* SDFM_SDIFLGCLR[AF2] Bits */
#define SDFM_SDIFLGCLR_AF2_OFS                   (13)                            /* !< AF2 Offset */
#define SDFM_SDIFLGCLR_AF2_MASK                  ((uint32_t)0x00002000U)         /* !< Acknowledge flag for Filter 2 */
/* SDFM_SDIFLGCLR[AF3] Bits */
#define SDFM_SDIFLGCLR_AF3_OFS                   (14)                            /* !< AF3 Offset */
#define SDFM_SDIFLGCLR_AF3_MASK                  ((uint32_t)0x00004000U)         /* !< Acknowledge flag for Filter 3 */
/* SDFM_SDIFLGCLR[AF4] Bits */
#define SDFM_SDIFLGCLR_AF4_OFS                   (15)                            /* !< AF4 Offset */
#define SDFM_SDIFLGCLR_AF4_MASK                  ((uint32_t)0x00008000U)         /* !< Acknowledge flag for Filter 4 */
/* SDFM_SDIFLGCLR[SDFFOVF1] Bits */
#define SDFM_SDIFLGCLR_SDFFOVF1_OFS              (16)                            /* !< SDFFOVF1 Offset */
#define SDFM_SDIFLGCLR_SDFFOVF1_MASK             ((uint32_t)0x00010000U)         /* !< SDFIFO overflow clear Ch1 */
/* SDFM_SDIFLGCLR[SDFFOVF2] Bits */
#define SDFM_SDIFLGCLR_SDFFOVF2_OFS              (17)                            /* !< SDFFOVF2 Offset */
#define SDFM_SDIFLGCLR_SDFFOVF2_MASK             ((uint32_t)0x00020000U)         /* !< SDFIFO overflow clear Ch2 */
/* SDFM_SDIFLGCLR[SDFFOVF3] Bits */
#define SDFM_SDIFLGCLR_SDFFOVF3_OFS              (18)                            /* !< SDFFOVF3 Offset */
#define SDFM_SDIFLGCLR_SDFFOVF3_MASK             ((uint32_t)0x00040000U)         /* !< SDFIFO overflow clear Ch3 */
/* SDFM_SDIFLGCLR[SDFFOVF4] Bits */
#define SDFM_SDIFLGCLR_SDFFOVF4_OFS              (19)                            /* !< SDFFOVF4 Offset */
#define SDFM_SDIFLGCLR_SDFFOVF4_MASK             ((uint32_t)0x00080000U)         /* !< SDFIFO overflow clear Ch4 */
/* SDFM_SDIFLGCLR[SDFFINT1] Bits */
#define SDFM_SDIFLGCLR_SDFFINT1_OFS              (20)                            /* !< SDFFINT1 Offset */
#define SDFM_SDIFLGCLR_SDFFINT1_MASK             ((uint32_t)0x00100000U)         /* !< SDFIFO Interrupt flag-clear bit for
                                                                                    Ch1 */
/* SDFM_SDIFLGCLR[SDFFINT2] Bits */
#define SDFM_SDIFLGCLR_SDFFINT2_OFS              (21)                            /* !< SDFFINT2 Offset */
#define SDFM_SDIFLGCLR_SDFFINT2_MASK             ((uint32_t)0x00200000U)         /* !< SDFIFO Interrupt flag-clear bit for
                                                                                    Ch2 */
/* SDFM_SDIFLGCLR[SDFFINT3] Bits */
#define SDFM_SDIFLGCLR_SDFFINT3_OFS              (22)                            /* !< SDFFINT3 Offset */
#define SDFM_SDIFLGCLR_SDFFINT3_MASK             ((uint32_t)0x00400000U)         /* !< SDFIFO Interrupt flag-clear bit for
                                                                                    Ch3 */
/* SDFM_SDIFLGCLR[SDFFINT4] Bits */
#define SDFM_SDIFLGCLR_SDFFINT4_OFS              (23)                            /* !< SDFFINT4 Offset */
#define SDFM_SDIFLGCLR_SDFFINT4_MASK             ((uint32_t)0x00800000U)         /* !< SDFIFO Interrupt flag-clear bit for
                                                                                    Ch4 */
/* SDFM_SDIFLGCLR[MIF] Bits */
#define SDFM_SDIFLGCLR_MIF_OFS                   (31)                            /* !< MIF Offset */
#define SDFM_SDIFLGCLR_MIF_MASK                  ((uint32_t)0x80000000U)         /* !< Master Interrupt Flag */

/* SDFM_SDCTL Bits */
/* SDFM_SDCTL[HZ1] Bits */
#define SDFM_SDCTL_HZ1_OFS                       (0)                             /* !< HZ1 Offset */
#define SDFM_SDCTL_HZ1_MASK                      ((uint16_t)0x00000001U)         /* !< High-level Threshold crossing (Z)
                                                                                    flag Ch1 */
/* SDFM_SDCTL[HZ2] Bits */
#define SDFM_SDCTL_HZ2_OFS                       (1)                             /* !< HZ2 Offset */
#define SDFM_SDCTL_HZ2_MASK                      ((uint16_t)0x00000002U)         /* !< High-level Threshold crossing (Z)
                                                                                    flag Ch2 */
/* SDFM_SDCTL[HZ3] Bits */
#define SDFM_SDCTL_HZ3_OFS                       (2)                             /* !< HZ3 Offset */
#define SDFM_SDCTL_HZ3_MASK                      ((uint16_t)0x00000004U)         /* !< High-level Threshold crossing (Z)
                                                                                    flag Ch3 */
/* SDFM_SDCTL[HZ4] Bits */
#define SDFM_SDCTL_HZ4_OFS                       (3)                             /* !< HZ4 Offset */
#define SDFM_SDCTL_HZ4_MASK                      ((uint16_t)0x00000008U)         /* !< High-level Threshold crossing (Z)
                                                                                    flag Ch4 */
/* SDFM_SDCTL[MIE] Bits */
#define SDFM_SDCTL_MIE_OFS                       (13)                            /* !< MIE Offset */
#define SDFM_SDCTL_MIE_MASK                      ((uint16_t)0x00002000U)         /* !< Master SDy_ERR Interrupt enable */

/* SDFM_SDMFILEN Bits */
/* SDFM_SDMFILEN[MFE] Bits */
#define SDFM_SDMFILEN_MFE_OFS                    (11)                            /* !< MFE Offset */
#define SDFM_SDMFILEN_MFE_MASK                   ((uint16_t)0x00000800U)         /* !< Master Filter Enable. */

/* SDFM_SDSTATUS Bits */
/* SDFM_SDSTATUS[HZ1] Bits */
#define SDFM_SDSTATUS_HZ1_OFS                    (0)                             /* !< HZ1 Offset */
#define SDFM_SDSTATUS_HZ1_MASK                   ((uint16_t)0x00000001U)         /* !< High-level Threshold crossing (Z)
                                                                                    flag Ch1 */
/* SDFM_SDSTATUS[HZ2] Bits */
#define SDFM_SDSTATUS_HZ2_OFS                    (1)                             /* !< HZ2 Offset */
#define SDFM_SDSTATUS_HZ2_MASK                   ((uint16_t)0x00000002U)         /* !< High-level Threshold crossing (Z)
                                                                                    flag Ch2 */
/* SDFM_SDSTATUS[HZ3] Bits */
#define SDFM_SDSTATUS_HZ3_OFS                    (2)                             /* !< HZ3 Offset */
#define SDFM_SDSTATUS_HZ3_MASK                   ((uint16_t)0x00000004U)         /* !< High-level Threshold crossing (Z)
                                                                                    flag Ch3 */
/* SDFM_SDSTATUS[HZ4] Bits */
#define SDFM_SDSTATUS_HZ4_OFS                    (3)                             /* !< HZ4 Offset */
#define SDFM_SDSTATUS_HZ4_MASK                   ((uint16_t)0x00000008U)         /* !< High-level Threshold crossing (Z)
                                                                                    flag Ch4 */

/* SDFM_SDINTMODE Bits */
/* SDFM_SDINTMODE[SDINTMODESEL] Bits */
#define SDFM_SDINTMODE_SDINTMODESEL_OFS          (0)                             /* !< SDINTMODESEL Offset */
#define SDFM_SDINTMODE_SDINTMODESEL_MASK         ((uint16_t)0x00000001U)         /* !< CompxH/L events interrupt mode
                                                                                    select */

/* SDFM_SDCTLPARM1 Bits */
/* SDFM_SDCTLPARM1[MOD] Bits */
#define SDFM_SDCTLPARM1_MOD_OFS                  (0)                             /* !< MOD Offset */
#define SDFM_SDCTLPARM1_MOD_MASK                 ((uint16_t)0x00000003U)         /* !< Modulator clocking modes */
/* SDFM_SDCTLPARM1[SDCLKSEL] Bits */
#define SDFM_SDCTLPARM1_SDCLKSEL_OFS             (3)                             /* !< SDCLKSEL Offset */
#define SDFM_SDCTLPARM1_SDCLKSEL_MASK            ((uint16_t)0x00000008U)         /* !< SD1 Clock source select. */
/* SDFM_SDCTLPARM1[SDCLKSYNC] Bits */
#define SDFM_SDCTLPARM1_SDCLKSYNC_OFS            (4)                             /* !< SDCLKSYNC Offset */
#define SDFM_SDCTLPARM1_SDCLKSYNC_MASK           ((uint16_t)0x00000010U)         /* !< Enable Synchronizer on SD clock */
/* SDFM_SDCTLPARM1[SDDATASYNC] Bits */
#define SDFM_SDCTLPARM1_SDDATASYNC_OFS           (6)                             /* !< SDDATASYNC Offset */
#define SDFM_SDCTLPARM1_SDDATASYNC_MASK          ((uint16_t)0x00000040U)         /* !< Enable Synchronizer on SD data */

/* SDFM_SDDFPARM1 Bits */
/* SDFM_SDDFPARM1[DOSR] Bits */
#define SDFM_SDDFPARM1_DOSR_OFS                  (0)                             /* !< DOSR Offset */
#define SDFM_SDDFPARM1_DOSR_MASK                 ((uint16_t)0x000000FFU)         /* !< Data Filter Oversample Ratio=
                                                                                    DOSR+1 */
/* SDFM_SDDFPARM1[FEN] Bits */
#define SDFM_SDDFPARM1_FEN_OFS                   (8)                             /* !< FEN Offset */
#define SDFM_SDDFPARM1_FEN_MASK                  ((uint16_t)0x00000100U)         /* !< Filter Enable */
/* SDFM_SDDFPARM1[AE] Bits */
#define SDFM_SDDFPARM1_AE_OFS                    (9)                             /* !< AE Offset */
#define SDFM_SDDFPARM1_AE_MASK                   ((uint16_t)0x00000200U)         /* !< Ack Enable */
/* SDFM_SDDFPARM1[SST] Bits */
#define SDFM_SDDFPARM1_SST_OFS                   (10)                            /* !< SST Offset */
#define SDFM_SDDFPARM1_SST_MASK                  ((uint16_t)0x00000C00U)         /* !< Data filter Structure
                                                                                    (SincFast/1/2/3) */
/* SDFM_SDDFPARM1[SDSYNCEN] Bits */
#define SDFM_SDDFPARM1_SDSYNCEN_OFS              (12)                            /* !< SDSYNCEN Offset */
#define SDFM_SDDFPARM1_SDSYNCEN_MASK             ((uint16_t)0x00001000U)         /* !< Data Filter Reset Enable */

/* SDFM_SDDPARM1 Bits */
/* SDFM_SDDPARM1[DR] Bits */
#define SDFM_SDDPARM1_DR_OFS                     (10)                            /* !< DR Offset */
#define SDFM_SDDPARM1_DR_MASK                    ((uint16_t)0x00000400U)         /* !< Data Representation (0/1 = 16/32b
                                                                                    2's complement) */
/* SDFM_SDDPARM1[SH] Bits */
#define SDFM_SDDPARM1_SH_OFS                     (11)                            /* !< SH Offset */
#define SDFM_SDDPARM1_SH_MASK                    ((uint16_t)0x0000F800U)         /* !< Shift Control (# bits to shift in
                                                                                    16b mode) */

/* SDFM_SDFLT1CMPH1 Bits */
/* SDFM_SDFLT1CMPH1[HLT] Bits */
#define SDFM_SDFLT1CMPH1_HLT_OFS                 (0)                             /* !< HLT Offset */
#define SDFM_SDFLT1CMPH1_HLT_MASK                ((uint16_t)0x00007FFFU)         /* !< High-level threshold for the
                                                                                    comparator filter output */

/* SDFM_SDFLT1CMPL1 Bits */
/* SDFM_SDFLT1CMPL1[LLT] Bits */
#define SDFM_SDFLT1CMPL1_LLT_OFS                 (0)                             /* !< LLT Offset */
#define SDFM_SDFLT1CMPL1_LLT_MASK                ((uint16_t)0x00007FFFU)         /* !< Low-level threshold for the
                                                                                    comparator filter output */

/* SDFM_SDCPARM1 Bits */
/* SDFM_SDCPARM1[COSR] Bits */
#define SDFM_SDCPARM1_COSR_OFS                   (0)                             /* !< COSR Offset */
#define SDFM_SDCPARM1_COSR_MASK                  ((uint16_t)0x0000001FU)         /* !< Comparator Oversample Ratio. Actual
                                                                                    rate COSR+1 */
/* SDFM_SDCPARM1[EN_CEVT1] Bits */
#define SDFM_SDCPARM1_EN_CEVT1_OFS               (5)                             /* !< EN_CEVT1 Offset */
#define SDFM_SDCPARM1_EN_CEVT1_MASK              ((uint16_t)0x00000020U)         /* !< CEVT1 Interrupt enable. */
/* SDFM_SDCPARM1[EN_CEVT2] Bits */
#define SDFM_SDCPARM1_EN_CEVT2_OFS               (6)                             /* !< EN_CEVT2 Offset */
#define SDFM_SDCPARM1_EN_CEVT2_MASK              ((uint16_t)0x00000040U)         /* !< CEVT2 Interrupt enable. */
/* SDFM_SDCPARM1[CS1_CS0] Bits */
#define SDFM_SDCPARM1_CS1_CS0_OFS                (7)                             /* !< CS1_CS0 Offset */
#define SDFM_SDCPARM1_CS1_CS0_MASK               ((uint16_t)0x00000180U)         /* !< Comparator Filter Structure
                                                                                    (SincFast/1/2/3) */
/* SDFM_SDCPARM1[MFIE] Bits */
#define SDFM_SDCPARM1_MFIE_OFS                   (9)                             /* !< MFIE Offset */
#define SDFM_SDCPARM1_MFIE_MASK                  ((uint16_t)0x00000200U)         /* !< Modulator Failure Interrupt enable */
/* SDFM_SDCPARM1[HZEN] Bits */
#define SDFM_SDCPARM1_HZEN_OFS                   (10)                            /* !< HZEN Offset */
#define SDFM_SDCPARM1_HZEN_MASK                  ((uint16_t)0x00000400U)         /* !< High level (Z) Threshold crossing
                                                                                    output enable */
/* SDFM_SDCPARM1[CEVT1SEL] Bits */
#define SDFM_SDCPARM1_CEVT1SEL_OFS               (11)                            /* !< CEVT1SEL Offset */
#define SDFM_SDCPARM1_CEVT1SEL_MASK              ((uint16_t)0x00001800U)         /* !< Comparator Event1 select */
/* SDFM_SDCPARM1[CEN] Bits */
#define SDFM_SDCPARM1_CEN_OFS                    (13)                            /* !< CEN Offset */
#define SDFM_SDCPARM1_CEN_MASK                   ((uint16_t)0x00002000U)         /* !< Comparator Enable */
/* SDFM_SDCPARM1[CEVT2SEL] Bits */
#define SDFM_SDCPARM1_CEVT2SEL_OFS               (14)                            /* !< CEVT2SEL Offset */
#define SDFM_SDCPARM1_CEVT2SEL_MASK              ((uint16_t)0x0000C000U)         /* !< Comparator Event2 select */

/* SDFM_SDDATA1 Bits */
/* SDFM_SDDATA1[DATA16] Bits */
#define SDFM_SDDATA1_DATA16_OFS                  (0)                             /* !< DATA16 Offset */
#define SDFM_SDDATA1_DATA16_MASK                 ((uint32_t)0x0000FFFFU)         /* !< Lo-order 16b in 32b mode */
/* SDFM_SDDATA1[DATA32HI] Bits */
#define SDFM_SDDATA1_DATA32HI_OFS                (16)                            /* !< DATA32HI Offset */
#define SDFM_SDDATA1_DATA32HI_MASK               ((uint32_t)0xFFFF0000U)         /* !< Hi-order 16b in 32b mode, 16-bit
                                                                                    Data in 16b mode */

/* SDFM_SDDATFIFO1 Bits */
/* SDFM_SDDATFIFO1[DATA16] Bits */
#define SDFM_SDDATFIFO1_DATA16_OFS               (0)                             /* !< DATA16 Offset */
#define SDFM_SDDATFIFO1_DATA16_MASK              ((uint32_t)0x0000FFFFU)         /* !< Lo-order 16b in 32b mode */
/* SDFM_SDDATFIFO1[DATA32HI] Bits */
#define SDFM_SDDATFIFO1_DATA32HI_OFS             (16)                            /* !< DATA32HI Offset */
#define SDFM_SDDATFIFO1_DATA32HI_MASK            ((uint32_t)0xFFFF0000U)         /* !< Hi-order 16b in 32b mode, 16-bit
                                                                                    Data in 16b mode */

/* SDFM_SDCDATA1 Bits */
/* SDFM_SDCDATA1[DATA16] Bits */
#define SDFM_SDCDATA1_DATA16_OFS                 (0)                             /* !< DATA16 Offset */
#define SDFM_SDCDATA1_DATA16_MASK                ((uint16_t)0x0000FFFFU)         /* !< Comparator Data output - 16b only */

/* SDFM_SDFLT1CMPH2 Bits */
/* SDFM_SDFLT1CMPH2[HLT2] Bits */
#define SDFM_SDFLT1CMPH2_HLT2_OFS                (0)                             /* !< HLT2 Offset */
#define SDFM_SDFLT1CMPH2_HLT2_MASK               ((uint16_t)0x00007FFFU)         /* !< Second High level threshold. */

/* SDFM_SDFLT1CMPHZ Bits */
/* SDFM_SDFLT1CMPHZ[HLTZ] Bits */
#define SDFM_SDFLT1CMPHZ_HLTZ_OFS                (0)                             /* !< HLTZ Offset */
#define SDFM_SDFLT1CMPHZ_HLTZ_MASK               ((uint16_t)0x00007FFFU)         /* !< High-level threshold (Z) for the
                                                                                    comparator filter output */

/* SDFM_SDFIFOCTL1 Bits */
/* SDFM_SDFIFOCTL1[SDFFIL] Bits */
#define SDFM_SDFIFOCTL1_SDFFIL_OFS               (0)                             /* !< SDFFIL Offset */
#define SDFM_SDFIFOCTL1_SDFFIL_MASK              ((uint16_t)0x0000001FU)         /* !< SDFIFO Interrupt Level */
/* SDFM_SDFIFOCTL1[SDFFST] Bits */
#define SDFM_SDFIFOCTL1_SDFFST_OFS               (6)                             /* !< SDFFST Offset */
#define SDFM_SDFIFOCTL1_SDFFST_MASK              ((uint16_t)0x000007C0U)         /* !< SDFIFO Status */
/* SDFM_SDFIFOCTL1[FFIEN] Bits */
#define SDFM_SDFIFOCTL1_FFIEN_OFS                (12)                            /* !< FFIEN Offset */
#define SDFM_SDFIFOCTL1_FFIEN_MASK               ((uint16_t)0x00001000U)         /* !< SDFIFO data ready Interrupt Enable */
/* SDFM_SDFIFOCTL1[FFEN] Bits */
#define SDFM_SDFIFOCTL1_FFEN_OFS                 (13)                            /* !< FFEN Offset */
#define SDFM_SDFIFOCTL1_FFEN_MASK                ((uint16_t)0x00002000U)         /* !< SDFIFO Enable */
/* SDFM_SDFIFOCTL1[DRINTSEL] Bits */
#define SDFM_SDFIFOCTL1_DRINTSEL_OFS             (14)                            /* !< DRINTSEL Offset */
#define SDFM_SDFIFOCTL1_DRINTSEL_MASK            ((uint16_t)0x00004000U)         /* !< Data-Ready Interrupt Source Select */
/* SDFM_SDFIFOCTL1[OVFIEN] Bits */
#define SDFM_SDFIFOCTL1_OVFIEN_OFS               (15)                            /* !< OVFIEN Offset */
#define SDFM_SDFIFOCTL1_OVFIEN_MASK              ((uint16_t)0x00008000U)         /* !< SDFIFO Overflow interrupt enable */

/* SDFM_SDSYNC1 Bits */
/* SDFM_SDSYNC1[SYNCSEL] Bits */
#define SDFM_SDSYNC1_SYNCSEL_OFS                 (0)                             /* !< SYNCSEL Offset */
#define SDFM_SDSYNC1_SYNCSEL_MASK                ((uint16_t)0x0000003FU)         /* !< SDSYNC Source Select */
/* SDFM_SDSYNC1[WTSYNCEN] Bits */
#define SDFM_SDSYNC1_WTSYNCEN_OFS                (6)                             /* !< WTSYNCEN Offset */
#define SDFM_SDSYNC1_WTSYNCEN_MASK               ((uint16_t)0x00000040U)         /* !< Wait-for-Sync Enable */
/* SDFM_SDSYNC1[WTSYNFLG] Bits */
#define SDFM_SDSYNC1_WTSYNFLG_OFS                (7)                             /* !< WTSYNFLG Offset */
#define SDFM_SDSYNC1_WTSYNFLG_MASK               ((uint16_t)0x00000080U)         /* !< Wait-for-Sync Flag */
/* SDFM_SDSYNC1[WTSYNCLR] Bits */
#define SDFM_SDSYNC1_WTSYNCLR_OFS                (8)                             /* !< WTSYNCLR Offset */
#define SDFM_SDSYNC1_WTSYNCLR_MASK               ((uint16_t)0x00000100U)         /* !< Wait-for-Sync Flag Clear */
/* SDFM_SDSYNC1[FFSYNCCLREN] Bits */
#define SDFM_SDSYNC1_FFSYNCCLREN_OFS             (9)                             /* !< FFSYNCCLREN Offset */
#define SDFM_SDSYNC1_FFSYNCCLREN_MASK            ((uint16_t)0x00000200U)         /* !< FIFO Clear-on-SDSYNC Enable */
/* SDFM_SDSYNC1[WTSCLREN] Bits */
#define SDFM_SDSYNC1_WTSCLREN_OFS                (10)                            /* !< WTSCLREN Offset */
#define SDFM_SDSYNC1_WTSCLREN_MASK               ((uint16_t)0x00000400U)         /* !< WTSYNFLG Clear-on-FIFOINT Enable */

/* SDFM_SDFLT1CMPL2 Bits */
/* SDFM_SDFLT1CMPL2[LLT2] Bits */
#define SDFM_SDFLT1CMPL2_LLT2_OFS                (0)                             /* !< LLT2 Offset */
#define SDFM_SDFLT1CMPL2_LLT2_MASK               ((uint16_t)0x00007FFFU)         /* !< Second low-level threshold for the
                                                                                    comparator filter output. */

/* SDFM_SDCTLPARM2 Bits */
/* SDFM_SDCTLPARM2[MOD] Bits */
#define SDFM_SDCTLPARM2_MOD_OFS                  (0)                             /* !< MOD Offset */
#define SDFM_SDCTLPARM2_MOD_MASK                 ((uint16_t)0x00000003U)         /* !< Modulator clocking modes */
/* SDFM_SDCTLPARM2[SDCLKSEL] Bits */
#define SDFM_SDCTLPARM2_SDCLKSEL_OFS             (3)                             /* !< SDCLKSEL Offset */
#define SDFM_SDCTLPARM2_SDCLKSEL_MASK            ((uint16_t)0x00000008U)         /* !< SD2 Clock source select. */
/* SDFM_SDCTLPARM2[SDCLKSYNC] Bits */
#define SDFM_SDCTLPARM2_SDCLKSYNC_OFS            (4)                             /* !< SDCLKSYNC Offset */
#define SDFM_SDCTLPARM2_SDCLKSYNC_MASK           ((uint16_t)0x00000010U)         /* !< Enable Synchronizer on SD clock */
/* SDFM_SDCTLPARM2[SDDATASYNC] Bits */
#define SDFM_SDCTLPARM2_SDDATASYNC_OFS           (6)                             /* !< SDDATASYNC Offset */
#define SDFM_SDCTLPARM2_SDDATASYNC_MASK          ((uint16_t)0x00000040U)         /* !< Enable Synchronizer on SD data */

/* SDFM_SDDFPARM2 Bits */
/* SDFM_SDDFPARM2[DOSR] Bits */
#define SDFM_SDDFPARM2_DOSR_OFS                  (0)                             /* !< DOSR Offset */
#define SDFM_SDDFPARM2_DOSR_MASK                 ((uint16_t)0x000000FFU)         /* !< Data Filter Oversample Ratio=
                                                                                    DOSR+1 */
/* SDFM_SDDFPARM2[FEN] Bits */
#define SDFM_SDDFPARM2_FEN_OFS                   (8)                             /* !< FEN Offset */
#define SDFM_SDDFPARM2_FEN_MASK                  ((uint16_t)0x00000100U)         /* !< Filter Enable */
/* SDFM_SDDFPARM2[AE] Bits */
#define SDFM_SDDFPARM2_AE_OFS                    (9)                             /* !< AE Offset */
#define SDFM_SDDFPARM2_AE_MASK                   ((uint16_t)0x00000200U)         /* !< Ack Enable */
/* SDFM_SDDFPARM2[SST] Bits */
#define SDFM_SDDFPARM2_SST_OFS                   (10)                            /* !< SST Offset */
#define SDFM_SDDFPARM2_SST_MASK                  ((uint16_t)0x00000C00U)         /* !< Data filter Structure
                                                                                    (SincFast/1/2/3) */
/* SDFM_SDDFPARM2[SDSYNCEN] Bits */
#define SDFM_SDDFPARM2_SDSYNCEN_OFS              (12)                            /* !< SDSYNCEN Offset */
#define SDFM_SDDFPARM2_SDSYNCEN_MASK             ((uint16_t)0x00001000U)         /* !< Data Filter Reset Enable */

/* SDFM_SDDPARM2 Bits */
/* SDFM_SDDPARM2[DR] Bits */
#define SDFM_SDDPARM2_DR_OFS                     (10)                            /* !< DR Offset */
#define SDFM_SDDPARM2_DR_MASK                    ((uint16_t)0x00000400U)         /* !< Data Representation (0/1 = 16/32b
                                                                                    2's complement) */
/* SDFM_SDDPARM2[SH] Bits */
#define SDFM_SDDPARM2_SH_OFS                     (11)                            /* !< SH Offset */
#define SDFM_SDDPARM2_SH_MASK                    ((uint16_t)0x0000F800U)         /* !< Shift Control (# bits to shift in
                                                                                    16b mode) */

/* SDFM_SDFLT2CMPH1 Bits */
/* SDFM_SDFLT2CMPH1[HLT] Bits */
#define SDFM_SDFLT2CMPH1_HLT_OFS                 (0)                             /* !< HLT Offset */
#define SDFM_SDFLT2CMPH1_HLT_MASK                ((uint16_t)0x00007FFFU)         /* !< High-level threshold for the
                                                                                    comparator filter output */

/* SDFM_SDFLT2CMPL1 Bits */
/* SDFM_SDFLT2CMPL1[LLT] Bits */
#define SDFM_SDFLT2CMPL1_LLT_OFS                 (0)                             /* !< LLT Offset */
#define SDFM_SDFLT2CMPL1_LLT_MASK                ((uint16_t)0x00007FFFU)         /* !< Low-level threshold for the
                                                                                    comparator filter output */

/* SDFM_SDCPARM2 Bits */
/* SDFM_SDCPARM2[COSR] Bits */
#define SDFM_SDCPARM2_COSR_OFS                   (0)                             /* !< COSR Offset */
#define SDFM_SDCPARM2_COSR_MASK                  ((uint16_t)0x0000001FU)         /* !< Comparator Oversample Ratio. Actual
                                                                                    rate COSR+1 */
/* SDFM_SDCPARM2[EN_CEVT1] Bits */
#define SDFM_SDCPARM2_EN_CEVT1_OFS               (5)                             /* !< EN_CEVT1 Offset */
#define SDFM_SDCPARM2_EN_CEVT1_MASK              ((uint16_t)0x00000020U)         /* !< CEVT1 Interrupt enable. */
/* SDFM_SDCPARM2[EN_CEVT2] Bits */
#define SDFM_SDCPARM2_EN_CEVT2_OFS               (6)                             /* !< EN_CEVT2 Offset */
#define SDFM_SDCPARM2_EN_CEVT2_MASK              ((uint16_t)0x00000040U)         /* !< CEVT2 Interrupt enable. */
/* SDFM_SDCPARM2[CS1_CS0] Bits */
#define SDFM_SDCPARM2_CS1_CS0_OFS                (7)                             /* !< CS1_CS0 Offset */
#define SDFM_SDCPARM2_CS1_CS0_MASK               ((uint16_t)0x00000180U)         /* !< Comparator Filter Structure
                                                                                    (SincFast/1/2/3) */
/* SDFM_SDCPARM2[MFIE] Bits */
#define SDFM_SDCPARM2_MFIE_OFS                   (9)                             /* !< MFIE Offset */
#define SDFM_SDCPARM2_MFIE_MASK                  ((uint16_t)0x00000200U)         /* !< Modulator Failure Interrupt enable */
/* SDFM_SDCPARM2[HZEN] Bits */
#define SDFM_SDCPARM2_HZEN_OFS                   (10)                            /* !< HZEN Offset */
#define SDFM_SDCPARM2_HZEN_MASK                  ((uint16_t)0x00000400U)         /* !< High level (Z) Threshold crossing
                                                                                    output enable */
/* SDFM_SDCPARM2[CEVT1SEL] Bits */
#define SDFM_SDCPARM2_CEVT1SEL_OFS               (11)                            /* !< CEVT1SEL Offset */
#define SDFM_SDCPARM2_CEVT1SEL_MASK              ((uint16_t)0x00001800U)         /* !< Comparator Event1 select */
/* SDFM_SDCPARM2[CEN] Bits */
#define SDFM_SDCPARM2_CEN_OFS                    (13)                            /* !< CEN Offset */
#define SDFM_SDCPARM2_CEN_MASK                   ((uint16_t)0x00002000U)         /* !< Comparator Enable */
/* SDFM_SDCPARM2[CEVT2SEL] Bits */
#define SDFM_SDCPARM2_CEVT2SEL_OFS               (14)                            /* !< CEVT2SEL Offset */
#define SDFM_SDCPARM2_CEVT2SEL_MASK              ((uint16_t)0x0000C000U)         /* !< Comparator Event2 select */

/* SDFM_SDDATA2 Bits */
/* SDFM_SDDATA2[DATA16] Bits */
#define SDFM_SDDATA2_DATA16_OFS                  (0)                             /* !< DATA16 Offset */
#define SDFM_SDDATA2_DATA16_MASK                 ((uint32_t)0x0000FFFFU)         /* !< Lo-order 16b in 32b mode */
/* SDFM_SDDATA2[DATA32HI] Bits */
#define SDFM_SDDATA2_DATA32HI_OFS                (16)                            /* !< DATA32HI Offset */
#define SDFM_SDDATA2_DATA32HI_MASK               ((uint32_t)0xFFFF0000U)         /* !< Hi-order 16b in 32b mode, 16-bit
                                                                                    Data in 16b mode */

/* SDFM_SDDATFIFO2 Bits */
/* SDFM_SDDATFIFO2[DATA16] Bits */
#define SDFM_SDDATFIFO2_DATA16_OFS               (0)                             /* !< DATA16 Offset */
#define SDFM_SDDATFIFO2_DATA16_MASK              ((uint32_t)0x0000FFFFU)         /* !< Lo-order 16b in 32b mode */
/* SDFM_SDDATFIFO2[DATA32HI] Bits */
#define SDFM_SDDATFIFO2_DATA32HI_OFS             (16)                            /* !< DATA32HI Offset */
#define SDFM_SDDATFIFO2_DATA32HI_MASK            ((uint32_t)0xFFFF0000U)         /* !< Hi-order 16b in 32b mode, 16-bit
                                                                                    Data in 16b mode */

/* SDFM_SDCDATA2 Bits */
/* SDFM_SDCDATA2[DATA16] Bits */
#define SDFM_SDCDATA2_DATA16_OFS                 (0)                             /* !< DATA16 Offset */
#define SDFM_SDCDATA2_DATA16_MASK                ((uint16_t)0x0000FFFFU)         /* !< Comparator Data output - 16b only */

/* SDFM_SDFLT2CMPH2 Bits */
/* SDFM_SDFLT2CMPH2[HLT2] Bits */
#define SDFM_SDFLT2CMPH2_HLT2_OFS                (0)                             /* !< HLT2 Offset */
#define SDFM_SDFLT2CMPH2_HLT2_MASK               ((uint16_t)0x00007FFFU)         /* !< Second High level threshold. */

/* SDFM_SDFLT2CMPHZ Bits */
/* SDFM_SDFLT2CMPHZ[HLTZ] Bits */
#define SDFM_SDFLT2CMPHZ_HLTZ_OFS                (0)                             /* !< HLTZ Offset */
#define SDFM_SDFLT2CMPHZ_HLTZ_MASK               ((uint16_t)0x00007FFFU)         /* !< High-level threshold (Z) for the
                                                                                    comparator filter output */

/* SDFM_SDFIFOCTL2 Bits */
/* SDFM_SDFIFOCTL2[SDFFIL] Bits */
#define SDFM_SDFIFOCTL2_SDFFIL_OFS               (0)                             /* !< SDFFIL Offset */
#define SDFM_SDFIFOCTL2_SDFFIL_MASK              ((uint16_t)0x0000001FU)         /* !< SDFIFO Interrupt Level */
/* SDFM_SDFIFOCTL2[SDFFST] Bits */
#define SDFM_SDFIFOCTL2_SDFFST_OFS               (6)                             /* !< SDFFST Offset */
#define SDFM_SDFIFOCTL2_SDFFST_MASK              ((uint16_t)0x000007C0U)         /* !< SDFIFO Status */
/* SDFM_SDFIFOCTL2[FFIEN] Bits */
#define SDFM_SDFIFOCTL2_FFIEN_OFS                (12)                            /* !< FFIEN Offset */
#define SDFM_SDFIFOCTL2_FFIEN_MASK               ((uint16_t)0x00001000U)         /* !< SDFIFO data ready Interrupt Enable */
/* SDFM_SDFIFOCTL2[FFEN] Bits */
#define SDFM_SDFIFOCTL2_FFEN_OFS                 (13)                            /* !< FFEN Offset */
#define SDFM_SDFIFOCTL2_FFEN_MASK                ((uint16_t)0x00002000U)         /* !< SDFIFO Enable */
/* SDFM_SDFIFOCTL2[DRINTSEL] Bits */
#define SDFM_SDFIFOCTL2_DRINTSEL_OFS             (14)                            /* !< DRINTSEL Offset */
#define SDFM_SDFIFOCTL2_DRINTSEL_MASK            ((uint16_t)0x00004000U)         /* !< Data-Ready Interrupt Source Select */
/* SDFM_SDFIFOCTL2[OVFIEN] Bits */
#define SDFM_SDFIFOCTL2_OVFIEN_OFS               (15)                            /* !< OVFIEN Offset */
#define SDFM_SDFIFOCTL2_OVFIEN_MASK              ((uint16_t)0x00008000U)         /* !< SDFIFO Overflow interrupt enable */

/* SDFM_SDSYNC2 Bits */
/* SDFM_SDSYNC2[SYNCSEL] Bits */
#define SDFM_SDSYNC2_SYNCSEL_OFS                 (0)                             /* !< SYNCSEL Offset */
#define SDFM_SDSYNC2_SYNCSEL_MASK                ((uint16_t)0x0000003FU)         /* !< SDSYNC Source Select */
/* SDFM_SDSYNC2[WTSYNCEN] Bits */
#define SDFM_SDSYNC2_WTSYNCEN_OFS                (6)                             /* !< WTSYNCEN Offset */
#define SDFM_SDSYNC2_WTSYNCEN_MASK               ((uint16_t)0x00000040U)         /* !< Wait-for-Sync Enable */
/* SDFM_SDSYNC2[WTSYNFLG] Bits */
#define SDFM_SDSYNC2_WTSYNFLG_OFS                (7)                             /* !< WTSYNFLG Offset */
#define SDFM_SDSYNC2_WTSYNFLG_MASK               ((uint16_t)0x00000080U)         /* !< Wait-for-Sync Flag */
/* SDFM_SDSYNC2[WTSYNCLR] Bits */
#define SDFM_SDSYNC2_WTSYNCLR_OFS                (8)                             /* !< WTSYNCLR Offset */
#define SDFM_SDSYNC2_WTSYNCLR_MASK               ((uint16_t)0x00000100U)         /* !< Wait-for-Sync Flag Clear */
/* SDFM_SDSYNC2[FFSYNCCLREN] Bits */
#define SDFM_SDSYNC2_FFSYNCCLREN_OFS             (9)                             /* !< FFSYNCCLREN Offset */
#define SDFM_SDSYNC2_FFSYNCCLREN_MASK            ((uint16_t)0x00000200U)         /* !< FIFO Clear-on-SDSYNC Enable */
/* SDFM_SDSYNC2[WTSCLREN] Bits */
#define SDFM_SDSYNC2_WTSCLREN_OFS                (10)                            /* !< WTSCLREN Offset */
#define SDFM_SDSYNC2_WTSCLREN_MASK               ((uint16_t)0x00000400U)         /* !< WTSYNFLG Clear-on-FIFOINT Enable */

/* SDFM_SDFLT2CMPL2 Bits */
/* SDFM_SDFLT2CMPL2[LLT2] Bits */
#define SDFM_SDFLT2CMPL2_LLT2_OFS                (0)                             /* !< LLT2 Offset */
#define SDFM_SDFLT2CMPL2_LLT2_MASK               ((uint16_t)0x00007FFFU)         /* !< Second low-level threshold for the
                                                                                    comparator filter output. */

/* SDFM_SDCTLPARM3 Bits */
/* SDFM_SDCTLPARM3[MOD] Bits */
#define SDFM_SDCTLPARM3_MOD_OFS                  (0)                             /* !< MOD Offset */
#define SDFM_SDCTLPARM3_MOD_MASK                 ((uint16_t)0x00000003U)         /* !< Modulator clocking modes */
/* SDFM_SDCTLPARM3[SDCLKSEL] Bits */
#define SDFM_SDCTLPARM3_SDCLKSEL_OFS             (3)                             /* !< SDCLKSEL Offset */
#define SDFM_SDCTLPARM3_SDCLKSEL_MASK            ((uint16_t)0x00000008U)         /* !< SD3 Clock source select. */
/* SDFM_SDCTLPARM3[SDCLKSYNC] Bits */
#define SDFM_SDCTLPARM3_SDCLKSYNC_OFS            (4)                             /* !< SDCLKSYNC Offset */
#define SDFM_SDCTLPARM3_SDCLKSYNC_MASK           ((uint16_t)0x00000010U)         /* !< Enable Synchronizer on SD clock */
/* SDFM_SDCTLPARM3[SDDATASYNC] Bits */
#define SDFM_SDCTLPARM3_SDDATASYNC_OFS           (6)                             /* !< SDDATASYNC Offset */
#define SDFM_SDCTLPARM3_SDDATASYNC_MASK          ((uint16_t)0x00000040U)         /* !< Enable Synchronizer on SD data */

/* SDFM_SDDFPARM3 Bits */
/* SDFM_SDDFPARM3[DOSR] Bits */
#define SDFM_SDDFPARM3_DOSR_OFS                  (0)                             /* !< DOSR Offset */
#define SDFM_SDDFPARM3_DOSR_MASK                 ((uint16_t)0x000000FFU)         /* !< Data Filter Oversample Ratio=
                                                                                    DOSR+1 */
/* SDFM_SDDFPARM3[FEN] Bits */
#define SDFM_SDDFPARM3_FEN_OFS                   (8)                             /* !< FEN Offset */
#define SDFM_SDDFPARM3_FEN_MASK                  ((uint16_t)0x00000100U)         /* !< Filter Enable */
/* SDFM_SDDFPARM3[AE] Bits */
#define SDFM_SDDFPARM3_AE_OFS                    (9)                             /* !< AE Offset */
#define SDFM_SDDFPARM3_AE_MASK                   ((uint16_t)0x00000200U)         /* !< Ack Enable */
/* SDFM_SDDFPARM3[SST] Bits */
#define SDFM_SDDFPARM3_SST_OFS                   (10)                            /* !< SST Offset */
#define SDFM_SDDFPARM3_SST_MASK                  ((uint16_t)0x00000C00U)         /* !< Data filter Structure
                                                                                    (SincFast/1/2/3) */
/* SDFM_SDDFPARM3[SDSYNCEN] Bits */
#define SDFM_SDDFPARM3_SDSYNCEN_OFS              (12)                            /* !< SDSYNCEN Offset */
#define SDFM_SDDFPARM3_SDSYNCEN_MASK             ((uint16_t)0x00001000U)         /* !< Data Filter Reset Enable */

/* SDFM_SDDPARM3 Bits */
/* SDFM_SDDPARM3[DR] Bits */
#define SDFM_SDDPARM3_DR_OFS                     (10)                            /* !< DR Offset */
#define SDFM_SDDPARM3_DR_MASK                    ((uint16_t)0x00000400U)         /* !< Data Representation (0/1 = 16/32b
                                                                                    2's complement) */
/* SDFM_SDDPARM3[SH] Bits */
#define SDFM_SDDPARM3_SH_OFS                     (11)                            /* !< SH Offset */
#define SDFM_SDDPARM3_SH_MASK                    ((uint16_t)0x0000F800U)         /* !< Shift Control (# bits to shift in
                                                                                    16b mode) */

/* SDFM_SDFLT3CMPH1 Bits */
/* SDFM_SDFLT3CMPH1[HLT] Bits */
#define SDFM_SDFLT3CMPH1_HLT_OFS                 (0)                             /* !< HLT Offset */
#define SDFM_SDFLT3CMPH1_HLT_MASK                ((uint16_t)0x00007FFFU)         /* !< High-level threshold for the
                                                                                    comparator filter output */

/* SDFM_SDFLT3CMPL1 Bits */
/* SDFM_SDFLT3CMPL1[LLT] Bits */
#define SDFM_SDFLT3CMPL1_LLT_OFS                 (0)                             /* !< LLT Offset */
#define SDFM_SDFLT3CMPL1_LLT_MASK                ((uint16_t)0x00007FFFU)         /* !< Low-level threshold for the
                                                                                    comparator filter output */

/* SDFM_SDCPARM3 Bits */
/* SDFM_SDCPARM3[COSR] Bits */
#define SDFM_SDCPARM3_COSR_OFS                   (0)                             /* !< COSR Offset */
#define SDFM_SDCPARM3_COSR_MASK                  ((uint16_t)0x0000001FU)         /* !< Comparator Oversample Ratio. Actual
                                                                                    rate COSR+1 */
/* SDFM_SDCPARM3[EN_CEVT1] Bits */
#define SDFM_SDCPARM3_EN_CEVT1_OFS               (5)                             /* !< EN_CEVT1 Offset */
#define SDFM_SDCPARM3_EN_CEVT1_MASK              ((uint16_t)0x00000020U)         /* !< CEVT1 Interrupt enable. */
/* SDFM_SDCPARM3[EN_CEVT2] Bits */
#define SDFM_SDCPARM3_EN_CEVT2_OFS               (6)                             /* !< EN_CEVT2 Offset */
#define SDFM_SDCPARM3_EN_CEVT2_MASK              ((uint16_t)0x00000040U)         /* !< CEVT2 Interrupt enable. */
/* SDFM_SDCPARM3[CS1_CS0] Bits */
#define SDFM_SDCPARM3_CS1_CS0_OFS                (7)                             /* !< CS1_CS0 Offset */
#define SDFM_SDCPARM3_CS1_CS0_MASK               ((uint16_t)0x00000180U)         /* !< Comparator Filter Structure
                                                                                    (SincFast/1/2/3) */
/* SDFM_SDCPARM3[MFIE] Bits */
#define SDFM_SDCPARM3_MFIE_OFS                   (9)                             /* !< MFIE Offset */
#define SDFM_SDCPARM3_MFIE_MASK                  ((uint16_t)0x00000200U)         /* !< Modulator Failure Interrupt enable */
/* SDFM_SDCPARM3[HZEN] Bits */
#define SDFM_SDCPARM3_HZEN_OFS                   (10)                            /* !< HZEN Offset */
#define SDFM_SDCPARM3_HZEN_MASK                  ((uint16_t)0x00000400U)         /* !< High level (Z) Threshold crossing
                                                                                    output enable */
/* SDFM_SDCPARM3[CEVT1SEL] Bits */
#define SDFM_SDCPARM3_CEVT1SEL_OFS               (11)                            /* !< CEVT1SEL Offset */
#define SDFM_SDCPARM3_CEVT1SEL_MASK              ((uint16_t)0x00001800U)         /* !< Comparator Event1 select */
/* SDFM_SDCPARM3[CEN] Bits */
#define SDFM_SDCPARM3_CEN_OFS                    (13)                            /* !< CEN Offset */
#define SDFM_SDCPARM3_CEN_MASK                   ((uint16_t)0x00002000U)         /* !< Comparator Enable */
/* SDFM_SDCPARM3[CEVT2SEL] Bits */
#define SDFM_SDCPARM3_CEVT2SEL_OFS               (14)                            /* !< CEVT2SEL Offset */
#define SDFM_SDCPARM3_CEVT2SEL_MASK              ((uint16_t)0x0000C000U)         /* !< Comparator Event2 select */

/* SDFM_SDDATA3 Bits */
/* SDFM_SDDATA3[DATA16] Bits */
#define SDFM_SDDATA3_DATA16_OFS                  (0)                             /* !< DATA16 Offset */
#define SDFM_SDDATA3_DATA16_MASK                 ((uint32_t)0x0000FFFFU)         /* !< Lo-order 16b in 32b mode */
/* SDFM_SDDATA3[DATA32HI] Bits */
#define SDFM_SDDATA3_DATA32HI_OFS                (16)                            /* !< DATA32HI Offset */
#define SDFM_SDDATA3_DATA32HI_MASK               ((uint32_t)0xFFFF0000U)         /* !< Hi-order 16b in 32b mode, 16-bit
                                                                                    Data in 16b mode */

/* SDFM_SDDATFIFO3 Bits */
/* SDFM_SDDATFIFO3[DATA16] Bits */
#define SDFM_SDDATFIFO3_DATA16_OFS               (0)                             /* !< DATA16 Offset */
#define SDFM_SDDATFIFO3_DATA16_MASK              ((uint32_t)0x0000FFFFU)         /* !< Lo-order 16b in 32b mode */
/* SDFM_SDDATFIFO3[DATA32HI] Bits */
#define SDFM_SDDATFIFO3_DATA32HI_OFS             (16)                            /* !< DATA32HI Offset */
#define SDFM_SDDATFIFO3_DATA32HI_MASK            ((uint32_t)0xFFFF0000U)         /* !< Hi-order 16b in 32b mode, 16-bit
                                                                                    Data in 16b mode */

/* SDFM_SDCDATA3 Bits */
/* SDFM_SDCDATA3[DATA16] Bits */
#define SDFM_SDCDATA3_DATA16_OFS                 (0)                             /* !< DATA16 Offset */
#define SDFM_SDCDATA3_DATA16_MASK                ((uint16_t)0x0000FFFFU)         /* !< Comparator Data output - 16b only */

/* SDFM_SDFLT3CMPH2 Bits */
/* SDFM_SDFLT3CMPH2[HLT2] Bits */
#define SDFM_SDFLT3CMPH2_HLT2_OFS                (0)                             /* !< HLT2 Offset */
#define SDFM_SDFLT3CMPH2_HLT2_MASK               ((uint16_t)0x00007FFFU)         /* !< Second High level threshold. */

/* SDFM_SDFLT3CMPHZ Bits */
/* SDFM_SDFLT3CMPHZ[HLTZ] Bits */
#define SDFM_SDFLT3CMPHZ_HLTZ_OFS                (0)                             /* !< HLTZ Offset */
#define SDFM_SDFLT3CMPHZ_HLTZ_MASK               ((uint16_t)0x00007FFFU)         /* !< High-level threshold (Z) for the
                                                                                    comparator filter output */

/* SDFM_SDFIFOCTL3 Bits */
/* SDFM_SDFIFOCTL3[SDFFIL] Bits */
#define SDFM_SDFIFOCTL3_SDFFIL_OFS               (0)                             /* !< SDFFIL Offset */
#define SDFM_SDFIFOCTL3_SDFFIL_MASK              ((uint16_t)0x0000001FU)         /* !< SDFIFO Interrupt Level */
/* SDFM_SDFIFOCTL3[SDFFST] Bits */
#define SDFM_SDFIFOCTL3_SDFFST_OFS               (6)                             /* !< SDFFST Offset */
#define SDFM_SDFIFOCTL3_SDFFST_MASK              ((uint16_t)0x000007C0U)         /* !< SDFIFO Status */
/* SDFM_SDFIFOCTL3[FFIEN] Bits */
#define SDFM_SDFIFOCTL3_FFIEN_OFS                (12)                            /* !< FFIEN Offset */
#define SDFM_SDFIFOCTL3_FFIEN_MASK               ((uint16_t)0x00001000U)         /* !< SDFIFO data ready Interrupt Enable */
/* SDFM_SDFIFOCTL3[FFEN] Bits */
#define SDFM_SDFIFOCTL3_FFEN_OFS                 (13)                            /* !< FFEN Offset */
#define SDFM_SDFIFOCTL3_FFEN_MASK                ((uint16_t)0x00002000U)         /* !< SDFIFO Enable */
/* SDFM_SDFIFOCTL3[DRINTSEL] Bits */
#define SDFM_SDFIFOCTL3_DRINTSEL_OFS             (14)                            /* !< DRINTSEL Offset */
#define SDFM_SDFIFOCTL3_DRINTSEL_MASK            ((uint16_t)0x00004000U)         /* !< Data-Ready Interrupt Source Select */
/* SDFM_SDFIFOCTL3[OVFIEN] Bits */
#define SDFM_SDFIFOCTL3_OVFIEN_OFS               (15)                            /* !< OVFIEN Offset */
#define SDFM_SDFIFOCTL3_OVFIEN_MASK              ((uint16_t)0x00008000U)         /* !< SDFIFO Overflow interrupt enable */

/* SDFM_SDSYNC3 Bits */
/* SDFM_SDSYNC3[SYNCSEL] Bits */
#define SDFM_SDSYNC3_SYNCSEL_OFS                 (0)                             /* !< SYNCSEL Offset */
#define SDFM_SDSYNC3_SYNCSEL_MASK                ((uint16_t)0x0000003FU)         /* !< SDSYNC Source Select */
/* SDFM_SDSYNC3[WTSYNCEN] Bits */
#define SDFM_SDSYNC3_WTSYNCEN_OFS                (6)                             /* !< WTSYNCEN Offset */
#define SDFM_SDSYNC3_WTSYNCEN_MASK               ((uint16_t)0x00000040U)         /* !< Wait-for-Sync Enable */
/* SDFM_SDSYNC3[WTSYNFLG] Bits */
#define SDFM_SDSYNC3_WTSYNFLG_OFS                (7)                             /* !< WTSYNFLG Offset */
#define SDFM_SDSYNC3_WTSYNFLG_MASK               ((uint16_t)0x00000080U)         /* !< Wait-for-Sync Flag */
/* SDFM_SDSYNC3[WTSYNCLR] Bits */
#define SDFM_SDSYNC3_WTSYNCLR_OFS                (8)                             /* !< WTSYNCLR Offset */
#define SDFM_SDSYNC3_WTSYNCLR_MASK               ((uint16_t)0x00000100U)         /* !< Wait-for-Sync Flag Clear */
/* SDFM_SDSYNC3[FFSYNCCLREN] Bits */
#define SDFM_SDSYNC3_FFSYNCCLREN_OFS             (9)                             /* !< FFSYNCCLREN Offset */
#define SDFM_SDSYNC3_FFSYNCCLREN_MASK            ((uint16_t)0x00000200U)         /* !< FIFO Clear-on-SDSYNC Enable */
/* SDFM_SDSYNC3[WTSCLREN] Bits */
#define SDFM_SDSYNC3_WTSCLREN_OFS                (10)                            /* !< WTSCLREN Offset */
#define SDFM_SDSYNC3_WTSCLREN_MASK               ((uint16_t)0x00000400U)         /* !< WTSYNFLG Clear-on-FIFOINT Enable */

/* SDFM_SDFLT3CMPL2 Bits */
/* SDFM_SDFLT3CMPL2[LLT2] Bits */
#define SDFM_SDFLT3CMPL2_LLT2_OFS                (0)                             /* !< LLT2 Offset */
#define SDFM_SDFLT3CMPL2_LLT2_MASK               ((uint16_t)0x00007FFFU)         /* !< Second low-level threshold for the
                                                                                    comparator filter output. */

/* SDFM_SDCTLPARM4 Bits */
/* SDFM_SDCTLPARM4[MOD] Bits */
#define SDFM_SDCTLPARM4_MOD_OFS                  (0)                             /* !< MOD Offset */
#define SDFM_SDCTLPARM4_MOD_MASK                 ((uint16_t)0x00000003U)         /* !< Modulator clocking modes */
/* SDFM_SDCTLPARM4[SDCLKSEL] Bits */
#define SDFM_SDCTLPARM4_SDCLKSEL_OFS             (3)                             /* !< SDCLKSEL Offset */
#define SDFM_SDCTLPARM4_SDCLKSEL_MASK            ((uint16_t)0x00000008U)         /* !< SD4 Clock source select. */
/* SDFM_SDCTLPARM4[SDCLKSYNC] Bits */
#define SDFM_SDCTLPARM4_SDCLKSYNC_OFS            (4)                             /* !< SDCLKSYNC Offset */
#define SDFM_SDCTLPARM4_SDCLKSYNC_MASK           ((uint16_t)0x00000010U)         /* !< Enable Synchronizer on SD clock */
/* SDFM_SDCTLPARM4[SDDATASYNC] Bits */
#define SDFM_SDCTLPARM4_SDDATASYNC_OFS           (6)                             /* !< SDDATASYNC Offset */
#define SDFM_SDCTLPARM4_SDDATASYNC_MASK          ((uint16_t)0x00000040U)         /* !< Enable Synchronizer on SD data */

/* SDFM_SDDFPARM4 Bits */
/* SDFM_SDDFPARM4[DOSR] Bits */
#define SDFM_SDDFPARM4_DOSR_OFS                  (0)                             /* !< DOSR Offset */
#define SDFM_SDDFPARM4_DOSR_MASK                 ((uint16_t)0x000000FFU)         /* !< Data Filter Oversample Ratio=
                                                                                    DOSR+1 */
/* SDFM_SDDFPARM4[FEN] Bits */
#define SDFM_SDDFPARM4_FEN_OFS                   (8)                             /* !< FEN Offset */
#define SDFM_SDDFPARM4_FEN_MASK                  ((uint16_t)0x00000100U)         /* !< Filter Enable */
/* SDFM_SDDFPARM4[AE] Bits */
#define SDFM_SDDFPARM4_AE_OFS                    (9)                             /* !< AE Offset */
#define SDFM_SDDFPARM4_AE_MASK                   ((uint16_t)0x00000200U)         /* !< Ack Enable */
/* SDFM_SDDFPARM4[SST] Bits */
#define SDFM_SDDFPARM4_SST_OFS                   (10)                            /* !< SST Offset */
#define SDFM_SDDFPARM4_SST_MASK                  ((uint16_t)0x00000C00U)         /* !< Data filter Structure
                                                                                    (SincFast/1/2/3) */
/* SDFM_SDDFPARM4[SDSYNCEN] Bits */
#define SDFM_SDDFPARM4_SDSYNCEN_OFS              (12)                            /* !< SDSYNCEN Offset */
#define SDFM_SDDFPARM4_SDSYNCEN_MASK             ((uint16_t)0x00001000U)         /* !< Data Filter Reset Enable */

/* SDFM_SDDPARM4 Bits */
/* SDFM_SDDPARM4[DR] Bits */
#define SDFM_SDDPARM4_DR_OFS                     (10)                            /* !< DR Offset */
#define SDFM_SDDPARM4_DR_MASK                    ((uint16_t)0x00000400U)         /* !< Data Representation (0/1 = 16/32b
                                                                                    2's complement) */
/* SDFM_SDDPARM4[SH] Bits */
#define SDFM_SDDPARM4_SH_OFS                     (11)                            /* !< SH Offset */
#define SDFM_SDDPARM4_SH_MASK                    ((uint16_t)0x0000F800U)         /* !< Shift Control (# bits to shift in
                                                                                    16b mode) */

/* SDFM_SDFLT4CMPH1 Bits */
/* SDFM_SDFLT4CMPH1[HLT] Bits */
#define SDFM_SDFLT4CMPH1_HLT_OFS                 (0)                             /* !< HLT Offset */
#define SDFM_SDFLT4CMPH1_HLT_MASK                ((uint16_t)0x00007FFFU)         /* !< High-level threshold for the
                                                                                    comparator filter output */

/* SDFM_SDFLT4CMPL1 Bits */
/* SDFM_SDFLT4CMPL1[LLT] Bits */
#define SDFM_SDFLT4CMPL1_LLT_OFS                 (0)                             /* !< LLT Offset */
#define SDFM_SDFLT4CMPL1_LLT_MASK                ((uint16_t)0x00007FFFU)         /* !< Low-level threshold for the
                                                                                    comparator filter output */

/* SDFM_SDCPARM4 Bits */
/* SDFM_SDCPARM4[COSR] Bits */
#define SDFM_SDCPARM4_COSR_OFS                   (0)                             /* !< COSR Offset */
#define SDFM_SDCPARM4_COSR_MASK                  ((uint16_t)0x0000001FU)         /* !< Comparator Oversample Ratio. Actual
                                                                                    rate COSR+1 */
/* SDFM_SDCPARM4[EN_CEVT1] Bits */
#define SDFM_SDCPARM4_EN_CEVT1_OFS               (5)                             /* !< EN_CEVT1 Offset */
#define SDFM_SDCPARM4_EN_CEVT1_MASK              ((uint16_t)0x00000020U)         /* !< CEVT1 Interrupt enable. */
/* SDFM_SDCPARM4[EN_CEVT2] Bits */
#define SDFM_SDCPARM4_EN_CEVT2_OFS               (6)                             /* !< EN_CEVT2 Offset */
#define SDFM_SDCPARM4_EN_CEVT2_MASK              ((uint16_t)0x00000040U)         /* !< CEVT2 Interrupt enable. */
/* SDFM_SDCPARM4[CS1_CS0] Bits */
#define SDFM_SDCPARM4_CS1_CS0_OFS                (7)                             /* !< CS1_CS0 Offset */
#define SDFM_SDCPARM4_CS1_CS0_MASK               ((uint16_t)0x00000180U)         /* !< Comparator Filter Structure
                                                                                    (SincFast/1/2/3) */
/* SDFM_SDCPARM4[MFIE] Bits */
#define SDFM_SDCPARM4_MFIE_OFS                   (9)                             /* !< MFIE Offset */
#define SDFM_SDCPARM4_MFIE_MASK                  ((uint16_t)0x00000200U)         /* !< Modulator Failure Interrupt enable */
/* SDFM_SDCPARM4[HZEN] Bits */
#define SDFM_SDCPARM4_HZEN_OFS                   (10)                            /* !< HZEN Offset */
#define SDFM_SDCPARM4_HZEN_MASK                  ((uint16_t)0x00000400U)         /* !< High level (Z) Threshold crossing
                                                                                    output enable */
/* SDFM_SDCPARM4[CEVT1SEL] Bits */
#define SDFM_SDCPARM4_CEVT1SEL_OFS               (11)                            /* !< CEVT1SEL Offset */
#define SDFM_SDCPARM4_CEVT1SEL_MASK              ((uint16_t)0x00001800U)         /* !< Comparator Event1 select */
/* SDFM_SDCPARM4[CEN] Bits */
#define SDFM_SDCPARM4_CEN_OFS                    (13)                            /* !< CEN Offset */
#define SDFM_SDCPARM4_CEN_MASK                   ((uint16_t)0x00002000U)         /* !< Comparator Enable */
/* SDFM_SDCPARM4[CEVT2SEL] Bits */
#define SDFM_SDCPARM4_CEVT2SEL_OFS               (14)                            /* !< CEVT2SEL Offset */
#define SDFM_SDCPARM4_CEVT2SEL_MASK              ((uint16_t)0x0000C000U)         /* !< Comparator Event2 select */

/* SDFM_SDDATA4 Bits */
/* SDFM_SDDATA4[DATA16] Bits */
#define SDFM_SDDATA4_DATA16_OFS                  (0)                             /* !< DATA16 Offset */
#define SDFM_SDDATA4_DATA16_MASK                 ((uint32_t)0x0000FFFFU)         /* !< Lo-order 16b in 32b mode */
/* SDFM_SDDATA4[DATA32HI] Bits */
#define SDFM_SDDATA4_DATA32HI_OFS                (16)                            /* !< DATA32HI Offset */
#define SDFM_SDDATA4_DATA32HI_MASK               ((uint32_t)0xFFFF0000U)         /* !< Hi-order 16b in 32b mode, 16-bit
                                                                                    Data in 16b mode */

/* SDFM_SDDATFIFO4 Bits */
/* SDFM_SDDATFIFO4[DATA16] Bits */
#define SDFM_SDDATFIFO4_DATA16_OFS               (0)                             /* !< DATA16 Offset */
#define SDFM_SDDATFIFO4_DATA16_MASK              ((uint32_t)0x0000FFFFU)         /* !< Lo-order 16b in 32b mode */
/* SDFM_SDDATFIFO4[DATA32HI] Bits */
#define SDFM_SDDATFIFO4_DATA32HI_OFS             (16)                            /* !< DATA32HI Offset */
#define SDFM_SDDATFIFO4_DATA32HI_MASK            ((uint32_t)0xFFFF0000U)         /* !< Hi-order 16b in 32b mode, 16-bit
                                                                                    Data in 16b mode */

/* SDFM_SDCDATA4 Bits */
/* SDFM_SDCDATA4[DATA16] Bits */
#define SDFM_SDCDATA4_DATA16_OFS                 (0)                             /* !< DATA16 Offset */
#define SDFM_SDCDATA4_DATA16_MASK                ((uint16_t)0x0000FFFFU)         /* !< Comparator Data output - 16b only */

/* SDFM_SDFLT4CMPH2 Bits */
/* SDFM_SDFLT4CMPH2[HLT2] Bits */
#define SDFM_SDFLT4CMPH2_HLT2_OFS                (0)                             /* !< HLT2 Offset */
#define SDFM_SDFLT4CMPH2_HLT2_MASK               ((uint16_t)0x00007FFFU)         /* !< Second High level threshold. */

/* SDFM_SDFLT4CMPHZ Bits */
/* SDFM_SDFLT4CMPHZ[HLTZ] Bits */
#define SDFM_SDFLT4CMPHZ_HLTZ_OFS                (0)                             /* !< HLTZ Offset */
#define SDFM_SDFLT4CMPHZ_HLTZ_MASK               ((uint16_t)0x00007FFFU)         /* !< High-level threshold (Z) for the
                                                                                    comparator filter output */

/* SDFM_SDFIFOCTL4 Bits */
/* SDFM_SDFIFOCTL4[SDFFIL] Bits */
#define SDFM_SDFIFOCTL4_SDFFIL_OFS               (0)                             /* !< SDFFIL Offset */
#define SDFM_SDFIFOCTL4_SDFFIL_MASK              ((uint16_t)0x0000001FU)         /* !< SDFIFO Interrupt Level */
/* SDFM_SDFIFOCTL4[SDFFST] Bits */
#define SDFM_SDFIFOCTL4_SDFFST_OFS               (6)                             /* !< SDFFST Offset */
#define SDFM_SDFIFOCTL4_SDFFST_MASK              ((uint16_t)0x000007C0U)         /* !< SDFIFO Status */
/* SDFM_SDFIFOCTL4[FFIEN] Bits */
#define SDFM_SDFIFOCTL4_FFIEN_OFS                (12)                            /* !< FFIEN Offset */
#define SDFM_SDFIFOCTL4_FFIEN_MASK               ((uint16_t)0x00001000U)         /* !< SDFIFO data ready Interrupt Enable */
/* SDFM_SDFIFOCTL4[FFEN] Bits */
#define SDFM_SDFIFOCTL4_FFEN_OFS                 (13)                            /* !< FFEN Offset */
#define SDFM_SDFIFOCTL4_FFEN_MASK                ((uint16_t)0x00002000U)         /* !< SDFIFO Enable */
/* SDFM_SDFIFOCTL4[DRINTSEL] Bits */
#define SDFM_SDFIFOCTL4_DRINTSEL_OFS             (14)                            /* !< DRINTSEL Offset */
#define SDFM_SDFIFOCTL4_DRINTSEL_MASK            ((uint16_t)0x00004000U)         /* !< Data-Ready Interrupt Source Select */
/* SDFM_SDFIFOCTL4[OVFIEN] Bits */
#define SDFM_SDFIFOCTL4_OVFIEN_OFS               (15)                            /* !< OVFIEN Offset */
#define SDFM_SDFIFOCTL4_OVFIEN_MASK              ((uint16_t)0x00008000U)         /* !< SDFIFO Overflow interrupt enable */

/* SDFM_SDSYNC4 Bits */
/* SDFM_SDSYNC4[SYNCSEL] Bits */
#define SDFM_SDSYNC4_SYNCSEL_OFS                 (0)                             /* !< SYNCSEL Offset */
#define SDFM_SDSYNC4_SYNCSEL_MASK                ((uint16_t)0x0000003FU)         /* !< SDSYNC Source Select */
/* SDFM_SDSYNC4[WTSYNCEN] Bits */
#define SDFM_SDSYNC4_WTSYNCEN_OFS                (6)                             /* !< WTSYNCEN Offset */
#define SDFM_SDSYNC4_WTSYNCEN_MASK               ((uint16_t)0x00000040U)         /* !< Wait-for-Sync Enable */
/* SDFM_SDSYNC4[WTSYNFLG] Bits */
#define SDFM_SDSYNC4_WTSYNFLG_OFS                (7)                             /* !< WTSYNFLG Offset */
#define SDFM_SDSYNC4_WTSYNFLG_MASK               ((uint16_t)0x00000080U)         /* !< Wait-for-Sync Flag */
/* SDFM_SDSYNC4[WTSYNCLR] Bits */
#define SDFM_SDSYNC4_WTSYNCLR_OFS                (8)                             /* !< WTSYNCLR Offset */
#define SDFM_SDSYNC4_WTSYNCLR_MASK               ((uint16_t)0x00000100U)         /* !< Wait-for-Sync Flag Clear */
/* SDFM_SDSYNC4[FFSYNCCLREN] Bits */
#define SDFM_SDSYNC4_FFSYNCCLREN_OFS             (9)                             /* !< FFSYNCCLREN Offset */
#define SDFM_SDSYNC4_FFSYNCCLREN_MASK            ((uint16_t)0x00000200U)         /* !< FIFO Clear-on-SDSYNC Enable */
/* SDFM_SDSYNC4[WTSCLREN] Bits */
#define SDFM_SDSYNC4_WTSCLREN_OFS                (10)                            /* !< WTSCLREN Offset */
#define SDFM_SDSYNC4_WTSCLREN_MASK               ((uint16_t)0x00000400U)         /* !< WTSYNFLG Clear-on-FIFOINT Enable */

/* SDFM_SDFLT4CMPL2 Bits */
/* SDFM_SDFLT4CMPL2[LLT2] Bits */
#define SDFM_SDFLT4CMPL2_LLT2_OFS                (0)                             /* !< LLT2 Offset */
#define SDFM_SDFLT4CMPL2_LLT2_MASK               ((uint16_t)0x00007FFFU)         /* !< Second low-level threshold for the
                                                                                    comparator filter output. */

/* SDFM_SDCOMP1CTL Bits */
/* SDFM_SDCOMP1CTL[CEVT1DIGFILTSEL] Bits */
#define SDFM_SDCOMP1CTL_CEVT1DIGFILTSEL_OFS      (2)                             /* !< CEVT1DIGFILTSEL Offset */
#define SDFM_SDCOMP1CTL_CEVT1DIGFILTSEL_MASK     ((uint16_t)0x0000000CU)         /* !< High Comparator Trip Select */
/* SDFM_SDCOMP1CTL[CEVT2DIGFILTSEL] Bits */
#define SDFM_SDCOMP1CTL_CEVT2DIGFILTSEL_OFS      (10)                            /* !< CEVT2DIGFILTSEL Offset */
#define SDFM_SDCOMP1CTL_CEVT2DIGFILTSEL_MASK     ((uint16_t)0x00000C00U)         /* !< Low Comparator Trip Select */

/* SDFM_SDCOMP1EVT2FLTCTL Bits */
/* SDFM_SDCOMP1EVT2FLTCTL[SAMPWIN] Bits */
#define SDFM_SDCOMP1EVT2FLTCTL_SAMPWIN_OFS       (4)                             /* !< SAMPWIN Offset */
#define SDFM_SDCOMP1EVT2FLTCTL_SAMPWIN_MASK      ((uint16_t)0x000001F0U)         /* !< Sample Window */
/* SDFM_SDCOMP1EVT2FLTCTL[THRESH] Bits */
#define SDFM_SDCOMP1EVT2FLTCTL_THRESH_OFS        (9)                             /* !< THRESH Offset */
#define SDFM_SDCOMP1EVT2FLTCTL_THRESH_MASK       ((uint16_t)0x00003E00U)         /* !< Majority Voting Threshold */
/* SDFM_SDCOMP1EVT2FLTCTL[FILINIT] Bits */
#define SDFM_SDCOMP1EVT2FLTCTL_FILINIT_OFS       (15)                            /* !< FILINIT Offset */
#define SDFM_SDCOMP1EVT2FLTCTL_FILINIT_MASK      ((uint16_t)0x00008000U)         /* !< Filter Initialization Bit */

/* SDFM_SDCOMP1EVT2FLTCLKCTL Bits */
/* SDFM_SDCOMP1EVT2FLTCLKCTL[CLKPRESCALE] Bits */
#define SDFM_SDCOMP1EVT2FLTCLKCTL_CLKPRESCALE_OFS (0)                             /* !< CLKPRESCALE Offset */
#define SDFM_SDCOMP1EVT2FLTCLKCTL_CLKPRESCALE_MASK ((uint16_t)0x000003FFU)         /* !< Sample Clock Prescale */

/* SDFM_SDCOMP1EVT1FLTCTL Bits */
/* SDFM_SDCOMP1EVT1FLTCTL[SAMPWIN] Bits */
#define SDFM_SDCOMP1EVT1FLTCTL_SAMPWIN_OFS       (4)                             /* !< SAMPWIN Offset */
#define SDFM_SDCOMP1EVT1FLTCTL_SAMPWIN_MASK      ((uint16_t)0x000001F0U)         /* !< Sample Window */
/* SDFM_SDCOMP1EVT1FLTCTL[THRESH] Bits */
#define SDFM_SDCOMP1EVT1FLTCTL_THRESH_OFS        (9)                             /* !< THRESH Offset */
#define SDFM_SDCOMP1EVT1FLTCTL_THRESH_MASK       ((uint16_t)0x00003E00U)         /* !< Majority Voting Threshold */
/* SDFM_SDCOMP1EVT1FLTCTL[FILINIT] Bits */
#define SDFM_SDCOMP1EVT1FLTCTL_FILINIT_OFS       (15)                            /* !< FILINIT Offset */
#define SDFM_SDCOMP1EVT1FLTCTL_FILINIT_MASK      ((uint16_t)0x00008000U)         /* !< Filter Initialization Bit */

/* SDFM_SDCOMP1EVT1FLTCLKCTL Bits */
/* SDFM_SDCOMP1EVT1FLTCLKCTL[CLKPRESCALE] Bits */
#define SDFM_SDCOMP1EVT1FLTCLKCTL_CLKPRESCALE_OFS (0)                             /* !< CLKPRESCALE Offset */
#define SDFM_SDCOMP1EVT1FLTCLKCTL_CLKPRESCALE_MASK ((uint16_t)0x000003FFU)         /* !< Sample Clock Prescale */

/* SDFM_SDCOMP1LOCK Bits */
/* SDFM_SDCOMP1LOCK[SDCOMP1CTL] Bits */
#define SDFM_SDCOMP1LOCK_SDCOMP1CTL_OFS          (0)                             /* !< SDCOMP1CTL Offset */
#define SDFM_SDCOMP1LOCK_SDCOMP1CTL_MASK         ((uint16_t)0x00000001U)         /* !< COMPCTL Lock */
/* SDFM_SDCOMP1LOCK[COMP] Bits */
#define SDFM_SDCOMP1LOCK_COMP_OFS                (3)                             /* !< COMP Offset */
#define SDFM_SDCOMP1LOCK_COMP_MASK               ((uint16_t)0x00000008U)         /* !< COMPevent filter registers Lock */

/* SDFM_SDCOMP2CTL Bits */
/* SDFM_SDCOMP2CTL[CEVT1DIGFILTSEL] Bits */
#define SDFM_SDCOMP2CTL_CEVT1DIGFILTSEL_OFS      (2)                             /* !< CEVT1DIGFILTSEL Offset */
#define SDFM_SDCOMP2CTL_CEVT1DIGFILTSEL_MASK     ((uint16_t)0x0000000CU)         /* !< High Comparator Trip Select */
/* SDFM_SDCOMP2CTL[CEVT2DIGFILTSEL] Bits */
#define SDFM_SDCOMP2CTL_CEVT2DIGFILTSEL_OFS      (10)                            /* !< CEVT2DIGFILTSEL Offset */
#define SDFM_SDCOMP2CTL_CEVT2DIGFILTSEL_MASK     ((uint16_t)0x00000C00U)         /* !< Low Comparator Trip Select */

/* SDFM_SDCOMP2EVT2FLTCTL Bits */
/* SDFM_SDCOMP2EVT2FLTCTL[SAMPWIN] Bits */
#define SDFM_SDCOMP2EVT2FLTCTL_SAMPWIN_OFS       (4)                             /* !< SAMPWIN Offset */
#define SDFM_SDCOMP2EVT2FLTCTL_SAMPWIN_MASK      ((uint16_t)0x000001F0U)         /* !< Sample Window */
/* SDFM_SDCOMP2EVT2FLTCTL[THRESH] Bits */
#define SDFM_SDCOMP2EVT2FLTCTL_THRESH_OFS        (9)                             /* !< THRESH Offset */
#define SDFM_SDCOMP2EVT2FLTCTL_THRESH_MASK       ((uint16_t)0x00003E00U)         /* !< Majority Voting Threshold */
/* SDFM_SDCOMP2EVT2FLTCTL[FILINIT] Bits */
#define SDFM_SDCOMP2EVT2FLTCTL_FILINIT_OFS       (15)                            /* !< FILINIT Offset */
#define SDFM_SDCOMP2EVT2FLTCTL_FILINIT_MASK      ((uint16_t)0x00008000U)         /* !< Filter Initialization Bit */

/* SDFM_SDCOMP2EVT2FLTCLKCTL Bits */
/* SDFM_SDCOMP2EVT2FLTCLKCTL[CLKPRESCALE] Bits */
#define SDFM_SDCOMP2EVT2FLTCLKCTL_CLKPRESCALE_OFS (0)                             /* !< CLKPRESCALE Offset */
#define SDFM_SDCOMP2EVT2FLTCLKCTL_CLKPRESCALE_MASK ((uint16_t)0x000003FFU)         /* !< Sample Clock Prescale */

/* SDFM_SDCOMP2EVT1FLTCTL Bits */
/* SDFM_SDCOMP2EVT1FLTCTL[SAMPWIN] Bits */
#define SDFM_SDCOMP2EVT1FLTCTL_SAMPWIN_OFS       (4)                             /* !< SAMPWIN Offset */
#define SDFM_SDCOMP2EVT1FLTCTL_SAMPWIN_MASK      ((uint16_t)0x000001F0U)         /* !< Sample Window */
/* SDFM_SDCOMP2EVT1FLTCTL[THRESH] Bits */
#define SDFM_SDCOMP2EVT1FLTCTL_THRESH_OFS        (9)                             /* !< THRESH Offset */
#define SDFM_SDCOMP2EVT1FLTCTL_THRESH_MASK       ((uint16_t)0x00003E00U)         /* !< Majority Voting Threshold */
/* SDFM_SDCOMP2EVT1FLTCTL[FILINIT] Bits */
#define SDFM_SDCOMP2EVT1FLTCTL_FILINIT_OFS       (15)                            /* !< FILINIT Offset */
#define SDFM_SDCOMP2EVT1FLTCTL_FILINIT_MASK      ((uint16_t)0x00008000U)         /* !< Filter Initialization Bit */

/* SDFM_SDCOMP2EVT1FLTCLKCTL Bits */
/* SDFM_SDCOMP2EVT1FLTCLKCTL[CLKPRESCALE] Bits */
#define SDFM_SDCOMP2EVT1FLTCLKCTL_CLKPRESCALE_OFS (0)                             /* !< CLKPRESCALE Offset */
#define SDFM_SDCOMP2EVT1FLTCLKCTL_CLKPRESCALE_MASK ((uint16_t)0x000003FFU)         /* !< Sample Clock Prescale */

/* SDFM_SDCOMP2LOCK Bits */
/* SDFM_SDCOMP2LOCK[SDCOMP2CTL] Bits */
#define SDFM_SDCOMP2LOCK_SDCOMP2CTL_OFS          (0)                             /* !< SDCOMP2CTL Offset */
#define SDFM_SDCOMP2LOCK_SDCOMP2CTL_MASK         ((uint16_t)0x00000001U)         /* !< COMPCTL Lock */
/* SDFM_SDCOMP2LOCK[COMP] Bits */
#define SDFM_SDCOMP2LOCK_COMP_OFS                (3)                             /* !< COMP Offset */
#define SDFM_SDCOMP2LOCK_COMP_MASK               ((uint16_t)0x00000008U)         /* !< COMPevent filter registers Lock */

/* SDFM_SDCOMP3CTL Bits */
/* SDFM_SDCOMP3CTL[CEVT1DIGFILTSEL] Bits */
#define SDFM_SDCOMP3CTL_CEVT1DIGFILTSEL_OFS      (2)                             /* !< CEVT1DIGFILTSEL Offset */
#define SDFM_SDCOMP3CTL_CEVT1DIGFILTSEL_MASK     ((uint16_t)0x0000000CU)         /* !< High Comparator Trip Select */
/* SDFM_SDCOMP3CTL[CEVT2DIGFILTSEL] Bits */
#define SDFM_SDCOMP3CTL_CEVT2DIGFILTSEL_OFS      (10)                            /* !< CEVT2DIGFILTSEL Offset */
#define SDFM_SDCOMP3CTL_CEVT2DIGFILTSEL_MASK     ((uint16_t)0x00000C00U)         /* !< Low Comparator Trip Select */

/* SDFM_SDCOMP3EVT2FLTCTL Bits */
/* SDFM_SDCOMP3EVT2FLTCTL[SAMPWIN] Bits */
#define SDFM_SDCOMP3EVT2FLTCTL_SAMPWIN_OFS       (4)                             /* !< SAMPWIN Offset */
#define SDFM_SDCOMP3EVT2FLTCTL_SAMPWIN_MASK      ((uint16_t)0x000001F0U)         /* !< Sample Window */
/* SDFM_SDCOMP3EVT2FLTCTL[THRESH] Bits */
#define SDFM_SDCOMP3EVT2FLTCTL_THRESH_OFS        (9)                             /* !< THRESH Offset */
#define SDFM_SDCOMP3EVT2FLTCTL_THRESH_MASK       ((uint16_t)0x00003E00U)         /* !< Majority Voting Threshold */
/* SDFM_SDCOMP3EVT2FLTCTL[FILINIT] Bits */
#define SDFM_SDCOMP3EVT2FLTCTL_FILINIT_OFS       (15)                            /* !< FILINIT Offset */
#define SDFM_SDCOMP3EVT2FLTCTL_FILINIT_MASK      ((uint16_t)0x00008000U)         /* !< Filter Initialization Bit */

/* SDFM_SDCOMP3EVT2FLTCLKCTL Bits */
/* SDFM_SDCOMP3EVT2FLTCLKCTL[CLKPRESCALE] Bits */
#define SDFM_SDCOMP3EVT2FLTCLKCTL_CLKPRESCALE_OFS (0)                             /* !< CLKPRESCALE Offset */
#define SDFM_SDCOMP3EVT2FLTCLKCTL_CLKPRESCALE_MASK ((uint16_t)0x000003FFU)         /* !< Sample Clock Prescale */

/* SDFM_SDCOMP3EVT1FLTCTL Bits */
/* SDFM_SDCOMP3EVT1FLTCTL[SAMPWIN] Bits */
#define SDFM_SDCOMP3EVT1FLTCTL_SAMPWIN_OFS       (4)                             /* !< SAMPWIN Offset */
#define SDFM_SDCOMP3EVT1FLTCTL_SAMPWIN_MASK      ((uint16_t)0x000001F0U)         /* !< Sample Window */
/* SDFM_SDCOMP3EVT1FLTCTL[THRESH] Bits */
#define SDFM_SDCOMP3EVT1FLTCTL_THRESH_OFS        (9)                             /* !< THRESH Offset */
#define SDFM_SDCOMP3EVT1FLTCTL_THRESH_MASK       ((uint16_t)0x00003E00U)         /* !< Majority Voting Threshold */
/* SDFM_SDCOMP3EVT1FLTCTL[FILINIT] Bits */
#define SDFM_SDCOMP3EVT1FLTCTL_FILINIT_OFS       (15)                            /* !< FILINIT Offset */
#define SDFM_SDCOMP3EVT1FLTCTL_FILINIT_MASK      ((uint16_t)0x00008000U)         /* !< Filter Initialization Bit */

/* SDFM_SDCOMP3EVT1FLTCLKCTL Bits */
/* SDFM_SDCOMP3EVT1FLTCLKCTL[CLKPRESCALE] Bits */
#define SDFM_SDCOMP3EVT1FLTCLKCTL_CLKPRESCALE_OFS (0)                             /* !< CLKPRESCALE Offset */
#define SDFM_SDCOMP3EVT1FLTCLKCTL_CLKPRESCALE_MASK ((uint16_t)0x000003FFU)         /* !< Sample Clock Prescale */

/* SDFM_SDCOMP3LOCK Bits */
/* SDFM_SDCOMP3LOCK[SDCOMP3CTL] Bits */
#define SDFM_SDCOMP3LOCK_SDCOMP3CTL_OFS          (0)                             /* !< SDCOMP3CTL Offset */
#define SDFM_SDCOMP3LOCK_SDCOMP3CTL_MASK         ((uint16_t)0x00000001U)         /* !< COMPCTL Lock */
/* SDFM_SDCOMP3LOCK[COMP] Bits */
#define SDFM_SDCOMP3LOCK_COMP_OFS                (3)                             /* !< COMP Offset */
#define SDFM_SDCOMP3LOCK_COMP_MASK               ((uint16_t)0x00000008U)         /* !< COMPevent filter registers Lock */

/* SDFM_SDCOMP4CTL Bits */
/* SDFM_SDCOMP4CTL[CEVT1DIGFILTSEL] Bits */
#define SDFM_SDCOMP4CTL_CEVT1DIGFILTSEL_OFS      (2)                             /* !< CEVT1DIGFILTSEL Offset */
#define SDFM_SDCOMP4CTL_CEVT1DIGFILTSEL_MASK     ((uint16_t)0x0000000CU)         /* !< High Comparator Trip Select */
/* SDFM_SDCOMP4CTL[CEVT2DIGFILTSEL] Bits */
#define SDFM_SDCOMP4CTL_CEVT2DIGFILTSEL_OFS      (10)                            /* !< CEVT2DIGFILTSEL Offset */
#define SDFM_SDCOMP4CTL_CEVT2DIGFILTSEL_MASK     ((uint16_t)0x00000C00U)         /* !< Low Comparator Trip Select */

/* SDFM_SDCOMP4EVT2FLTCTL Bits */
/* SDFM_SDCOMP4EVT2FLTCTL[SAMPWIN] Bits */
#define SDFM_SDCOMP4EVT2FLTCTL_SAMPWIN_OFS       (4)                             /* !< SAMPWIN Offset */
#define SDFM_SDCOMP4EVT2FLTCTL_SAMPWIN_MASK      ((uint16_t)0x000001F0U)         /* !< Sample Window */
/* SDFM_SDCOMP4EVT2FLTCTL[THRESH] Bits */
#define SDFM_SDCOMP4EVT2FLTCTL_THRESH_OFS        (9)                             /* !< THRESH Offset */
#define SDFM_SDCOMP4EVT2FLTCTL_THRESH_MASK       ((uint16_t)0x00003E00U)         /* !< Majority Voting Threshold */
/* SDFM_SDCOMP4EVT2FLTCTL[FILINIT] Bits */
#define SDFM_SDCOMP4EVT2FLTCTL_FILINIT_OFS       (15)                            /* !< FILINIT Offset */
#define SDFM_SDCOMP4EVT2FLTCTL_FILINIT_MASK      ((uint16_t)0x00008000U)         /* !< Filter Initialization Bit */

/* SDFM_SDCOMP4EVT2FLTCLKCTL Bits */
/* SDFM_SDCOMP4EVT2FLTCLKCTL[CLKPRESCALE] Bits */
#define SDFM_SDCOMP4EVT2FLTCLKCTL_CLKPRESCALE_OFS (0)                             /* !< CLKPRESCALE Offset */
#define SDFM_SDCOMP4EVT2FLTCLKCTL_CLKPRESCALE_MASK ((uint16_t)0x000003FFU)         /* !< Sample Clock Prescale */

/* SDFM_SDCOMP4EVT1FLTCTL Bits */
/* SDFM_SDCOMP4EVT1FLTCTL[SAMPWIN] Bits */
#define SDFM_SDCOMP4EVT1FLTCTL_SAMPWIN_OFS       (4)                             /* !< SAMPWIN Offset */
#define SDFM_SDCOMP4EVT1FLTCTL_SAMPWIN_MASK      ((uint16_t)0x000001F0U)         /* !< Sample Window */
/* SDFM_SDCOMP4EVT1FLTCTL[THRESH] Bits */
#define SDFM_SDCOMP4EVT1FLTCTL_THRESH_OFS        (9)                             /* !< THRESH Offset */
#define SDFM_SDCOMP4EVT1FLTCTL_THRESH_MASK       ((uint16_t)0x00003E00U)         /* !< Majority Voting Threshold */
/* SDFM_SDCOMP4EVT1FLTCTL[FILINIT] Bits */
#define SDFM_SDCOMP4EVT1FLTCTL_FILINIT_OFS       (15)                            /* !< FILINIT Offset */
#define SDFM_SDCOMP4EVT1FLTCTL_FILINIT_MASK      ((uint16_t)0x00008000U)         /* !< Filter Initialization Bit */

/* SDFM_SDCOMP4EVT1FLTCLKCTL Bits */
/* SDFM_SDCOMP4EVT1FLTCLKCTL[CLKPRESCALE] Bits */
#define SDFM_SDCOMP4EVT1FLTCLKCTL_CLKPRESCALE_OFS (0)                             /* !< CLKPRESCALE Offset */
#define SDFM_SDCOMP4EVT1FLTCLKCTL_CLKPRESCALE_MASK ((uint16_t)0x000003FFU)         /* !< Sample Clock Prescale */

/* SDFM_SDCOMP4LOCK Bits */
/* SDFM_SDCOMP4LOCK[SDCOMP4CTL] Bits */
#define SDFM_SDCOMP4LOCK_SDCOMP4CTL_OFS          (0)                             /* !< SDCOMP4CTL Offset */
#define SDFM_SDCOMP4LOCK_SDCOMP4CTL_MASK         ((uint16_t)0x00000001U)         /* !< COMPCTL Lock */
/* SDFM_SDCOMP4LOCK[COMP] Bits */
#define SDFM_SDCOMP4LOCK_COMP_OFS                (3)                             /* !< COMP Offset */
#define SDFM_SDCOMP4LOCK_COMP_MASK               ((uint16_t)0x00000008U)         /* !< COMPevent filter registers Lock */


#ifdef __cplusplus
}
#endif

#endif /* hw_sdfm__include */

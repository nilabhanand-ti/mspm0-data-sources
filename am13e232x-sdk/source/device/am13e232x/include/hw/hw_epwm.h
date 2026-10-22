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

#ifndef hw_epwm__include
#define hw_epwm__include


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
* EPWM Registers
******************************************************************************/


/** @addtogroup EPWM
  @{
*/

typedef struct {
  __IO uint16_t TBCTL;                             /* !< (@ 0x00000000) Time Base Control Register */
  __IO uint16_t TBCTL2;                            /* !< (@ 0x00000002) Time Base Control Register 2 */
       uint16_t RESERVED0;
  __IO uint16_t EPWMSYNCINSEL;                     /* !< (@ 0x00000006) EPWMxSYNCIN Source Select Register */
  __IO uint16_t TBCTR;                             /* !< (@ 0x00000008) Time Base Counter Register */
  __IO uint16_t TBSTS;                             /* !< (@ 0x0000000A) Time Base Status Register */
  __IO uint16_t EPWMSYNCOUTEN;                     /* !< (@ 0x0000000C) EPWMxSYNCOUT Source Enable Register */
  __IO uint16_t TBCTL3;                            /* !< (@ 0x0000000E) Time Base Control Register 3 */
  __IO uint16_t CMPCTL;                            /* !< (@ 0x00000010) Counter Compare Control Register */
  __IO uint16_t CMPCTL2;                           /* !< (@ 0x00000012) Counter Compare Control Register 2 */
       uint32_t RESERVED1;
  __IO uint16_t DBCTL;                             /* !< (@ 0x00000018) Dead-Band Generator Control Register */
  __IO uint16_t DBCTL2;                            /* !< (@ 0x0000001A) Dead-Band Generator Control Register 2 */
       uint32_t RESERVED2;
  __IO uint16_t AQCTL;                             /* !< (@ 0x00000020) Action Qualifier Control Register */
  __IO uint16_t AQTSRCSEL;                         /* !< (@ 0x00000022) Action Qualifier Trigger Event Source Select
                                                      Register */
       uint32_t RESERVED3;
  __IO uint16_t PCCTL;                             /* !< (@ 0x00000028) PWM Chopper Control Register */
       uint16_t RESERVED4[3];
  __IO uint16_t VCAPCTL;                           /* !< (@ 0x00000030) Valley Capture Control Register */
  __IO uint16_t VCNTCFG;                           /* !< (@ 0x00000032) Valley Counter Config Register */
       uint32_t RESERVED5[3];
  __IO uint16_t HRCNFG;                            /* !< (@ 0x00000040) HRPWM Configuration Register */
  __IO uint16_t HRPWR;                             /* !< (@ 0x00000042) HRPWM Power Register */
       uint32_t RESERVED6[2];
  __IO uint16_t HRMSTEP;                           /* !< (@ 0x0000004C) HRPWM MEP Step Register */
  __IO uint16_t HRCNFG2;                           /* !< (@ 0x0000004E) HRPWM Configuration 2 Register */
       uint16_t RESERVED7[5];
  __IO uint16_t HRPCTL;                            /* !< (@ 0x0000005A) High Resolution Period Control Register */
  __IO uint16_t TRREM;                             /* !< (@ 0x0000005C) HRPWM High Resolution Remainder Register */
       uint16_t RESERVED8[5];
  __IO uint16_t GLDCTL;                            /* !< (@ 0x00000068) Global PWM Load Control Register */
  __IO uint16_t GLDCFG;                            /* !< (@ 0x0000006A) Global PWM Load Config Register */
       uint32_t RESERVED9;
  __IO uint32_t EPWMXLINK;                         /* !< (@ 0x00000070) EPWMx Link Register */
       uint32_t RESERVED10[3];
  __IO uint16_t AQCTLA;                            /* !< (@ 0x00000080) Action Qualifier Control Register For Output A */
  __IO uint16_t AQCTLA2;                           /* !< (@ 0x00000082) Additional Action Qualifier Control Register For
                                                      Output A */
  __IO uint16_t AQCTLB;                            /* !< (@ 0x00000084) Action Qualifier Control Register For Output B */
  __IO uint16_t AQCTLB2;                           /* !< (@ 0x00000086) Additional Action Qualifier Control Register For
                                                      Output B */
       uint16_t RESERVED11[3];
  __IO uint16_t AQSFRC;                            /* !< (@ 0x0000008E) Action Qualifier Software Force Register */
       uint16_t RESERVED12;
  __IO uint16_t AQCSFRC;                           /* !< (@ 0x00000092) Action Qualifier Continuous S/W Force Register */
       uint32_t RESERVED13[3];
  __IO uint16_t DBREDHR;                           /* !< (@ 0x000000A0) Dead-Band Generator Rising Edge Delay High
                                                      Resolution Mirror Register */
  __IO uint16_t DBRED;                             /* !< (@ 0x000000A2) Dead-Band Generator Rising Edge Delay High
                                                      Resolution Mirror Register */
  __IO uint16_t DBFEDHR;                           /* !< (@ 0x000000A4) Dead-Band Generator Falling Edge Delay High
                                                      Resolution Register */
  __IO uint16_t DBFED;                             /* !< (@ 0x000000A6) Dead-Band Generator Falling Edge Delay Count
                                                      Register */
       uint32_t RESERVED14[6];
  __IO uint32_t TBPHS;                             /* !< (@ 0x000000C0) Time Base Phase High */
  __IO uint16_t TBPRDHR;                           /* !< (@ 0x000000C4) Time Base Period High Resolution Register */
  __IO uint16_t TBPRD;                             /* !< (@ 0x000000C6) Time Base Period Register */
       uint32_t RESERVED15[3];
  __IO uint32_t CMPA;                              /* !< (@ 0x000000D4) Counter Compare A Register */
  __IO uint32_t CMPB;                              /* !< (@ 0x000000D8) Compare B Register */
       uint16_t RESERVED16;
  __IO uint16_t CMPC;                              /* !< (@ 0x000000DE) Counter Compare C Register */
       uint16_t RESERVED17;
  __IO uint16_t CMPD;                              /* !< (@ 0x000000E2) Counter Compare D Register */
       uint32_t RESERVED18;
  __IO uint16_t GLDCTL2;                           /* !< (@ 0x000000E8) Global PWM Load Control Register 2 */
       uint16_t RESERVED19[2];
  __IO uint16_t SWVDELVAL;                         /* !< (@ 0x000000EE) Software Valley Mode Delay Register */
       uint32_t RESERVED20[4];
  __IO uint16_t TZSEL;                             /* !< (@ 0x00000100) Trip Zone Select Register */
       uint16_t RESERVED21;
  __IO uint16_t TZDCSEL;                           /* !< (@ 0x00000104) Trip Zone Digital Comparator Select Register */
       uint16_t RESERVED22;
  __IO uint16_t TZCTL;                             /* !< (@ 0x00000108) Trip Zone Control Register */
  __IO uint16_t TZCTL2;                            /* !< (@ 0x0000010A) Additional Trip Zone Control Register */
  __IO uint16_t TZCTLDCA;                          /* !< (@ 0x0000010C) Trip Zone Control Register Digital Compare A */
  __IO uint16_t TZCTLDCB;                          /* !< (@ 0x0000010E) Trip Zone Control Register Digital Compare B */
       uint16_t RESERVED23[5];
  __IO uint16_t TZEINT;                            /* !< (@ 0x0000011A) Trip Zone Enable Interrupt Register */
       uint16_t RESERVED24[5];
  __IO uint16_t TZFLG;                             /* !< (@ 0x00000126) Trip Zone Flag Register */
  __IO uint16_t TZCBCFLG;                          /* !< (@ 0x00000128) Trip Zone CBC Flag Register */
  __IO uint16_t TZOSTFLG;                          /* !< (@ 0x0000012A) Trip Zone OST Flag Register */
       uint16_t RESERVED25;
  __IO uint16_t TZCLR;                             /* !< (@ 0x0000012E) Trip Zone Clear Register */
  __IO uint16_t TZCBCCLR;                          /* !< (@ 0x00000130) Trip Zone CBC Clear Register */
  __IO uint16_t TZOSTCLR;                          /* !< (@ 0x00000132) Trip Zone OST Clear Register */
       uint16_t RESERVED26;
  __IO uint16_t TZFRC;                             /* !< (@ 0x00000136) Trip Zone Force Register */
       uint32_t RESERVED27[4];
  __IO uint16_t ETSEL;                             /* !< (@ 0x00000148) Event Trigger Selection Register */
       uint16_t RESERVED28;
  __IO uint16_t ETPS;                              /* !< (@ 0x0000014C) Event Trigger Pre-Scale Register */
       uint16_t RESERVED29;
  __IO uint16_t ETFLG;                             /* !< (@ 0x00000150) Event Trigger Flag Register */
       uint16_t RESERVED30;
  __IO uint16_t ETCLR;                             /* !< (@ 0x00000154) Event Trigger Clear Register */
       uint16_t RESERVED31;
  __IO uint16_t ETFRC;                             /* !< (@ 0x00000158) Event Trigger Force Register */
       uint16_t RESERVED32;
  __IO uint16_t ETINTPS;                           /* !< (@ 0x0000015C) Event-Trigger Interrupt Pre-Scale Register */
       uint16_t RESERVED33;
  __IO uint16_t ETSOCPS;                           /* !< (@ 0x00000160) Event-Trigger SOC Pre-Scale Register */
       uint16_t RESERVED34;
  __IO uint16_t ETCNTINITCTL;                      /* !< (@ 0x00000164) Event-Trigger Counter Initialization Control
                                                      Register */
       uint16_t RESERVED35;
  __IO uint16_t ETCNTINIT;                         /* !< (@ 0x00000168) Event-Trigger Counter Initialization Register */
       uint16_t RESERVED36[11];
  __IO uint16_t DCTRIPSEL;                         /* !< (@ 0x00000180) Digital Compare Trip Select Register */
       uint16_t RESERVED37[2];
  __IO uint16_t DCACTL;                            /* !< (@ 0x00000186) Digital Compare A Control Register */
  __IO uint16_t DCBCTL;                            /* !< (@ 0x00000188) Digital Compare B Control Register */
       uint16_t RESERVED38[2];
  __IO uint16_t DCFCTL;                            /* !< (@ 0x0000018E) Digital Compare Filter Control Register */
  __IO uint16_t DCCAPCTL;                          /* !< (@ 0x00000190) Digital Compare Capture Control Register */
  __IO uint16_t DCFOFFSET;                         /* !< (@ 0x00000192) Digital Compare Filter Offset Register */
  __IO uint16_t DCFOFFSETCNT;                      /* !< (@ 0x00000194) Digital Compare Filter Offset Counter Register */
  __IO uint16_t DCFWINDOW;                         /* !< (@ 0x00000196) Digital Compare Filter Window Register */
  __IO uint16_t DCFWINDOWCNT;                      /* !< (@ 0x00000198) Digital Compare Filter Window Counter Register */
  __IO uint16_t BLANKPULSEMIXSEL;                  /* !< (@ 0x0000019A) Blanking window trigger pulse select register */
       uint16_t RESERVED39;
  __IO uint16_t DCCAP;                             /* !< (@ 0x0000019E) Digital Compare Counter Capture Register */
       uint32_t RESERVED40;
  __IO uint16_t DCAHTRIPSEL;                       /* !< (@ 0x000001A4) Digital Compare AH Trip Select */
  __IO uint16_t DCALTRIPSEL;                       /* !< (@ 0x000001A6) Digital Compare AL Trip Select */
  __IO uint16_t DCBHTRIPSEL;                       /* !< (@ 0x000001A8) Digital Compare BH Trip Select */
  __IO uint16_t DCBLTRIPSEL;                       /* !< (@ 0x000001AA) Digital Compare BL Trip Select */
       uint32_t RESERVED41[18];
  __IO uint32_t EPWMLOCK;                          /* !< (@ 0x000001F4) EPWM Lock Register */
       uint16_t RESERVED42;
  __IO uint16_t HWVDELVAL;                         /* !< (@ 0x000001FA) Hardware Valley Mode Delay Register */
  __IO uint16_t VCNTVAL;                           /* !< (@ 0x000001FC) Hardware Valley Counter Register */
} EPWM_Regs;

/*@}*/ /* end of group EPWM */



/******************************************************************************
* EPWM Register Offsets
******************************************************************************/
#define EPWM_TBCTL                               (0x00000000U)
#define EPWM_TBCTL2                              (0x00000002U)
#define EPWM_EPWMSYNCINSEL                       (0x00000006U)
#define EPWM_TBCTR                               (0x00000008U)
#define EPWM_TBSTS                               (0x0000000AU)
#define EPWM_EPWMSYNCOUTEN                       (0x0000000CU)
#define EPWM_TBCTL3                              (0x0000000EU)
#define EPWM_CMPCTL                              (0x00000010U)
#define EPWM_CMPCTL2                             (0x00000012U)
#define EPWM_DBCTL                               (0x00000018U)
#define EPWM_DBCTL2                              (0x0000001AU)
#define EPWM_AQCTL                               (0x00000020U)
#define EPWM_AQTSRCSEL                           (0x00000022U)
#define EPWM_PCCTL                               (0x00000028U)
#define EPWM_VCAPCTL                             (0x00000030U)
#define EPWM_VCNTCFG                             (0x00000032U)
#define EPWM_HRCNFG                              (0x00000040U)
#define EPWM_HRPWR                               (0x00000042U)
#define EPWM_HRMSTEP                             (0x0000004CU)
#define EPWM_HRCNFG2                             (0x0000004EU)
#define EPWM_HRPCTL                              (0x0000005AU)
#define EPWM_TRREM                               (0x0000005CU)
#define EPWM_GLDCTL                              (0x00000068U)
#define EPWM_GLDCFG                              (0x0000006AU)
#define EPWM_EPWMXLINK                           (0x00000070U)
#define EPWM_AQCTLA                              (0x00000080U)
#define EPWM_AQCTLA2                             (0x00000082U)
#define EPWM_AQCTLB                              (0x00000084U)
#define EPWM_AQCTLB2                             (0x00000086U)
#define EPWM_AQSFRC                              (0x0000008EU)
#define EPWM_AQCSFRC                             (0x00000092U)
#define EPWM_DBREDHR                             (0x000000A0U)
#define EPWM_DBRED                               (0x000000A2U)
#define EPWM_DBFEDHR                             (0x000000A4U)
#define EPWM_DBFED                               (0x000000A6U)
#define EPWM_TBPHS                               (0x000000C0U)
#define EPWM_TBPRDHR                             (0x000000C4U)
#define EPWM_TBPRD                               (0x000000C6U)
#define EPWM_CMPA                                (0x000000D4U)
#define EPWM_CMPB                                (0x000000D8U)
#define EPWM_CMPC                                (0x000000DEU)
#define EPWM_CMPD                                (0x000000E2U)
#define EPWM_GLDCTL2                             (0x000000E8U)
#define EPWM_SWVDELVAL                           (0x000000EEU)
#define EPWM_TZSEL                               (0x00000100U)
#define EPWM_TZDCSEL                             (0x00000104U)
#define EPWM_TZCTL                               (0x00000108U)
#define EPWM_TZCTL2                              (0x0000010AU)
#define EPWM_TZCTLDCA                            (0x0000010CU)
#define EPWM_TZCTLDCB                            (0x0000010EU)
#define EPWM_TZEINT                              (0x0000011AU)
#define EPWM_TZFLG                               (0x00000126U)
#define EPWM_TZCBCFLG                            (0x00000128U)
#define EPWM_TZOSTFLG                            (0x0000012AU)
#define EPWM_TZCLR                               (0x0000012EU)
#define EPWM_TZCBCCLR                            (0x00000130U)
#define EPWM_TZOSTCLR                            (0x00000132U)
#define EPWM_TZFRC                               (0x00000136U)
#define EPWM_ETSEL                               (0x00000148U)
#define EPWM_ETPS                                (0x0000014CU)
#define EPWM_ETFLG                               (0x00000150U)
#define EPWM_ETCLR                               (0x00000154U)
#define EPWM_ETFRC                               (0x00000158U)
#define EPWM_ETINTPS                             (0x0000015CU)
#define EPWM_ETSOCPS                             (0x00000160U)
#define EPWM_ETCNTINITCTL                        (0x00000164U)
#define EPWM_ETCNTINIT                           (0x00000168U)
#define EPWM_DCTRIPSEL                           (0x00000180U)
#define EPWM_DCACTL                              (0x00000186U)
#define EPWM_DCBCTL                              (0x00000188U)
#define EPWM_DCFCTL                              (0x0000018EU)
#define EPWM_DCCAPCTL                            (0x00000190U)
#define EPWM_DCFOFFSET                           (0x00000192U)
#define EPWM_DCFOFFSETCNT                        (0x00000194U)
#define EPWM_DCFWINDOW                           (0x00000196U)
#define EPWM_DCFWINDOWCNT                        (0x00000198U)
#define EPWM_BLANKPULSEMIXSEL                    (0x0000019AU)
#define EPWM_DCCAP                               (0x0000019EU)
#define EPWM_DCAHTRIPSEL                         (0x000001A4U)
#define EPWM_DCALTRIPSEL                         (0x000001A6U)
#define EPWM_DCBHTRIPSEL                         (0x000001A8U)
#define EPWM_DCBLTRIPSEL                         (0x000001AAU)
#define EPWM_EPWMLOCK                            (0x000001F4U)
#define EPWM_HWVDELVAL                           (0x000001FAU)
#define EPWM_VCNTVAL                             (0x000001FCU)



#if defined ( __CC_ARM )
#pragma no_anon_unions
#endif

/******************************************************************************
* EPWM Register Control Bits
******************************************************************************/

/* EPWM_TBCTL Bits */
/* EPWM_TBCTL[CTRMODE] Bits */
#define EPWM_TBCTL_CTRMODE_OFS                   (0)                             /* !< CTRMODE Offset */
#define EPWM_TBCTL_CTRMODE_MASK                  ((uint16_t)0x00000003U)         /* !< Counter Mode */
/* EPWM_TBCTL[PHSEN] Bits */
#define EPWM_TBCTL_PHSEN_OFS                     (2)                             /* !< PHSEN Offset */
#define EPWM_TBCTL_PHSEN_MASK                    ((uint16_t)0x00000004U)         /* !< Phase Load Enable */
/* EPWM_TBCTL[PRDLD] Bits */
#define EPWM_TBCTL_PRDLD_OFS                     (3)                             /* !< PRDLD Offset */
#define EPWM_TBCTL_PRDLD_MASK                    ((uint16_t)0x00000008U)         /* !< Active Period Load */
/* EPWM_TBCTL[SWFSYNC] Bits */
#define EPWM_TBCTL_SWFSYNC_OFS                   (6)                             /* !< SWFSYNC Offset */
#define EPWM_TBCTL_SWFSYNC_MASK                  ((uint16_t)0x00000040U)         /* !< Software Force Sync Pulse */
/* EPWM_TBCTL[HSPCLKDIV] Bits */
#define EPWM_TBCTL_HSPCLKDIV_OFS                 (7)                             /* !< HSPCLKDIV Offset */
#define EPWM_TBCTL_HSPCLKDIV_MASK                ((uint16_t)0x00000380U)         /* !< High Speed TBCLK Pre-scaler */
/* EPWM_TBCTL[CLKDIV] Bits */
#define EPWM_TBCTL_CLKDIV_OFS                    (10)                            /* !< CLKDIV Offset */
#define EPWM_TBCTL_CLKDIV_MASK                   ((uint16_t)0x00001C00U)         /* !< Time Base Clock Pre-scaler */
/* EPWM_TBCTL[PHSDIR] Bits */
#define EPWM_TBCTL_PHSDIR_OFS                    (13)                            /* !< PHSDIR Offset */
#define EPWM_TBCTL_PHSDIR_MASK                   ((uint16_t)0x00002000U)         /* !< Phase Direction Bit */
/* EPWM_TBCTL[FREE_SOFT] Bits */
#define EPWM_TBCTL_FREE_SOFT_OFS                 (14)                            /* !< FREE_SOFT Offset */
#define EPWM_TBCTL_FREE_SOFT_MASK                ((uint16_t)0x0000C000U)         /* !< Emulation Mode Bits */

/* EPWM_TBCTL2 Bits */
/* EPWM_TBCTL2[OSHTSYNCMODE] Bits */
#define EPWM_TBCTL2_OSHTSYNCMODE_OFS             (6)                             /* !< OSHTSYNCMODE Offset */
#define EPWM_TBCTL2_OSHTSYNCMODE_MASK            ((uint16_t)0x00000040U)         /* !< One shot sync mode */
/* EPWM_TBCTL2[OSHTSYNC] Bits */
#define EPWM_TBCTL2_OSHTSYNC_OFS                 (7)                             /* !< OSHTSYNC Offset */
#define EPWM_TBCTL2_OSHTSYNC_MASK                ((uint16_t)0x00000080U)         /* !< One shot sync */
/* EPWM_TBCTL2[PRDLDSYNC] Bits */
#define EPWM_TBCTL2_PRDLDSYNC_OFS                (14)                            /* !< PRDLDSYNC Offset */
#define EPWM_TBCTL2_PRDLDSYNC_MASK               ((uint16_t)0x0000C000U)         /* !< PRD Shadow to Active Load on SYNC
                                                                                    Event */

/* EPWM_EPWMSYNCINSEL Bits */
/* EPWM_EPWMSYNCINSEL[SEL] Bits */
#define EPWM_EPWMSYNCINSEL_SEL_OFS               (0)                             /* !< SEL Offset */
#define EPWM_EPWMSYNCINSEL_SEL_MASK              ((uint16_t)0x0000001FU)         /* !< EPWMxSYNCI source select */

/* EPWM_TBCTR Bits */
/* EPWM_TBCTR[TBCTR] Bits */
#define EPWM_TBCTR_TBCTR_OFS                     (0)                             /* !< TBCTR Offset */
#define EPWM_TBCTR_TBCTR_MASK                    ((uint16_t)0x0000FFFFU)         /* !< Counter Value */

/* EPWM_TBSTS Bits */
/* EPWM_TBSTS[CTRDIR] Bits */
#define EPWM_TBSTS_CTRDIR_OFS                    (0)                             /* !< CTRDIR Offset */
#define EPWM_TBSTS_CTRDIR_MASK                   ((uint16_t)0x00000001U)         /* !< Counter Direction Status */
/* EPWM_TBSTS[SYNCI] Bits */
#define EPWM_TBSTS_SYNCI_OFS                     (1)                             /* !< SYNCI Offset */
#define EPWM_TBSTS_SYNCI_MASK                    ((uint16_t)0x00000002U)         /* !< External Input Sync Status */
/* EPWM_TBSTS[CTRMAX] Bits */
#define EPWM_TBSTS_CTRMAX_OFS                    (2)                             /* !< CTRMAX Offset */
#define EPWM_TBSTS_CTRMAX_MASK                   ((uint16_t)0x00000004U)         /* !< Counter Max Latched Status */

/* EPWM_EPWMSYNCOUTEN Bits */
/* EPWM_EPWMSYNCOUTEN[SWEN] Bits */
#define EPWM_EPWMSYNCOUTEN_SWEN_OFS              (0)                             /* !< SWEN Offset */
#define EPWM_EPWMSYNCOUTEN_SWEN_MASK             ((uint16_t)0x00000001U)         /* !< EPWMxSYNCO Software Force Enable */
/* EPWM_EPWMSYNCOUTEN[ZEROEN] Bits */
#define EPWM_EPWMSYNCOUTEN_ZEROEN_OFS            (1)                             /* !< ZEROEN Offset */
#define EPWM_EPWMSYNCOUTEN_ZEROEN_MASK           ((uint16_t)0x00000002U)         /* !< EPWMxSYNCO Zero Count Event Enable */
/* EPWM_EPWMSYNCOUTEN[CMPBEN] Bits */
#define EPWM_EPWMSYNCOUTEN_CMPBEN_OFS            (2)                             /* !< CMPBEN Offset */
#define EPWM_EPWMSYNCOUTEN_CMPBEN_MASK           ((uint16_t)0x00000004U)         /* !< EPWMxSYNCO Compare B Event Enable */
/* EPWM_EPWMSYNCOUTEN[CMPCEN] Bits */
#define EPWM_EPWMSYNCOUTEN_CMPCEN_OFS            (3)                             /* !< CMPCEN Offset */
#define EPWM_EPWMSYNCOUTEN_CMPCEN_MASK           ((uint16_t)0x00000008U)         /* !< EPWMxSYNCO Compare C Event Enable */
/* EPWM_EPWMSYNCOUTEN[CMPDEN] Bits */
#define EPWM_EPWMSYNCOUTEN_CMPDEN_OFS            (4)                             /* !< CMPDEN Offset */
#define EPWM_EPWMSYNCOUTEN_CMPDEN_MASK           ((uint16_t)0x00000010U)         /* !< EPWMxSYNCO Compare D Event Enable */
/* EPWM_EPWMSYNCOUTEN[DCAEVT1EN] Bits */
#define EPWM_EPWMSYNCOUTEN_DCAEVT1EN_OFS         (5)                             /* !< DCAEVT1EN Offset */
#define EPWM_EPWMSYNCOUTEN_DCAEVT1EN_MASK        ((uint16_t)0x00000020U)         /* !< EPWMxSYNCO Digital Compare A Event
                                                                                    1 Sync Enable */
/* EPWM_EPWMSYNCOUTEN[DCBEVT1EN] Bits */
#define EPWM_EPWMSYNCOUTEN_DCBEVT1EN_OFS         (6)                             /* !< DCBEVT1EN Offset */
#define EPWM_EPWMSYNCOUTEN_DCBEVT1EN_MASK        ((uint16_t)0x00000040U)         /* !< EPWMxSYNCO Digital Compare B Event
                                                                                    1 Sync Enable */

/* EPWM_TBCTL3 Bits */
/* EPWM_TBCTL3[OSSFRCEN] Bits */
#define EPWM_TBCTL3_OSSFRCEN_OFS                 (0)                             /* !< OSSFRCEN Offset */
#define EPWM_TBCTL3_OSSFRCEN_MASK                ((uint16_t)0x00000001U)         /* !< One Shot Sync Force Enable */

/* EPWM_CMPCTL Bits */
/* EPWM_CMPCTL[LOADAMODE] Bits */
#define EPWM_CMPCTL_LOADAMODE_OFS                (0)                             /* !< LOADAMODE Offset */
#define EPWM_CMPCTL_LOADAMODE_MASK               ((uint16_t)0x00000003U)         /* !< Active Compare A Load */
/* EPWM_CMPCTL[LOADBMODE] Bits */
#define EPWM_CMPCTL_LOADBMODE_OFS                (2)                             /* !< LOADBMODE Offset */
#define EPWM_CMPCTL_LOADBMODE_MASK               ((uint16_t)0x0000000CU)         /* !< Active Compare B Load */
/* EPWM_CMPCTL[SHDWAMODE] Bits */
#define EPWM_CMPCTL_SHDWAMODE_OFS                (4)                             /* !< SHDWAMODE Offset */
#define EPWM_CMPCTL_SHDWAMODE_MASK               ((uint16_t)0x00000010U)         /* !< Compare A Register Block Operating
                                                                                    Mode */
/* EPWM_CMPCTL[SHDWBMODE] Bits */
#define EPWM_CMPCTL_SHDWBMODE_OFS                (6)                             /* !< SHDWBMODE Offset */
#define EPWM_CMPCTL_SHDWBMODE_MASK               ((uint16_t)0x00000040U)         /* !< Compare B Register Block Operating
                                                                                    Mode */
/* EPWM_CMPCTL[SHDWAFULL] Bits */
#define EPWM_CMPCTL_SHDWAFULL_OFS                (8)                             /* !< SHDWAFULL Offset */
#define EPWM_CMPCTL_SHDWAFULL_MASK               ((uint16_t)0x00000100U)         /* !< Compare A Shadow Register Full
                                                                                    Status */
/* EPWM_CMPCTL[SHDWBFULL] Bits */
#define EPWM_CMPCTL_SHDWBFULL_OFS                (9)                             /* !< SHDWBFULL Offset */
#define EPWM_CMPCTL_SHDWBFULL_MASK               ((uint16_t)0x00000200U)         /* !< Compare B Shadow Register Full
                                                                                    Status */
/* EPWM_CMPCTL[LOADASYNC] Bits */
#define EPWM_CMPCTL_LOADASYNC_OFS                (10)                            /* !< LOADASYNC Offset */
#define EPWM_CMPCTL_LOADASYNC_MASK               ((uint16_t)0x00000C00U)         /* !< Active Compare A Load on SYNC */
/* EPWM_CMPCTL[LOADBSYNC] Bits */
#define EPWM_CMPCTL_LOADBSYNC_OFS                (12)                            /* !< LOADBSYNC Offset */
#define EPWM_CMPCTL_LOADBSYNC_MASK               ((uint16_t)0x00003000U)         /* !< Active Compare B Load on SYNC */

/* EPWM_CMPCTL2 Bits */
/* EPWM_CMPCTL2[LOADCMODE] Bits */
#define EPWM_CMPCTL2_LOADCMODE_OFS               (0)                             /* !< LOADCMODE Offset */
#define EPWM_CMPCTL2_LOADCMODE_MASK              ((uint16_t)0x00000003U)         /* !< Active Compare C Load */
/* EPWM_CMPCTL2[LOADDMODE] Bits */
#define EPWM_CMPCTL2_LOADDMODE_OFS               (2)                             /* !< LOADDMODE Offset */
#define EPWM_CMPCTL2_LOADDMODE_MASK              ((uint16_t)0x0000000CU)         /* !< Active Compare D load */
/* EPWM_CMPCTL2[SHDWCMODE] Bits */
#define EPWM_CMPCTL2_SHDWCMODE_OFS               (4)                             /* !< SHDWCMODE Offset */
#define EPWM_CMPCTL2_SHDWCMODE_MASK              ((uint16_t)0x00000010U)         /* !< Compare C Block Operating Mode */
/* EPWM_CMPCTL2[SHDWDMODE] Bits */
#define EPWM_CMPCTL2_SHDWDMODE_OFS               (6)                             /* !< SHDWDMODE Offset */
#define EPWM_CMPCTL2_SHDWDMODE_MASK              ((uint16_t)0x00000040U)         /* !< Compare D Block Operating Mode */
/* EPWM_CMPCTL2[LOADCSYNC] Bits */
#define EPWM_CMPCTL2_LOADCSYNC_OFS               (10)                            /* !< LOADCSYNC Offset */
#define EPWM_CMPCTL2_LOADCSYNC_MASK              ((uint16_t)0x00000C00U)         /* !< Active Compare C Load on SYNC */
/* EPWM_CMPCTL2[LOADDSYNC] Bits */
#define EPWM_CMPCTL2_LOADDSYNC_OFS               (12)                            /* !< LOADDSYNC Offset */
#define EPWM_CMPCTL2_LOADDSYNC_MASK              ((uint16_t)0x00003000U)         /* !< Active Compare D Load on SYNC */

/* EPWM_DBCTL Bits */
/* EPWM_DBCTL[OUT_MODE] Bits */
#define EPWM_DBCTL_OUT_MODE_OFS                  (0)                             /* !< OUT_MODE Offset */
#define EPWM_DBCTL_OUT_MODE_MASK                 ((uint16_t)0x00000003U)         /* !< Dead Band Output Mode Control */
/* EPWM_DBCTL[POLSEL] Bits */
#define EPWM_DBCTL_POLSEL_OFS                    (2)                             /* !< POLSEL Offset */
#define EPWM_DBCTL_POLSEL_MASK                   ((uint16_t)0x0000000CU)         /* !< Polarity Select Control */
/* EPWM_DBCTL[IN_MODE] Bits */
#define EPWM_DBCTL_IN_MODE_OFS                   (4)                             /* !< IN_MODE Offset */
#define EPWM_DBCTL_IN_MODE_MASK                  ((uint16_t)0x00000030U)         /* !< Dead Band Input Select Mode Control */
/* EPWM_DBCTL[LOADREDMODE] Bits */
#define EPWM_DBCTL_LOADREDMODE_OFS               (6)                             /* !< LOADREDMODE Offset */
#define EPWM_DBCTL_LOADREDMODE_MASK              ((uint16_t)0x000000C0U)         /* !< Active DBRED Load Mode */
/* EPWM_DBCTL[LOADFEDMODE] Bits */
#define EPWM_DBCTL_LOADFEDMODE_OFS               (8)                             /* !< LOADFEDMODE Offset */
#define EPWM_DBCTL_LOADFEDMODE_MASK              ((uint16_t)0x00000300U)         /* !< Active DBFED Load Mode */
/* EPWM_DBCTL[SHDWDBREDMODE] Bits */
#define EPWM_DBCTL_SHDWDBREDMODE_OFS             (10)                            /* !< SHDWDBREDMODE Offset */
#define EPWM_DBCTL_SHDWDBREDMODE_MASK            ((uint16_t)0x00000400U)         /* !< DBRED Block Operating Mode */
/* EPWM_DBCTL[SHDWDBFEDMODE] Bits */
#define EPWM_DBCTL_SHDWDBFEDMODE_OFS             (11)                            /* !< SHDWDBFEDMODE Offset */
#define EPWM_DBCTL_SHDWDBFEDMODE_MASK            ((uint16_t)0x00000800U)         /* !< DBFED Block Operating Mode */
/* EPWM_DBCTL[OUTSWAP] Bits */
#define EPWM_DBCTL_OUTSWAP_OFS                   (12)                            /* !< OUTSWAP Offset */
#define EPWM_DBCTL_OUTSWAP_MASK                  ((uint16_t)0x00003000U)         /* !< Dead Band Output Swap Control */
/* EPWM_DBCTL[DEDB_MODE] Bits */
#define EPWM_DBCTL_DEDB_MODE_OFS                 (14)                            /* !< DEDB_MODE Offset */
#define EPWM_DBCTL_DEDB_MODE_MASK                ((uint16_t)0x00004000U)         /* !< Dead Band Dual-Edge B Mode Control */
/* EPWM_DBCTL[HALFCYCLE] Bits */
#define EPWM_DBCTL_HALFCYCLE_OFS                 (15)                            /* !< HALFCYCLE Offset */
#define EPWM_DBCTL_HALFCYCLE_MASK                ((uint16_t)0x00008000U)         /* !< Half Cycle Clocking Enable */

/* EPWM_DBCTL2 Bits */
/* EPWM_DBCTL2[LOADDBCTLMODE] Bits */
#define EPWM_DBCTL2_LOADDBCTLMODE_OFS            (0)                             /* !< LOADDBCTLMODE Offset */
#define EPWM_DBCTL2_LOADDBCTLMODE_MASK           ((uint16_t)0x00000003U)         /* !< DBCTL Load from Shadow Mode Select */
/* EPWM_DBCTL2[SHDWDBCTLMODE] Bits */
#define EPWM_DBCTL2_SHDWDBCTLMODE_OFS            (2)                             /* !< SHDWDBCTLMODE Offset */
#define EPWM_DBCTL2_SHDWDBCTLMODE_MASK           ((uint16_t)0x00000004U)         /* !< DBCTL Load mode Select */

/* EPWM_AQCTL Bits */
/* EPWM_AQCTL[LDAQAMODE] Bits */
#define EPWM_AQCTL_LDAQAMODE_OFS                 (0)                             /* !< LDAQAMODE Offset */
#define EPWM_AQCTL_LDAQAMODE_MASK                ((uint16_t)0x00000003U)         /* !< Action Qualifier A Load Select */
/* EPWM_AQCTL[LDAQBMODE] Bits */
#define EPWM_AQCTL_LDAQBMODE_OFS                 (2)                             /* !< LDAQBMODE Offset */
#define EPWM_AQCTL_LDAQBMODE_MASK                ((uint16_t)0x0000000CU)         /* !< Action Qualifier B Load Select */
/* EPWM_AQCTL[SHDWAQAMODE] Bits */
#define EPWM_AQCTL_SHDWAQAMODE_OFS               (4)                             /* !< SHDWAQAMODE Offset */
#define EPWM_AQCTL_SHDWAQAMODE_MASK              ((uint16_t)0x00000010U)         /* !< Action Qualifer A Operating Mode */
/* EPWM_AQCTL[SHDWAQBMODE] Bits */
#define EPWM_AQCTL_SHDWAQBMODE_OFS               (6)                             /* !< SHDWAQBMODE Offset */
#define EPWM_AQCTL_SHDWAQBMODE_MASK              ((uint16_t)0x00000040U)         /* !< Action Qualifier B Operating Mode */
/* EPWM_AQCTL[LDAQASYNC] Bits */
#define EPWM_AQCTL_LDAQASYNC_OFS                 (8)                             /* !< LDAQASYNC Offset */
#define EPWM_AQCTL_LDAQASYNC_MASK                ((uint16_t)0x00000300U)         /* !< AQCTLA Register Load on SYNC */
/* EPWM_AQCTL[LDAQBSYNC] Bits */
#define EPWM_AQCTL_LDAQBSYNC_OFS                 (10)                            /* !< LDAQBSYNC Offset */
#define EPWM_AQCTL_LDAQBSYNC_MASK                ((uint16_t)0x00000C00U)         /* !< AQCTLB Register Load on SYNC */

/* EPWM_AQTSRCSEL Bits */
/* EPWM_AQTSRCSEL[T1SEL] Bits */
#define EPWM_AQTSRCSEL_T1SEL_OFS                 (0)                             /* !< T1SEL Offset */
#define EPWM_AQTSRCSEL_T1SEL_MASK                ((uint16_t)0x0000000FU)         /* !< T1 Event Source Select Bits */
/* EPWM_AQTSRCSEL[T2SEL] Bits */
#define EPWM_AQTSRCSEL_T2SEL_OFS                 (4)                             /* !< T2SEL Offset */
#define EPWM_AQTSRCSEL_T2SEL_MASK                ((uint16_t)0x000000F0U)         /* !< T2 Event Source Select Bits */

/* EPWM_PCCTL Bits */
/* EPWM_PCCTL[CHPEN] Bits */
#define EPWM_PCCTL_CHPEN_OFS                     (0)                             /* !< CHPEN Offset */
#define EPWM_PCCTL_CHPEN_MASK                    ((uint16_t)0x00000001U)         /* !< PWM chopping enable */
/* EPWM_PCCTL[OSHTWTH] Bits */
#define EPWM_PCCTL_OSHTWTH_OFS                   (1)                             /* !< OSHTWTH Offset */
#define EPWM_PCCTL_OSHTWTH_MASK                  ((uint16_t)0x0000001EU)         /* !< One-shot pulse width */
/* EPWM_PCCTL[CHPFREQ] Bits */
#define EPWM_PCCTL_CHPFREQ_OFS                   (5)                             /* !< CHPFREQ Offset */
#define EPWM_PCCTL_CHPFREQ_MASK                  ((uint16_t)0x000000E0U)         /* !< Chopping clock frequency */
/* EPWM_PCCTL[CHPDUTY] Bits */
#define EPWM_PCCTL_CHPDUTY_OFS                   (8)                             /* !< CHPDUTY Offset */
#define EPWM_PCCTL_CHPDUTY_MASK                  ((uint16_t)0x00000700U)         /* !< Chopping clock Duty cycle */

/* EPWM_VCAPCTL Bits */
/* EPWM_VCAPCTL[VCAPE] Bits */
#define EPWM_VCAPCTL_VCAPE_OFS                   (0)                             /* !< VCAPE Offset */
#define EPWM_VCAPCTL_VCAPE_MASK                  ((uint16_t)0x00000001U)         /* !< Valley  Capture mode */
/* EPWM_VCAPCTL[VCAPSTART] Bits */
#define EPWM_VCAPCTL_VCAPSTART_OFS               (1)                             /* !< VCAPSTART Offset */
#define EPWM_VCAPCTL_VCAPSTART_MASK              ((uint16_t)0x00000002U)         /* !< Valley  Capture Start */
/* EPWM_VCAPCTL[TRIGSEL] Bits */
#define EPWM_VCAPCTL_TRIGSEL_OFS                 (2)                             /* !< TRIGSEL Offset */
#define EPWM_VCAPCTL_TRIGSEL_MASK                ((uint16_t)0x0000001CU)         /* !< Capture Trigger Select */
/* EPWM_VCAPCTL[VDELAYDIV] Bits */
#define EPWM_VCAPCTL_VDELAYDIV_OFS               (7)                             /* !< VDELAYDIV Offset */
#define EPWM_VCAPCTL_VDELAYDIV_MASK              ((uint16_t)0x00000380U)         /* !< Valley Delay Mode Divide Enable */
/* EPWM_VCAPCTL[EDGEFILTDLYSEL] Bits */
#define EPWM_VCAPCTL_EDGEFILTDLYSEL_OFS          (10)                            /* !< EDGEFILTDLYSEL Offset */
#define EPWM_VCAPCTL_EDGEFILTDLYSEL_MASK         ((uint16_t)0x00000400U)         /* !< Valley Switching Mode Delay Select */

/* EPWM_VCNTCFG Bits */
/* EPWM_VCNTCFG[STARTEDGE] Bits */
#define EPWM_VCNTCFG_STARTEDGE_OFS               (0)                             /* !< STARTEDGE Offset */
#define EPWM_VCNTCFG_STARTEDGE_MASK              ((uint16_t)0x0000000FU)         /* !< Counter Start Edge Selection */
/* EPWM_VCNTCFG[STARTEDGESTS] Bits */
#define EPWM_VCNTCFG_STARTEDGESTS_OFS            (7)                             /* !< STARTEDGESTS Offset */
#define EPWM_VCNTCFG_STARTEDGESTS_MASK           ((uint16_t)0x00000080U)         /* !< Start Edge Status Bit */
/* EPWM_VCNTCFG[STOPEDGE] Bits */
#define EPWM_VCNTCFG_STOPEDGE_OFS                (8)                             /* !< STOPEDGE Offset */
#define EPWM_VCNTCFG_STOPEDGE_MASK               ((uint16_t)0x00000F00U)         /* !< Counter Start Edge Selection */
/* EPWM_VCNTCFG[STOPEDGESTS] Bits */
#define EPWM_VCNTCFG_STOPEDGESTS_OFS             (15)                            /* !< STOPEDGESTS Offset */
#define EPWM_VCNTCFG_STOPEDGESTS_MASK            ((uint16_t)0x00008000U)         /* !< Stop Edge Status Bit */

/* EPWM_HRCNFG Bits */
/* EPWM_HRCNFG[EDGMODE] Bits */
#define EPWM_HRCNFG_EDGMODE_OFS                  (0)                             /* !< EDGMODE Offset */
#define EPWM_HRCNFG_EDGMODE_MASK                 ((uint16_t)0x00000003U)         /* !< ePWMxA Edge Mode Select Bits */
/* EPWM_HRCNFG[CTLMODE] Bits */
#define EPWM_HRCNFG_CTLMODE_OFS                  (2)                             /* !< CTLMODE Offset */
#define EPWM_HRCNFG_CTLMODE_MASK                 ((uint16_t)0x00000004U)         /* !< ePWMxA Control Mode Select Bits */
/* EPWM_HRCNFG[HRLOAD] Bits */
#define EPWM_HRCNFG_HRLOAD_OFS                   (3)                             /* !< HRLOAD Offset */
#define EPWM_HRCNFG_HRLOAD_MASK                  ((uint16_t)0x00000018U)         /* !< ePWMxA Shadow Mode Select Bits */
/* EPWM_HRCNFG[SELOUTB] Bits */
#define EPWM_HRCNFG_SELOUTB_OFS                  (5)                             /* !< SELOUTB Offset */
#define EPWM_HRCNFG_SELOUTB_MASK                 ((uint16_t)0x00000020U)         /* !< EPWMB Output Selection Bit */
/* EPWM_HRCNFG[AUTOCONV] Bits */
#define EPWM_HRCNFG_AUTOCONV_OFS                 (6)                             /* !< AUTOCONV Offset */
#define EPWM_HRCNFG_AUTOCONV_MASK                ((uint16_t)0x00000040U)         /* !< Autoconversion Bit */
/* EPWM_HRCNFG[SWAPAB] Bits */
#define EPWM_HRCNFG_SWAPAB_OFS                   (7)                             /* !< SWAPAB Offset */
#define EPWM_HRCNFG_SWAPAB_MASK                  ((uint16_t)0x00000080U)         /* !< Swap EPWMA and EPWMB Outputs Bit */
/* EPWM_HRCNFG[EDGMODEB] Bits */
#define EPWM_HRCNFG_EDGMODEB_OFS                 (8)                             /* !< EDGMODEB Offset */
#define EPWM_HRCNFG_EDGMODEB_MASK                ((uint16_t)0x00000300U)         /* !< ePWMxB Edge Mode Select Bits */
/* EPWM_HRCNFG[CTLMODEB] Bits */
#define EPWM_HRCNFG_CTLMODEB_OFS                 (10)                            /* !< CTLMODEB Offset */
#define EPWM_HRCNFG_CTLMODEB_MASK                ((uint16_t)0x00000400U)         /* !< ePWMxB Control Mode Select Bits */
/* EPWM_HRCNFG[HRLOADB] Bits */
#define EPWM_HRCNFG_HRLOADB_OFS                  (11)                            /* !< HRLOADB Offset */
#define EPWM_HRCNFG_HRLOADB_MASK                 ((uint16_t)0x00001800U)         /* !< ePWMxB Shadow Mode Select Bits */

/* EPWM_HRPWR Bits */
/* EPWM_HRPWR[CALPWRON] Bits */
#define EPWM_HRPWR_CALPWRON_OFS                  (15)                            /* !< CALPWRON Offset */
#define EPWM_HRPWR_CALPWRON_MASK                 ((uint16_t)0x00008000U)         /* !< Calibration Power On */

/* EPWM_HRMSTEP Bits */
/* EPWM_HRMSTEP[HRMSTEP] Bits */
#define EPWM_HRMSTEP_HRMSTEP_OFS                 (0)                             /* !< HRMSTEP Offset */
#define EPWM_HRMSTEP_HRMSTEP_MASK                ((uint16_t)0x000000FFU)         /* !< High Resolution Micro Step Value */

/* EPWM_HRCNFG2 Bits */
/* EPWM_HRCNFG2[EDGMODEDB] Bits */
#define EPWM_HRCNFG2_EDGMODEDB_OFS               (0)                             /* !< EDGMODEDB Offset */
#define EPWM_HRCNFG2_EDGMODEDB_MASK              ((uint16_t)0x00000003U)         /* !< Dead-Band Edge-Mode Select Bits */
/* EPWM_HRCNFG2[CTLMODEDBRED] Bits */
#define EPWM_HRCNFG2_CTLMODEDBRED_OFS            (2)                             /* !< CTLMODEDBRED Offset */
#define EPWM_HRCNFG2_CTLMODEDBRED_MASK           ((uint16_t)0x0000000CU)         /* !< DBRED Control Mode Select Bits */
/* EPWM_HRCNFG2[CTLMODEDBFED] Bits */
#define EPWM_HRCNFG2_CTLMODEDBFED_OFS            (4)                             /* !< CTLMODEDBFED Offset */
#define EPWM_HRCNFG2_CTLMODEDBFED_MASK           ((uint16_t)0x00000030U)         /* !< DBFED Control Mode Select Bits */

/* EPWM_HRPCTL Bits */
/* EPWM_HRPCTL[HRPE] Bits */
#define EPWM_HRPCTL_HRPE_OFS                     (0)                             /* !< HRPE Offset */
#define EPWM_HRPCTL_HRPE_MASK                    ((uint16_t)0x00000001U)         /* !< High Resolution Period Enable */
/* EPWM_HRPCTL[PWMSYNCSEL] Bits */
#define EPWM_HRPCTL_PWMSYNCSEL_OFS               (1)                             /* !< PWMSYNCSEL Offset */
#define EPWM_HRPCTL_PWMSYNCSEL_MASK              ((uint16_t)0x00000002U)         /* !< EPWMSYNCPER Source Select */
/* EPWM_HRPCTL[TBPHSHRLOADE] Bits */
#define EPWM_HRPCTL_TBPHSHRLOADE_OFS             (2)                             /* !< TBPHSHRLOADE Offset */
#define EPWM_HRPCTL_TBPHSHRLOADE_MASK            ((uint16_t)0x00000004U)         /* !< TBPHSHR Load Enable */
/* EPWM_HRPCTL[PWMSYNCSELX] Bits */
#define EPWM_HRPCTL_PWMSYNCSELX_OFS              (4)                             /* !< PWMSYNCSELX Offset */
#define EPWM_HRPCTL_PWMSYNCSELX_MASK             ((uint16_t)0x00000070U)         /* !< EPWMSYNCPER Extended Source Select
                                                                                    Bit: */

/* EPWM_TRREM Bits */
/* EPWM_TRREM[TRREM] Bits */
#define EPWM_TRREM_TRREM_OFS                     (0)                             /* !< TRREM Offset */
#define EPWM_TRREM_TRREM_MASK                    ((uint16_t)0x000007FFU)         /* !< HRPWM Remainder Bits */

/* EPWM_GLDCTL Bits */
/* EPWM_GLDCTL[GLD] Bits */
#define EPWM_GLDCTL_GLD_OFS                      (0)                             /* !< GLD Offset */
#define EPWM_GLDCTL_GLD_MASK                     ((uint16_t)0x00000001U)         /* !< Global Shadow to Active load event
                                                                                    control */
/* EPWM_GLDCTL[GLDMODE] Bits */
#define EPWM_GLDCTL_GLDMODE_OFS                  (1)                             /* !< GLDMODE Offset */
#define EPWM_GLDCTL_GLDMODE_MASK                 ((uint16_t)0x0000001EU)         /* !< Shadow to Active Global Load Pulse
                                                                                    Selection */
/* EPWM_GLDCTL[OSHTMODE] Bits */
#define EPWM_GLDCTL_OSHTMODE_OFS                 (5)                             /* !< OSHTMODE Offset */
#define EPWM_GLDCTL_OSHTMODE_MASK                ((uint16_t)0x00000020U)         /* !< One Shot Load mode control bit */
/* EPWM_GLDCTL[GLDPRD] Bits */
#define EPWM_GLDCTL_GLDPRD_OFS                   (7)                             /* !< GLDPRD Offset */
#define EPWM_GLDCTL_GLDPRD_MASK                  ((uint16_t)0x00000380U)         /* !< Global Load Strobe Period Select
                                                                                    Register */
/* EPWM_GLDCTL[GLDCNT] Bits */
#define EPWM_GLDCTL_GLDCNT_OFS                   (10)                            /* !< GLDCNT Offset */
#define EPWM_GLDCTL_GLDCNT_MASK                  ((uint16_t)0x00001C00U)         /* !< Global Load Strobe Counter Register */

/* EPWM_GLDCFG Bits */
/* EPWM_GLDCFG[TBPRD_TBPRDHR] Bits */
#define EPWM_GLDCFG_TBPRD_TBPRDHR_OFS            (0)                             /* !< TBPRD_TBPRDHR Offset */
#define EPWM_GLDCFG_TBPRD_TBPRDHR_MASK           ((uint16_t)0x00000001U)         /* !< Global load event configuration for
                                                                                    TBPRD:TBPRDHR */
/* EPWM_GLDCFG[CMPA_CMPAHR] Bits */
#define EPWM_GLDCFG_CMPA_CMPAHR_OFS              (1)                             /* !< CMPA_CMPAHR Offset */
#define EPWM_GLDCFG_CMPA_CMPAHR_MASK             ((uint16_t)0x00000002U)         /* !< Global load event configuration for
                                                                                    CMPA:CMPAHR */
/* EPWM_GLDCFG[CMPB_CMPBHR] Bits */
#define EPWM_GLDCFG_CMPB_CMPBHR_OFS              (2)                             /* !< CMPB_CMPBHR Offset */
#define EPWM_GLDCFG_CMPB_CMPBHR_MASK             ((uint16_t)0x00000004U)         /* !< Global load event configuration for
                                                                                    CMPB:CMPBHR */
/* EPWM_GLDCFG[CMPC] Bits */
#define EPWM_GLDCFG_CMPC_OFS                     (3)                             /* !< CMPC Offset */
#define EPWM_GLDCFG_CMPC_MASK                    ((uint16_t)0x00000008U)         /* !< Global load event configuration for
                                                                                    CMPC */
/* EPWM_GLDCFG[CMPD] Bits */
#define EPWM_GLDCFG_CMPD_OFS                     (4)                             /* !< CMPD Offset */
#define EPWM_GLDCFG_CMPD_MASK                    ((uint16_t)0x00000010U)         /* !< Global load event configuration for
                                                                                    CMPD */
/* EPWM_GLDCFG[DBRED_DBREDHR] Bits */
#define EPWM_GLDCFG_DBRED_DBREDHR_OFS            (5)                             /* !< DBRED_DBREDHR Offset */
#define EPWM_GLDCFG_DBRED_DBREDHR_MASK           ((uint16_t)0x00000020U)         /* !< Global load event configuration for
                                                                                    DBRED:DBREDHR */
/* EPWM_GLDCFG[DBFED_DBFEDHR] Bits */
#define EPWM_GLDCFG_DBFED_DBFEDHR_OFS            (6)                             /* !< DBFED_DBFEDHR Offset */
#define EPWM_GLDCFG_DBFED_DBFEDHR_MASK           ((uint16_t)0x00000040U)         /* !< Global load event configuration for
                                                                                    DBFED:DBFEDHR */
/* EPWM_GLDCFG[DBCTL] Bits */
#define EPWM_GLDCFG_DBCTL_OFS                    (7)                             /* !< DBCTL Offset */
#define EPWM_GLDCFG_DBCTL_MASK                   ((uint16_t)0x00000080U)         /* !< Global load event configuration for
                                                                                    DBCTL */
/* EPWM_GLDCFG[AQCTLA_AQCTLA2] Bits */
#define EPWM_GLDCFG_AQCTLA_AQCTLA2_OFS           (8)                             /* !< AQCTLA_AQCTLA2 Offset */
#define EPWM_GLDCFG_AQCTLA_AQCTLA2_MASK          ((uint16_t)0x00000100U)         /* !< Global load event configuration for
                                                                                    AQCTLA/A2 */
/* EPWM_GLDCFG[AQCTLB_AQCTLB2] Bits */
#define EPWM_GLDCFG_AQCTLB_AQCTLB2_OFS           (9)                             /* !< AQCTLB_AQCTLB2 Offset */
#define EPWM_GLDCFG_AQCTLB_AQCTLB2_MASK          ((uint16_t)0x00000200U)         /* !< Global load event configuration for
                                                                                    AQCTLB/B2 */
/* EPWM_GLDCFG[AQCSFRC] Bits */
#define EPWM_GLDCFG_AQCSFRC_OFS                  (10)                            /* !< AQCSFRC Offset */
#define EPWM_GLDCFG_AQCSFRC_MASK                 ((uint16_t)0x00000400U)         /* !< Global load event configuration for
                                                                                    AQCSFRC */

/* EPWM_EPWMXLINK Bits */
/* EPWM_EPWMXLINK[TBPRDLINK] Bits */
#define EPWM_EPWMXLINK_TBPRDLINK_OFS             (0)                             /* !< TBPRDLINK Offset */
#define EPWM_EPWMXLINK_TBPRDLINK_MASK            ((uint32_t)0x0000000FU)         /* !< TBPRD:TBPRDHR  Link */
/* EPWM_EPWMXLINK[CMPALINK] Bits */
#define EPWM_EPWMXLINK_CMPALINK_OFS              (4)                             /* !< CMPALINK Offset */
#define EPWM_EPWMXLINK_CMPALINK_MASK             ((uint32_t)0x000000F0U)         /* !< CMPA:CMPAHR Link */
/* EPWM_EPWMXLINK[CMPBLINK] Bits */
#define EPWM_EPWMXLINK_CMPBLINK_OFS              (8)                             /* !< CMPBLINK Offset */
#define EPWM_EPWMXLINK_CMPBLINK_MASK             ((uint32_t)0x00000F00U)         /* !< CMPB:CMPBHR Link */
/* EPWM_EPWMXLINK[CMPCLINK] Bits */
#define EPWM_EPWMXLINK_CMPCLINK_OFS              (12)                            /* !< CMPCLINK Offset */
#define EPWM_EPWMXLINK_CMPCLINK_MASK             ((uint32_t)0x0000F000U)         /* !< CMPC Link */
/* EPWM_EPWMXLINK[CMPDLINK] Bits */
#define EPWM_EPWMXLINK_CMPDLINK_OFS              (16)                            /* !< CMPDLINK Offset */
#define EPWM_EPWMXLINK_CMPDLINK_MASK             ((uint32_t)0x000F0000U)         /* !< CMPD Link */
/* EPWM_EPWMXLINK[GLDCTL2LINK] Bits */
#define EPWM_EPWMXLINK_GLDCTL2LINK_OFS           (28)                            /* !< GLDCTL2LINK Offset */
#define EPWM_EPWMXLINK_GLDCTL2LINK_MASK          ((uint32_t)0xF0000000U)         /* !< GLDCTL2 Link */

/* EPWM_AQCTLA Bits */
/* EPWM_AQCTLA[ZRO] Bits */
#define EPWM_AQCTLA_ZRO_OFS                      (0)                             /* !< ZRO Offset */
#define EPWM_AQCTLA_ZRO_MASK                     ((uint16_t)0x00000003U)         /* !< Action Counter = Zero */
/* EPWM_AQCTLA[PRD] Bits */
#define EPWM_AQCTLA_PRD_OFS                      (2)                             /* !< PRD Offset */
#define EPWM_AQCTLA_PRD_MASK                     ((uint16_t)0x0000000CU)         /* !< Action Counter = Period */
/* EPWM_AQCTLA[CAU] Bits */
#define EPWM_AQCTLA_CAU_OFS                      (4)                             /* !< CAU Offset */
#define EPWM_AQCTLA_CAU_MASK                     ((uint16_t)0x00000030U)         /* !< Action Counter = Compare A Up */
/* EPWM_AQCTLA[CAD] Bits */
#define EPWM_AQCTLA_CAD_OFS                      (6)                             /* !< CAD Offset */
#define EPWM_AQCTLA_CAD_MASK                     ((uint16_t)0x000000C0U)         /* !< Action Counter = Compare A Down */
/* EPWM_AQCTLA[CBU] Bits */
#define EPWM_AQCTLA_CBU_OFS                      (8)                             /* !< CBU Offset */
#define EPWM_AQCTLA_CBU_MASK                     ((uint16_t)0x00000300U)         /* !< Action Counter = Compare B Up */
/* EPWM_AQCTLA[CBD] Bits */
#define EPWM_AQCTLA_CBD_OFS                      (10)                            /* !< CBD Offset */
#define EPWM_AQCTLA_CBD_MASK                     ((uint16_t)0x00000C00U)         /* !< Action Counter = Compare B Down */

/* EPWM_AQCTLA2 Bits */
/* EPWM_AQCTLA2[T1U] Bits */
#define EPWM_AQCTLA2_T1U_OFS                     (0)                             /* !< T1U Offset */
#define EPWM_AQCTLA2_T1U_MASK                    ((uint16_t)0x00000003U)         /* !< Action when event occurs on T1 in
                                                                                    UP-Count */
/* EPWM_AQCTLA2[T1D] Bits */
#define EPWM_AQCTLA2_T1D_OFS                     (2)                             /* !< T1D Offset */
#define EPWM_AQCTLA2_T1D_MASK                    ((uint16_t)0x0000000CU)         /* !< Action when event occurs on T1 in
                                                                                    DOWN-Count */
/* EPWM_AQCTLA2[T2U] Bits */
#define EPWM_AQCTLA2_T2U_OFS                     (4)                             /* !< T2U Offset */
#define EPWM_AQCTLA2_T2U_MASK                    ((uint16_t)0x00000030U)         /* !< Action when event occurs on T2 in
                                                                                    UP-Count */
/* EPWM_AQCTLA2[T2D] Bits */
#define EPWM_AQCTLA2_T2D_OFS                     (6)                             /* !< T2D Offset */
#define EPWM_AQCTLA2_T2D_MASK                    ((uint16_t)0x000000C0U)         /* !< Action when event occurs on T2 in
                                                                                    DOWN-Count */

/* EPWM_AQCTLB Bits */
/* EPWM_AQCTLB[ZRO] Bits */
#define EPWM_AQCTLB_ZRO_OFS                      (0)                             /* !< ZRO Offset */
#define EPWM_AQCTLB_ZRO_MASK                     ((uint16_t)0x00000003U)         /* !< Action Counter = Zero */
/* EPWM_AQCTLB[PRD] Bits */
#define EPWM_AQCTLB_PRD_OFS                      (2)                             /* !< PRD Offset */
#define EPWM_AQCTLB_PRD_MASK                     ((uint16_t)0x0000000CU)         /* !< Action Counter = Period */
/* EPWM_AQCTLB[CAU] Bits */
#define EPWM_AQCTLB_CAU_OFS                      (4)                             /* !< CAU Offset */
#define EPWM_AQCTLB_CAU_MASK                     ((uint16_t)0x00000030U)         /* !< Action Counter = Compare A Up */
/* EPWM_AQCTLB[CAD] Bits */
#define EPWM_AQCTLB_CAD_OFS                      (6)                             /* !< CAD Offset */
#define EPWM_AQCTLB_CAD_MASK                     ((uint16_t)0x000000C0U)         /* !< Action Counter = Compare A Down */
/* EPWM_AQCTLB[CBU] Bits */
#define EPWM_AQCTLB_CBU_OFS                      (8)                             /* !< CBU Offset */
#define EPWM_AQCTLB_CBU_MASK                     ((uint16_t)0x00000300U)         /* !< Action Counter = Compare B Up */
/* EPWM_AQCTLB[CBD] Bits */
#define EPWM_AQCTLB_CBD_OFS                      (10)                            /* !< CBD Offset */
#define EPWM_AQCTLB_CBD_MASK                     ((uint16_t)0x00000C00U)         /* !< Action Counter = Compare B Down */

/* EPWM_AQCTLB2 Bits */
/* EPWM_AQCTLB2[T1U] Bits */
#define EPWM_AQCTLB2_T1U_OFS                     (0)                             /* !< T1U Offset */
#define EPWM_AQCTLB2_T1U_MASK                    ((uint16_t)0x00000003U)         /* !< Action when event occurs on T1 in
                                                                                    UP-Count */
/* EPWM_AQCTLB2[T1D] Bits */
#define EPWM_AQCTLB2_T1D_OFS                     (2)                             /* !< T1D Offset */
#define EPWM_AQCTLB2_T1D_MASK                    ((uint16_t)0x0000000CU)         /* !< Action when event occurs on T1 in
                                                                                    DOWN-Count */
/* EPWM_AQCTLB2[T2U] Bits */
#define EPWM_AQCTLB2_T2U_OFS                     (4)                             /* !< T2U Offset */
#define EPWM_AQCTLB2_T2U_MASK                    ((uint16_t)0x00000030U)         /* !< Action when event occurs on T2 in
                                                                                    UP-Count */
/* EPWM_AQCTLB2[T2D] Bits */
#define EPWM_AQCTLB2_T2D_OFS                     (6)                             /* !< T2D Offset */
#define EPWM_AQCTLB2_T2D_MASK                    ((uint16_t)0x000000C0U)         /* !< Action when event occurs on T2 in
                                                                                    DOWN-Count */

/* EPWM_AQSFRC Bits */
/* EPWM_AQSFRC[ACTSFA] Bits */
#define EPWM_AQSFRC_ACTSFA_OFS                   (0)                             /* !< ACTSFA Offset */
#define EPWM_AQSFRC_ACTSFA_MASK                  ((uint16_t)0x00000003U)         /* !< Action when One-time SW Force A
                                                                                    Invoked */
/* EPWM_AQSFRC[OTSFA] Bits */
#define EPWM_AQSFRC_OTSFA_OFS                    (2)                             /* !< OTSFA Offset */
#define EPWM_AQSFRC_OTSFA_MASK                   ((uint16_t)0x00000004U)         /* !< One-time SW Force A Output */
/* EPWM_AQSFRC[ACTSFB] Bits */
#define EPWM_AQSFRC_ACTSFB_OFS                   (3)                             /* !< ACTSFB Offset */
#define EPWM_AQSFRC_ACTSFB_MASK                  ((uint16_t)0x00000018U)         /* !< Action when One-time SW Force B
                                                                                    Invoked */
/* EPWM_AQSFRC[OTSFB] Bits */
#define EPWM_AQSFRC_OTSFB_OFS                    (5)                             /* !< OTSFB Offset */
#define EPWM_AQSFRC_OTSFB_MASK                   ((uint16_t)0x00000020U)         /* !< One-time SW Force A Output */
/* EPWM_AQSFRC[RLDCSF] Bits */
#define EPWM_AQSFRC_RLDCSF_OFS                   (6)                             /* !< RLDCSF Offset */
#define EPWM_AQSFRC_RLDCSF_MASK                  ((uint16_t)0x000000C0U)         /* !< Reload from Shadow Options */

/* EPWM_AQCSFRC Bits */
/* EPWM_AQCSFRC[CSFA] Bits */
#define EPWM_AQCSFRC_CSFA_OFS                    (0)                             /* !< CSFA Offset */
#define EPWM_AQCSFRC_CSFA_MASK                   ((uint16_t)0x00000003U)         /* !< Continuous Software Force on output
                                                                                    A */
/* EPWM_AQCSFRC[CSFB] Bits */
#define EPWM_AQCSFRC_CSFB_OFS                    (2)                             /* !< CSFB Offset */
#define EPWM_AQCSFRC_CSFB_MASK                   ((uint16_t)0x0000000CU)         /* !< Continuous Software Force on output
                                                                                    B */

/* EPWM_DBREDHR Bits */
/* EPWM_DBREDHR[DBREDHR] Bits */
#define EPWM_DBREDHR_DBREDHR_OFS                 (9)                             /* !< DBREDHR Offset */
#define EPWM_DBREDHR_DBREDHR_MASK                ((uint16_t)0x0000FE00U)         /* !< DBREDHR High Resolution Bits */

/* EPWM_DBRED Bits */
/* EPWM_DBRED[DBRED] Bits */
#define EPWM_DBRED_DBRED_OFS                     (0)                             /* !< DBRED Offset */
#define EPWM_DBRED_DBRED_MASK                    ((uint16_t)0x00003FFFU)         /* !< Rising edge delay value */

/* EPWM_DBFEDHR Bits */
/* EPWM_DBFEDHR[DBFEDHR] Bits */
#define EPWM_DBFEDHR_DBFEDHR_OFS                 (9)                             /* !< DBFEDHR Offset */
#define EPWM_DBFEDHR_DBFEDHR_MASK                ((uint16_t)0x0000FE00U)         /* !< DBFEDHR High Resolution Bits */

/* EPWM_DBFED Bits */
/* EPWM_DBFED[DBFED] Bits */
#define EPWM_DBFED_DBFED_OFS                     (0)                             /* !< DBFED Offset */
#define EPWM_DBFED_DBFED_MASK                    ((uint16_t)0x00003FFFU)         /* !< Falling edge delay value */

/* EPWM_TBPHS Bits */
/* EPWM_TBPHS[TBPHSHR] Bits */
#define EPWM_TBPHS_TBPHSHR_OFS                   (0)                             /* !< TBPHSHR Offset */
#define EPWM_TBPHS_TBPHSHR_MASK                  ((uint32_t)0x0000FFFFU)         /* !< Extension Register for HRPWM Phase
                                                                                    (8-bits) */
/* EPWM_TBPHS[TBPHS] Bits */
#define EPWM_TBPHS_TBPHS_OFS                     (16)                            /* !< TBPHS Offset */
#define EPWM_TBPHS_TBPHS_MASK                    ((uint32_t)0xFFFF0000U)         /* !< Phase Offset Register */

/* EPWM_TBPRDHR Bits */
/* EPWM_TBPRDHR[TBPRDHR] Bits */
#define EPWM_TBPRDHR_TBPRDHR_OFS                 (8)                             /* !< TBPRDHR Offset */
#define EPWM_TBPRDHR_TBPRDHR_MASK                ((uint16_t)0x0000FF00U)         /* !< High res Time base period register */

/* EPWM_TBPRD Bits */
/* EPWM_TBPRD[TBPRD] Bits */
#define EPWM_TBPRD_TBPRD_OFS                     (0)                             /* !< TBPRD Offset */
#define EPWM_TBPRD_TBPRD_MASK                    ((uint16_t)0x0000FFFFU)         /* !< Time base period register */

/* EPWM_CMPA Bits */
/* EPWM_CMPA[CMPAHR] Bits */
#define EPWM_CMPA_CMPAHR_OFS                     (0)                             /* !< CMPAHR Offset */
#define EPWM_CMPA_CMPAHR_MASK                    ((uint32_t)0x0000FFFFU)         /* !< Compare A HRPWM Extension Register */
/* EPWM_CMPA[CMPA] Bits */
#define EPWM_CMPA_CMPA_OFS                       (16)                            /* !< CMPA Offset */
#define EPWM_CMPA_CMPA_MASK                      ((uint32_t)0xFFFF0000U)         /* !< Compare A Register */

/* EPWM_CMPB Bits */
/* EPWM_CMPB[CMPBHR] Bits */
#define EPWM_CMPB_CMPBHR_OFS                     (0)                             /* !< CMPBHR Offset */
#define EPWM_CMPB_CMPBHR_MASK                    ((uint32_t)0x0000FFFFU)         /* !< Compare B High Resolution Bits */
/* EPWM_CMPB[CMPB] Bits */
#define EPWM_CMPB_CMPB_OFS                       (16)                            /* !< CMPB Offset */
#define EPWM_CMPB_CMPB_MASK                      ((uint32_t)0xFFFF0000U)         /* !< Compare B Register */

/* EPWM_CMPC Bits */
/* EPWM_CMPC[CMPC] Bits */
#define EPWM_CMPC_CMPC_OFS                       (0)                             /* !< CMPC Offset */
#define EPWM_CMPC_CMPC_MASK                      ((uint16_t)0x0000FFFFU)         /* !< Compare C Register */

/* EPWM_CMPD Bits */
/* EPWM_CMPD[CMPD] Bits */
#define EPWM_CMPD_CMPD_OFS                       (0)                             /* !< CMPD Offset */
#define EPWM_CMPD_CMPD_MASK                      ((uint16_t)0x0000FFFFU)         /* !< Compare D Register */

/* EPWM_GLDCTL2 Bits */
/* EPWM_GLDCTL2[OSHTLD] Bits */
#define EPWM_GLDCTL2_OSHTLD_OFS                  (0)                             /* !< OSHTLD Offset */
#define EPWM_GLDCTL2_OSHTLD_MASK                 ((uint16_t)0x00000001U)         /* !< Enable reload event in one shot
                                                                                    mode */
/* EPWM_GLDCTL2[GFRCLD] Bits */
#define EPWM_GLDCTL2_GFRCLD_OFS                  (1)                             /* !< GFRCLD Offset */
#define EPWM_GLDCTL2_GFRCLD_MASK                 ((uint16_t)0x00000002U)         /* !< Force reload event in one shot mode */

/* EPWM_SWVDELVAL Bits */
/* EPWM_SWVDELVAL[SWVDELVAL] Bits */
#define EPWM_SWVDELVAL_SWVDELVAL_OFS             (0)                             /* !< SWVDELVAL Offset */
#define EPWM_SWVDELVAL_SWVDELVAL_MASK            ((uint16_t)0x0000FFFFU)         /* !< Software programmed Valley Delay
                                                                                    Value */

/* EPWM_TZSEL Bits */
/* EPWM_TZSEL[CBC1] Bits */
#define EPWM_TZSEL_CBC1_OFS                      (0)                             /* !< CBC1 Offset */
#define EPWM_TZSEL_CBC1_MASK                     ((uint16_t)0x00000001U)         /* !< TZ1 CBC select */
/* EPWM_TZSEL[CBC2] Bits */
#define EPWM_TZSEL_CBC2_OFS                      (1)                             /* !< CBC2 Offset */
#define EPWM_TZSEL_CBC2_MASK                     ((uint16_t)0x00000002U)         /* !< TZ2 CBC select */
/* EPWM_TZSEL[CBC3] Bits */
#define EPWM_TZSEL_CBC3_OFS                      (2)                             /* !< CBC3 Offset */
#define EPWM_TZSEL_CBC3_MASK                     ((uint16_t)0x00000004U)         /* !< TZ3 CBC select */
/* EPWM_TZSEL[CBC4] Bits */
#define EPWM_TZSEL_CBC4_OFS                      (3)                             /* !< CBC4 Offset */
#define EPWM_TZSEL_CBC4_MASK                     ((uint16_t)0x00000008U)         /* !< TZ4 CBC select */
/* EPWM_TZSEL[CBC5] Bits */
#define EPWM_TZSEL_CBC5_OFS                      (4)                             /* !< CBC5 Offset */
#define EPWM_TZSEL_CBC5_MASK                     ((uint16_t)0x00000010U)         /* !< TZ5 CBC select */
/* EPWM_TZSEL[CBC6] Bits */
#define EPWM_TZSEL_CBC6_OFS                      (5)                             /* !< CBC6 Offset */
#define EPWM_TZSEL_CBC6_MASK                     ((uint16_t)0x00000020U)         /* !< TZ6 CBC select */
/* EPWM_TZSEL[DCAEVT2] Bits */
#define EPWM_TZSEL_DCAEVT2_OFS                   (6)                             /* !< DCAEVT2 Offset */
#define EPWM_TZSEL_DCAEVT2_MASK                  ((uint16_t)0x00000040U)         /* !< DCAEVT2 CBC select */
/* EPWM_TZSEL[DCBEVT2] Bits */
#define EPWM_TZSEL_DCBEVT2_OFS                   (7)                             /* !< DCBEVT2 Offset */
#define EPWM_TZSEL_DCBEVT2_MASK                  ((uint16_t)0x00000080U)         /* !< DCBEVT2 CBC select */
/* EPWM_TZSEL[OSHT1] Bits */
#define EPWM_TZSEL_OSHT1_OFS                     (8)                             /* !< OSHT1 Offset */
#define EPWM_TZSEL_OSHT1_MASK                    ((uint16_t)0x00000100U)         /* !< One-shot TZ1 select */
/* EPWM_TZSEL[OSHT2] Bits */
#define EPWM_TZSEL_OSHT2_OFS                     (9)                             /* !< OSHT2 Offset */
#define EPWM_TZSEL_OSHT2_MASK                    ((uint16_t)0x00000200U)         /* !< One-shot TZ2 select */
/* EPWM_TZSEL[OSHT3] Bits */
#define EPWM_TZSEL_OSHT3_OFS                     (10)                            /* !< OSHT3 Offset */
#define EPWM_TZSEL_OSHT3_MASK                    ((uint16_t)0x00000400U)         /* !< One-shot TZ3 select */
/* EPWM_TZSEL[OSHT4] Bits */
#define EPWM_TZSEL_OSHT4_OFS                     (11)                            /* !< OSHT4 Offset */
#define EPWM_TZSEL_OSHT4_MASK                    ((uint16_t)0x00000800U)         /* !< One-shot TZ4 select */
/* EPWM_TZSEL[OSHT5] Bits */
#define EPWM_TZSEL_OSHT5_OFS                     (12)                            /* !< OSHT5 Offset */
#define EPWM_TZSEL_OSHT5_MASK                    ((uint16_t)0x00001000U)         /* !< One-shot TZ5 select */
/* EPWM_TZSEL[OSHT6] Bits */
#define EPWM_TZSEL_OSHT6_OFS                     (13)                            /* !< OSHT6 Offset */
#define EPWM_TZSEL_OSHT6_MASK                    ((uint16_t)0x00002000U)         /* !< One-shot TZ6 select */
/* EPWM_TZSEL[DCAEVT1] Bits */
#define EPWM_TZSEL_DCAEVT1_OFS                   (14)                            /* !< DCAEVT1 Offset */
#define EPWM_TZSEL_DCAEVT1_MASK                  ((uint16_t)0x00004000U)         /* !< One-shot DCAEVT1 select */
/* EPWM_TZSEL[DCBEVT1] Bits */
#define EPWM_TZSEL_DCBEVT1_OFS                   (15)                            /* !< DCBEVT1 Offset */
#define EPWM_TZSEL_DCBEVT1_MASK                  ((uint16_t)0x00008000U)         /* !< One-shot DCBEVT1 select */

/* EPWM_TZDCSEL Bits */
/* EPWM_TZDCSEL[DCAEVT1] Bits */
#define EPWM_TZDCSEL_DCAEVT1_OFS                 (0)                             /* !< DCAEVT1 Offset */
#define EPWM_TZDCSEL_DCAEVT1_MASK                ((uint16_t)0x00000007U)         /* !< Digital Compare Output A Event 1 */
/* EPWM_TZDCSEL[DCAEVT2] Bits */
#define EPWM_TZDCSEL_DCAEVT2_OFS                 (3)                             /* !< DCAEVT2 Offset */
#define EPWM_TZDCSEL_DCAEVT2_MASK                ((uint16_t)0x00000038U)         /* !< Digital Compare Output A Event 2 */
/* EPWM_TZDCSEL[DCBEVT1] Bits */
#define EPWM_TZDCSEL_DCBEVT1_OFS                 (6)                             /* !< DCBEVT1 Offset */
#define EPWM_TZDCSEL_DCBEVT1_MASK                ((uint16_t)0x000001C0U)         /* !< Digital Compare Output B Event 1 */
/* EPWM_TZDCSEL[DCBEVT2] Bits */
#define EPWM_TZDCSEL_DCBEVT2_OFS                 (9)                             /* !< DCBEVT2 Offset */
#define EPWM_TZDCSEL_DCBEVT2_MASK                ((uint16_t)0x00000E00U)         /* !< Digital Compare Output B Event 2 */

/* EPWM_TZCTL Bits */
/* EPWM_TZCTL[TZA] Bits */
#define EPWM_TZCTL_TZA_OFS                       (0)                             /* !< TZA Offset */
#define EPWM_TZCTL_TZA_MASK                      ((uint16_t)0x00000003U)         /* !< TZ1 to TZ6 Trip Action On EPWMxA */
/* EPWM_TZCTL[TZB] Bits */
#define EPWM_TZCTL_TZB_OFS                       (2)                             /* !< TZB Offset */
#define EPWM_TZCTL_TZB_MASK                      ((uint16_t)0x0000000CU)         /* !< TZ1 to TZ6 Trip Action On EPWMxB */
/* EPWM_TZCTL[DCAEVT1] Bits */
#define EPWM_TZCTL_DCAEVT1_OFS                   (4)                             /* !< DCAEVT1 Offset */
#define EPWM_TZCTL_DCAEVT1_MASK                  ((uint16_t)0x00000030U)         /* !< EPWMxA action on DCAEVT1 */
/* EPWM_TZCTL[DCAEVT2] Bits */
#define EPWM_TZCTL_DCAEVT2_OFS                   (6)                             /* !< DCAEVT2 Offset */
#define EPWM_TZCTL_DCAEVT2_MASK                  ((uint16_t)0x000000C0U)         /* !< EPWMxA action on DCAEVT2 */
/* EPWM_TZCTL[DCBEVT1] Bits */
#define EPWM_TZCTL_DCBEVT1_OFS                   (8)                             /* !< DCBEVT1 Offset */
#define EPWM_TZCTL_DCBEVT1_MASK                  ((uint16_t)0x00000300U)         /* !< EPWMxB action on DCBEVT1 */
/* EPWM_TZCTL[DCBEVT2] Bits */
#define EPWM_TZCTL_DCBEVT2_OFS                   (10)                            /* !< DCBEVT2 Offset */
#define EPWM_TZCTL_DCBEVT2_MASK                  ((uint16_t)0x00000C00U)         /* !< EPWMxB action on DCBEVT2 */

/* EPWM_TZCTL2 Bits */
/* EPWM_TZCTL2[TZAU] Bits */
#define EPWM_TZCTL2_TZAU_OFS                     (0)                             /* !< TZAU Offset */
#define EPWM_TZCTL2_TZAU_MASK                    ((uint16_t)0x00000007U)         /* !< Trip Action On EPWMxA while Count
                                                                                    direction is UP */
/* EPWM_TZCTL2[TZAD] Bits */
#define EPWM_TZCTL2_TZAD_OFS                     (3)                             /* !< TZAD Offset */
#define EPWM_TZCTL2_TZAD_MASK                    ((uint16_t)0x00000038U)         /* !< Trip Action On EPWMxA while Count
                                                                                    direction is DOWN */
/* EPWM_TZCTL2[TZBU] Bits */
#define EPWM_TZCTL2_TZBU_OFS                     (6)                             /* !< TZBU Offset */
#define EPWM_TZCTL2_TZBU_MASK                    ((uint16_t)0x000001C0U)         /* !< Trip Action On EPWMxB while Count
                                                                                    direction is UP */
/* EPWM_TZCTL2[TZBD] Bits */
#define EPWM_TZCTL2_TZBD_OFS                     (9)                             /* !< TZBD Offset */
#define EPWM_TZCTL2_TZBD_MASK                    ((uint16_t)0x00000E00U)         /* !< Trip Action On EPWMxB while Count
                                                                                    direction is DOWN */
/* EPWM_TZCTL2[ETZE] Bits */
#define EPWM_TZCTL2_ETZE_OFS                     (15)                            /* !< ETZE Offset */
#define EPWM_TZCTL2_ETZE_MASK                    ((uint16_t)0x00008000U)         /* !< TZCTL2 Enable */

/* EPWM_TZCTLDCA Bits */
/* EPWM_TZCTLDCA[DCAEVT1U] Bits */
#define EPWM_TZCTLDCA_DCAEVT1U_OFS               (0)                             /* !< DCAEVT1U Offset */
#define EPWM_TZCTLDCA_DCAEVT1U_MASK              ((uint16_t)0x00000007U)         /* !< DCAEVT1 Action On EPWMxA while
                                                                                    Count direction is UP */
/* EPWM_TZCTLDCA[DCAEVT1D] Bits */
#define EPWM_TZCTLDCA_DCAEVT1D_OFS               (3)                             /* !< DCAEVT1D Offset */
#define EPWM_TZCTLDCA_DCAEVT1D_MASK              ((uint16_t)0x00000038U)         /* !< DCAEVT1 Action On EPWMxA while
                                                                                    Count direction is DOWN */
/* EPWM_TZCTLDCA[DCAEVT2U] Bits */
#define EPWM_TZCTLDCA_DCAEVT2U_OFS               (6)                             /* !< DCAEVT2U Offset */
#define EPWM_TZCTLDCA_DCAEVT2U_MASK              ((uint16_t)0x000001C0U)         /* !< DCAEVT2 Action On EPWMxA while
                                                                                    Count direction is UP */
/* EPWM_TZCTLDCA[DCAEVT2D] Bits */
#define EPWM_TZCTLDCA_DCAEVT2D_OFS               (9)                             /* !< DCAEVT2D Offset */
#define EPWM_TZCTLDCA_DCAEVT2D_MASK              ((uint16_t)0x00000E00U)         /* !< DCAEVT2 Action On EPWMxA while
                                                                                    Count direction is DOWN */

/* EPWM_TZCTLDCB Bits */
/* EPWM_TZCTLDCB[DCBEVT1U] Bits */
#define EPWM_TZCTLDCB_DCBEVT1U_OFS               (0)                             /* !< DCBEVT1U Offset */
#define EPWM_TZCTLDCB_DCBEVT1U_MASK              ((uint16_t)0x00000007U)         /* !< DCBEVT1 Action On EPWMxA while
                                                                                    Count direction is UP */
/* EPWM_TZCTLDCB[DCBEVT1D] Bits */
#define EPWM_TZCTLDCB_DCBEVT1D_OFS               (3)                             /* !< DCBEVT1D Offset */
#define EPWM_TZCTLDCB_DCBEVT1D_MASK              ((uint16_t)0x00000038U)         /* !< DCBEVT1 Action On EPWMxA while
                                                                                    Count direction is DOWN */
/* EPWM_TZCTLDCB[DCBEVT2U] Bits */
#define EPWM_TZCTLDCB_DCBEVT2U_OFS               (6)                             /* !< DCBEVT2U Offset */
#define EPWM_TZCTLDCB_DCBEVT2U_MASK              ((uint16_t)0x000001C0U)         /* !< DCBEVT2 Action On EPWMxA while
                                                                                    Count direction is UP */
/* EPWM_TZCTLDCB[DCBEVT2D] Bits */
#define EPWM_TZCTLDCB_DCBEVT2D_OFS               (9)                             /* !< DCBEVT2D Offset */
#define EPWM_TZCTLDCB_DCBEVT2D_MASK              ((uint16_t)0x00000E00U)         /* !< DCBEVT2 Action On EPWMxA while
                                                                                    Count direction is DOWN */

/* EPWM_TZEINT Bits */
/* EPWM_TZEINT[CBC] Bits */
#define EPWM_TZEINT_CBC_OFS                      (1)                             /* !< CBC Offset */
#define EPWM_TZEINT_CBC_MASK                     ((uint16_t)0x00000002U)         /* !< Trip Zones Cycle By Cycle Int
                                                                                    Enable */
/* EPWM_TZEINT[OST] Bits */
#define EPWM_TZEINT_OST_OFS                      (2)                             /* !< OST Offset */
#define EPWM_TZEINT_OST_MASK                     ((uint16_t)0x00000004U)         /* !< Trip Zones One Shot Int Enable */
/* EPWM_TZEINT[DCAEVT1] Bits */
#define EPWM_TZEINT_DCAEVT1_OFS                  (3)                             /* !< DCAEVT1 Offset */
#define EPWM_TZEINT_DCAEVT1_MASK                 ((uint16_t)0x00000008U)         /* !< Digital Compare A Event 1 Int
                                                                                    Enable */
/* EPWM_TZEINT[DCAEVT2] Bits */
#define EPWM_TZEINT_DCAEVT2_OFS                  (4)                             /* !< DCAEVT2 Offset */
#define EPWM_TZEINT_DCAEVT2_MASK                 ((uint16_t)0x00000010U)         /* !< Digital Compare A Event 2 Int
                                                                                    Enable */
/* EPWM_TZEINT[DCBEVT1] Bits */
#define EPWM_TZEINT_DCBEVT1_OFS                  (5)                             /* !< DCBEVT1 Offset */
#define EPWM_TZEINT_DCBEVT1_MASK                 ((uint16_t)0x00000020U)         /* !< Digital Compare B Event 1 Int
                                                                                    Enable */
/* EPWM_TZEINT[DCBEVT2] Bits */
#define EPWM_TZEINT_DCBEVT2_OFS                  (6)                             /* !< DCBEVT2 Offset */
#define EPWM_TZEINT_DCBEVT2_MASK                 ((uint16_t)0x00000040U)         /* !< Digital Compare B Event 2 Int
                                                                                    Enable */

/* EPWM_TZFLG Bits */
/* EPWM_TZFLG[INT] Bits */
#define EPWM_TZFLG_INT_OFS                       (0)                             /* !< INT Offset */
#define EPWM_TZFLG_INT_MASK                      ((uint16_t)0x00000001U)         /* !< Global Int Status Flag */
/* EPWM_TZFLG[CBC] Bits */
#define EPWM_TZFLG_CBC_OFS                       (1)                             /* !< CBC Offset */
#define EPWM_TZFLG_CBC_MASK                      ((uint16_t)0x00000002U)         /* !< Trip Zones Cycle By Cycle Flag */
/* EPWM_TZFLG[OST] Bits */
#define EPWM_TZFLG_OST_OFS                       (2)                             /* !< OST Offset */
#define EPWM_TZFLG_OST_MASK                      ((uint16_t)0x00000004U)         /* !< Trip Zones One Shot Flag */
/* EPWM_TZFLG[DCAEVT1] Bits */
#define EPWM_TZFLG_DCAEVT1_OFS                   (3)                             /* !< DCAEVT1 Offset */
#define EPWM_TZFLG_DCAEVT1_MASK                  ((uint16_t)0x00000008U)         /* !< Digital Compare A Event 1 Flag */
/* EPWM_TZFLG[DCAEVT2] Bits */
#define EPWM_TZFLG_DCAEVT2_OFS                   (4)                             /* !< DCAEVT2 Offset */
#define EPWM_TZFLG_DCAEVT2_MASK                  ((uint16_t)0x00000010U)         /* !< Digital Compare A Event 2 Flag */
/* EPWM_TZFLG[DCBEVT1] Bits */
#define EPWM_TZFLG_DCBEVT1_OFS                   (5)                             /* !< DCBEVT1 Offset */
#define EPWM_TZFLG_DCBEVT1_MASK                  ((uint16_t)0x00000020U)         /* !< Digital Compare B Event 1 Flag */
/* EPWM_TZFLG[DCBEVT2] Bits */
#define EPWM_TZFLG_DCBEVT2_OFS                   (6)                             /* !< DCBEVT2 Offset */
#define EPWM_TZFLG_DCBEVT2_MASK                  ((uint16_t)0x00000040U)         /* !< Digital Compare B Event 2 Flag */

/* EPWM_TZCBCFLG Bits */
/* EPWM_TZCBCFLG[CBC1] Bits */
#define EPWM_TZCBCFLG_CBC1_OFS                   (0)                             /* !< CBC1 Offset */
#define EPWM_TZCBCFLG_CBC1_MASK                  ((uint16_t)0x00000001U)         /* !< Latched Status Flag for CBC1 Trip
                                                                                    Latch */
/* EPWM_TZCBCFLG[CBC2] Bits */
#define EPWM_TZCBCFLG_CBC2_OFS                   (1)                             /* !< CBC2 Offset */
#define EPWM_TZCBCFLG_CBC2_MASK                  ((uint16_t)0x00000002U)         /* !< Latched Status Flag for CBC2 Trip
                                                                                    Latch */
/* EPWM_TZCBCFLG[CBC3] Bits */
#define EPWM_TZCBCFLG_CBC3_OFS                   (2)                             /* !< CBC3 Offset */
#define EPWM_TZCBCFLG_CBC3_MASK                  ((uint16_t)0x00000004U)         /* !< Latched Status Flag for CBC3 Trip
                                                                                    Latch */
/* EPWM_TZCBCFLG[CBC4] Bits */
#define EPWM_TZCBCFLG_CBC4_OFS                   (3)                             /* !< CBC4 Offset */
#define EPWM_TZCBCFLG_CBC4_MASK                  ((uint16_t)0x00000008U)         /* !< Latched Status Flag for CBC4 Trip
                                                                                    Latch */
/* EPWM_TZCBCFLG[CBC5] Bits */
#define EPWM_TZCBCFLG_CBC5_OFS                   (4)                             /* !< CBC5 Offset */
#define EPWM_TZCBCFLG_CBC5_MASK                  ((uint16_t)0x00000010U)         /* !< Latched Status Flag for CBC5 Trip
                                                                                    Latch */
/* EPWM_TZCBCFLG[CBC6] Bits */
#define EPWM_TZCBCFLG_CBC6_OFS                   (5)                             /* !< CBC6 Offset */
#define EPWM_TZCBCFLG_CBC6_MASK                  ((uint16_t)0x00000020U)         /* !< Latched Status Flag for CBC6 Trip
                                                                                    Latch */
/* EPWM_TZCBCFLG[DCAEVT2] Bits */
#define EPWM_TZCBCFLG_DCAEVT2_OFS                (6)                             /* !< DCAEVT2 Offset */
#define EPWM_TZCBCFLG_DCAEVT2_MASK               ((uint16_t)0x00000040U)         /* !< Latched Status Flag for Digital
                                                                                    Compare Output A Event 2 */
/* EPWM_TZCBCFLG[DCBEVT2] Bits */
#define EPWM_TZCBCFLG_DCBEVT2_OFS                (7)                             /* !< DCBEVT2 Offset */
#define EPWM_TZCBCFLG_DCBEVT2_MASK               ((uint16_t)0x00000080U)         /* !< Latched Status Flag for Digital
                                                                                    Compare Output B Event 2 */

/* EPWM_TZOSTFLG Bits */
/* EPWM_TZOSTFLG[OST1] Bits */
#define EPWM_TZOSTFLG_OST1_OFS                   (0)                             /* !< OST1 Offset */
#define EPWM_TZOSTFLG_OST1_MASK                  ((uint16_t)0x00000001U)         /* !< Latched Status Flag for OST1 Trip
                                                                                    Latch */
/* EPWM_TZOSTFLG[OST2] Bits */
#define EPWM_TZOSTFLG_OST2_OFS                   (1)                             /* !< OST2 Offset */
#define EPWM_TZOSTFLG_OST2_MASK                  ((uint16_t)0x00000002U)         /* !< Latched Status Flag for OST2 Trip
                                                                                    Latch */
/* EPWM_TZOSTFLG[OST3] Bits */
#define EPWM_TZOSTFLG_OST3_OFS                   (2)                             /* !< OST3 Offset */
#define EPWM_TZOSTFLG_OST3_MASK                  ((uint16_t)0x00000004U)         /* !< Latched Status Flag for OST3 Trip
                                                                                    Latch */
/* EPWM_TZOSTFLG[OST4] Bits */
#define EPWM_TZOSTFLG_OST4_OFS                   (3)                             /* !< OST4 Offset */
#define EPWM_TZOSTFLG_OST4_MASK                  ((uint16_t)0x00000008U)         /* !< Latched Status Flag for OST4 Trip
                                                                                    Latch */
/* EPWM_TZOSTFLG[OST5] Bits */
#define EPWM_TZOSTFLG_OST5_OFS                   (4)                             /* !< OST5 Offset */
#define EPWM_TZOSTFLG_OST5_MASK                  ((uint16_t)0x00000010U)         /* !< Latched Status Flag for OST5 Trip
                                                                                    Latch */
/* EPWM_TZOSTFLG[OST6] Bits */
#define EPWM_TZOSTFLG_OST6_OFS                   (5)                             /* !< OST6 Offset */
#define EPWM_TZOSTFLG_OST6_MASK                  ((uint16_t)0x00000020U)         /* !< Latched Status Flag for OST6 Trip
                                                                                    Latch */
/* EPWM_TZOSTFLG[DCAEVT1] Bits */
#define EPWM_TZOSTFLG_DCAEVT1_OFS                (6)                             /* !< DCAEVT1 Offset */
#define EPWM_TZOSTFLG_DCAEVT1_MASK               ((uint16_t)0x00000040U)         /* !< Latched Status Flag for Digital
                                                                                    Compare Output A Event 1 */
/* EPWM_TZOSTFLG[DCBEVT1] Bits */
#define EPWM_TZOSTFLG_DCBEVT1_OFS                (7)                             /* !< DCBEVT1 Offset */
#define EPWM_TZOSTFLG_DCBEVT1_MASK               ((uint16_t)0x00000080U)         /* !< Latched Status Flag for Digital
                                                                                    Compare Output B Event 1 */

/* EPWM_TZCLR Bits */
/* EPWM_TZCLR[INT] Bits */
#define EPWM_TZCLR_INT_OFS                       (0)                             /* !< INT Offset */
#define EPWM_TZCLR_INT_MASK                      ((uint16_t)0x00000001U)         /* !< Global Interrupt Clear Flag */
/* EPWM_TZCLR[CBC] Bits */
#define EPWM_TZCLR_CBC_OFS                       (1)                             /* !< CBC Offset */
#define EPWM_TZCLR_CBC_MASK                      ((uint16_t)0x00000002U)         /* !< Cycle-By-Cycle Flag Clear */
/* EPWM_TZCLR[OST] Bits */
#define EPWM_TZCLR_OST_OFS                       (2)                             /* !< OST Offset */
#define EPWM_TZCLR_OST_MASK                      ((uint16_t)0x00000004U)         /* !< One-Shot Flag Clear */
/* EPWM_TZCLR[DCAEVT1] Bits */
#define EPWM_TZCLR_DCAEVT1_OFS                   (3)                             /* !< DCAEVT1 Offset */
#define EPWM_TZCLR_DCAEVT1_MASK                  ((uint16_t)0x00000008U)         /* !< DCAVET1 Flag Clear */
/* EPWM_TZCLR[DCAEVT2] Bits */
#define EPWM_TZCLR_DCAEVT2_OFS                   (4)                             /* !< DCAEVT2 Offset */
#define EPWM_TZCLR_DCAEVT2_MASK                  ((uint16_t)0x00000010U)         /* !< DCAEVT2 Flag Clear */
/* EPWM_TZCLR[DCBEVT1] Bits */
#define EPWM_TZCLR_DCBEVT1_OFS                   (5)                             /* !< DCBEVT1 Offset */
#define EPWM_TZCLR_DCBEVT1_MASK                  ((uint16_t)0x00000020U)         /* !< DCBEVT1 Flag Clear */
/* EPWM_TZCLR[DCBEVT2] Bits */
#define EPWM_TZCLR_DCBEVT2_OFS                   (6)                             /* !< DCBEVT2 Offset */
#define EPWM_TZCLR_DCBEVT2_MASK                  ((uint16_t)0x00000040U)         /* !< DCBEVT2 Flag Clear */
/* EPWM_TZCLR[CBCPULSE] Bits */
#define EPWM_TZCLR_CBCPULSE_OFS                  (14)                            /* !< CBCPULSE Offset */
#define EPWM_TZCLR_CBCPULSE_MASK                 ((uint16_t)0x0000C000U)         /* !< Clear Pulse for CBC Trip Latch */

/* EPWM_TZCBCCLR Bits */
/* EPWM_TZCBCCLR[CBC1] Bits */
#define EPWM_TZCBCCLR_CBC1_OFS                   (0)                             /* !< CBC1 Offset */
#define EPWM_TZCBCCLR_CBC1_MASK                  ((uint16_t)0x00000001U)         /* !< Clear Flag for Cycle-By-Cycle
                                                                                    (CBC1) Trip Latch */
/* EPWM_TZCBCCLR[CBC2] Bits */
#define EPWM_TZCBCCLR_CBC2_OFS                   (1)                             /* !< CBC2 Offset */
#define EPWM_TZCBCCLR_CBC2_MASK                  ((uint16_t)0x00000002U)         /* !< Clear Flag for Cycle-By-Cycle
                                                                                    (CBC2) Trip Latch */
/* EPWM_TZCBCCLR[CBC3] Bits */
#define EPWM_TZCBCCLR_CBC3_OFS                   (2)                             /* !< CBC3 Offset */
#define EPWM_TZCBCCLR_CBC3_MASK                  ((uint16_t)0x00000004U)         /* !< Clear Flag for Cycle-By-Cycle
                                                                                    (CBC3) Trip Latch */
/* EPWM_TZCBCCLR[CBC4] Bits */
#define EPWM_TZCBCCLR_CBC4_OFS                   (3)                             /* !< CBC4 Offset */
#define EPWM_TZCBCCLR_CBC4_MASK                  ((uint16_t)0x00000008U)         /* !< Clear Flag for Cycle-By-Cycle
                                                                                    (CBC4) Trip Latch */
/* EPWM_TZCBCCLR[CBC5] Bits */
#define EPWM_TZCBCCLR_CBC5_OFS                   (4)                             /* !< CBC5 Offset */
#define EPWM_TZCBCCLR_CBC5_MASK                  ((uint16_t)0x00000010U)         /* !< Clear Flag for Cycle-By-Cycle
                                                                                    (CBC5) Trip Latch */
/* EPWM_TZCBCCLR[CBC6] Bits */
#define EPWM_TZCBCCLR_CBC6_OFS                   (5)                             /* !< CBC6 Offset */
#define EPWM_TZCBCCLR_CBC6_MASK                  ((uint16_t)0x00000020U)         /* !< Clear Flag for Cycle-By-Cycle
                                                                                    (CBC6) Trip Latch */
/* EPWM_TZCBCCLR[DCAEVT2] Bits */
#define EPWM_TZCBCCLR_DCAEVT2_OFS                (6)                             /* !< DCAEVT2 Offset */
#define EPWM_TZCBCCLR_DCAEVT2_MASK               ((uint16_t)0x00000040U)         /* !< Clear Flag forDCAEVT2 selected for
                                                                                    CBC */
/* EPWM_TZCBCCLR[DCBEVT2] Bits */
#define EPWM_TZCBCCLR_DCBEVT2_OFS                (7)                             /* !< DCBEVT2 Offset */
#define EPWM_TZCBCCLR_DCBEVT2_MASK               ((uint16_t)0x00000080U)         /* !< Clear Flag for DCBEVT2 selected for
                                                                                    CBC */

/* EPWM_TZOSTCLR Bits */
/* EPWM_TZOSTCLR[OST1] Bits */
#define EPWM_TZOSTCLR_OST1_OFS                   (0)                             /* !< OST1 Offset */
#define EPWM_TZOSTCLR_OST1_MASK                  ((uint16_t)0x00000001U)         /* !< Clear Flag for Oneshot (OST1) Trip
                                                                                    Latch */
/* EPWM_TZOSTCLR[OST2] Bits */
#define EPWM_TZOSTCLR_OST2_OFS                   (1)                             /* !< OST2 Offset */
#define EPWM_TZOSTCLR_OST2_MASK                  ((uint16_t)0x00000002U)         /* !< Clear Flag for Oneshot (OST2) Trip
                                                                                    Latch */
/* EPWM_TZOSTCLR[OST3] Bits */
#define EPWM_TZOSTCLR_OST3_OFS                   (2)                             /* !< OST3 Offset */
#define EPWM_TZOSTCLR_OST3_MASK                  ((uint16_t)0x00000004U)         /* !< Clear Flag for Oneshot (OST3) Trip
                                                                                    Latch */
/* EPWM_TZOSTCLR[OST4] Bits */
#define EPWM_TZOSTCLR_OST4_OFS                   (3)                             /* !< OST4 Offset */
#define EPWM_TZOSTCLR_OST4_MASK                  ((uint16_t)0x00000008U)         /* !< Clear Flag for Oneshot (OST4) Trip
                                                                                    Latch */
/* EPWM_TZOSTCLR[OST5] Bits */
#define EPWM_TZOSTCLR_OST5_OFS                   (4)                             /* !< OST5 Offset */
#define EPWM_TZOSTCLR_OST5_MASK                  ((uint16_t)0x00000010U)         /* !< Clear Flag for Oneshot (OST5) Trip
                                                                                    Latch */
/* EPWM_TZOSTCLR[OST6] Bits */
#define EPWM_TZOSTCLR_OST6_OFS                   (5)                             /* !< OST6 Offset */
#define EPWM_TZOSTCLR_OST6_MASK                  ((uint16_t)0x00000020U)         /* !< Clear Flag for Oneshot (OST6) Trip
                                                                                    Latch */
/* EPWM_TZOSTCLR[DCAEVT1] Bits */
#define EPWM_TZOSTCLR_DCAEVT1_OFS                (6)                             /* !< DCAEVT1 Offset */
#define EPWM_TZOSTCLR_DCAEVT1_MASK               ((uint16_t)0x00000040U)         /* !< Clear Flag for DCAEVT1 selected for
                                                                                    OST */
/* EPWM_TZOSTCLR[DCBEVT1] Bits */
#define EPWM_TZOSTCLR_DCBEVT1_OFS                (7)                             /* !< DCBEVT1 Offset */
#define EPWM_TZOSTCLR_DCBEVT1_MASK               ((uint16_t)0x00000080U)         /* !< Clear Flag for DCBEVT1 selected for
                                                                                    OST */

/* EPWM_TZFRC Bits */
/* EPWM_TZFRC[CBC] Bits */
#define EPWM_TZFRC_CBC_OFS                       (1)                             /* !< CBC Offset */
#define EPWM_TZFRC_CBC_MASK                      ((uint16_t)0x00000002U)         /* !< Force Trip Zones Cycle By Cycle
                                                                                    Event */
/* EPWM_TZFRC[OST] Bits */
#define EPWM_TZFRC_OST_OFS                       (2)                             /* !< OST Offset */
#define EPWM_TZFRC_OST_MASK                      ((uint16_t)0x00000004U)         /* !< Force Trip Zones One Shot Event */
/* EPWM_TZFRC[DCAEVT1] Bits */
#define EPWM_TZFRC_DCAEVT1_OFS                   (3)                             /* !< DCAEVT1 Offset */
#define EPWM_TZFRC_DCAEVT1_MASK                  ((uint16_t)0x00000008U)         /* !< Force Digital Compare A Event 1 */
/* EPWM_TZFRC[DCAEVT2] Bits */
#define EPWM_TZFRC_DCAEVT2_OFS                   (4)                             /* !< DCAEVT2 Offset */
#define EPWM_TZFRC_DCAEVT2_MASK                  ((uint16_t)0x00000010U)         /* !< Force Digital Compare A Event 2 */
/* EPWM_TZFRC[DCBEVT1] Bits */
#define EPWM_TZFRC_DCBEVT1_OFS                   (5)                             /* !< DCBEVT1 Offset */
#define EPWM_TZFRC_DCBEVT1_MASK                  ((uint16_t)0x00000020U)         /* !< Force Digital Compare B Event 1 */
/* EPWM_TZFRC[DCBEVT2] Bits */
#define EPWM_TZFRC_DCBEVT2_OFS                   (6)                             /* !< DCBEVT2 Offset */
#define EPWM_TZFRC_DCBEVT2_MASK                  ((uint16_t)0x00000040U)         /* !< Force Digital Compare B Event 2 */

/* EPWM_ETSEL Bits */
/* EPWM_ETSEL[INTSEL] Bits */
#define EPWM_ETSEL_INTSEL_OFS                    (0)                             /* !< INTSEL Offset */
#define EPWM_ETSEL_INTSEL_MASK                   ((uint16_t)0x00000007U)         /* !< EPWMxINTn Select */
/* EPWM_ETSEL[INTEN] Bits */
#define EPWM_ETSEL_INTEN_OFS                     (3)                             /* !< INTEN Offset */
#define EPWM_ETSEL_INTEN_MASK                    ((uint16_t)0x00000008U)         /* !< EPWMxINTn Enable */
/* EPWM_ETSEL[SOCASELCMP] Bits */
#define EPWM_ETSEL_SOCASELCMP_OFS                (4)                             /* !< SOCASELCMP Offset */
#define EPWM_ETSEL_SOCASELCMP_MASK               ((uint16_t)0x00000010U)         /* !< EPWMxSOCA Compare Select */
/* EPWM_ETSEL[SOCBSELCMP] Bits */
#define EPWM_ETSEL_SOCBSELCMP_OFS                (5)                             /* !< SOCBSELCMP Offset */
#define EPWM_ETSEL_SOCBSELCMP_MASK               ((uint16_t)0x00000020U)         /* !< EPWMxSOCB Compare Select */
/* EPWM_ETSEL[INTSELCMP] Bits */
#define EPWM_ETSEL_INTSELCMP_OFS                 (6)                             /* !< INTSELCMP Offset */
#define EPWM_ETSEL_INTSELCMP_MASK                ((uint16_t)0x00000040U)         /* !< EPWMxINT Compare Select */
/* EPWM_ETSEL[SOCASEL] Bits */
#define EPWM_ETSEL_SOCASEL_OFS                   (8)                             /* !< SOCASEL Offset */
#define EPWM_ETSEL_SOCASEL_MASK                  ((uint16_t)0x00000700U)         /* !< Start of Conversion A Select */
/* EPWM_ETSEL[SOCAEN] Bits */
#define EPWM_ETSEL_SOCAEN_OFS                    (11)                            /* !< SOCAEN Offset */
#define EPWM_ETSEL_SOCAEN_MASK                   ((uint16_t)0x00000800U)         /* !< Start of Conversion A Enable */
/* EPWM_ETSEL[SOCBSEL] Bits */
#define EPWM_ETSEL_SOCBSEL_OFS                   (12)                            /* !< SOCBSEL Offset */
#define EPWM_ETSEL_SOCBSEL_MASK                  ((uint16_t)0x00007000U)         /* !< Start of Conversion B Select */
/* EPWM_ETSEL[SOCBEN] Bits */
#define EPWM_ETSEL_SOCBEN_OFS                    (15)                            /* !< SOCBEN Offset */
#define EPWM_ETSEL_SOCBEN_MASK                   ((uint16_t)0x00008000U)         /* !< Start of Conversion B Enable */

/* EPWM_ETPS Bits */
/* EPWM_ETPS[INTPRD] Bits */
#define EPWM_ETPS_INTPRD_OFS                     (0)                             /* !< INTPRD Offset */
#define EPWM_ETPS_INTPRD_MASK                    ((uint16_t)0x00000003U)         /* !< EPWMxINTn Period Select */
/* EPWM_ETPS[INTCNT] Bits */
#define EPWM_ETPS_INTCNT_OFS                     (2)                             /* !< INTCNT Offset */
#define EPWM_ETPS_INTCNT_MASK                    ((uint16_t)0x0000000CU)         /* !< EPWMxINTn Counter Register */
/* EPWM_ETPS[INTPSSEL] Bits */
#define EPWM_ETPS_INTPSSEL_OFS                   (4)                             /* !< INTPSSEL Offset */
#define EPWM_ETPS_INTPSSEL_MASK                  ((uint16_t)0x00000010U)         /* !< EPWMxINTn Pre-Scale Selection Bits */
/* EPWM_ETPS[SOCPSSEL] Bits */
#define EPWM_ETPS_SOCPSSEL_OFS                   (5)                             /* !< SOCPSSEL Offset */
#define EPWM_ETPS_SOCPSSEL_MASK                  ((uint16_t)0x00000020U)         /* !< EPWMxSOC A/B  Pre-Scale Selection
                                                                                    Bits */
/* EPWM_ETPS[SOCAPRD] Bits */
#define EPWM_ETPS_SOCAPRD_OFS                    (8)                             /* !< SOCAPRD Offset */
#define EPWM_ETPS_SOCAPRD_MASK                   ((uint16_t)0x00000300U)         /* !< EPWMxSOCA Period Select */
/* EPWM_ETPS[SOCACNT] Bits */
#define EPWM_ETPS_SOCACNT_OFS                    (10)                            /* !< SOCACNT Offset */
#define EPWM_ETPS_SOCACNT_MASK                   ((uint16_t)0x00000C00U)         /* !< EPWMxSOCA Counter Register */
/* EPWM_ETPS[SOCBPRD] Bits */
#define EPWM_ETPS_SOCBPRD_OFS                    (12)                            /* !< SOCBPRD Offset */
#define EPWM_ETPS_SOCBPRD_MASK                   ((uint16_t)0x00003000U)         /* !< EPWMxSOCB Period Select */
/* EPWM_ETPS[SOCBCNT] Bits */
#define EPWM_ETPS_SOCBCNT_OFS                    (14)                            /* !< SOCBCNT Offset */
#define EPWM_ETPS_SOCBCNT_MASK                   ((uint16_t)0x0000C000U)         /* !< EPWMxSOCB Counter */

/* EPWM_ETFLG Bits */
/* EPWM_ETFLG[INT] Bits */
#define EPWM_ETFLG_INT_OFS                       (0)                             /* !< INT Offset */
#define EPWM_ETFLG_INT_MASK                      ((uint16_t)0x00000001U)         /* !< EPWMxINTn Flag */
/* EPWM_ETFLG[SOCA] Bits */
#define EPWM_ETFLG_SOCA_OFS                      (2)                             /* !< SOCA Offset */
#define EPWM_ETFLG_SOCA_MASK                     ((uint16_t)0x00000004U)         /* !< EPWMxSOCA Flag */
/* EPWM_ETFLG[SOCB] Bits */
#define EPWM_ETFLG_SOCB_OFS                      (3)                             /* !< SOCB Offset */
#define EPWM_ETFLG_SOCB_MASK                     ((uint16_t)0x00000008U)         /* !< EPWMxSOCB Flag */

/* EPWM_ETCLR Bits */
/* EPWM_ETCLR[INT] Bits */
#define EPWM_ETCLR_INT_OFS                       (0)                             /* !< INT Offset */
#define EPWM_ETCLR_INT_MASK                      ((uint16_t)0x00000001U)         /* !< EPWMxINTn Clear */
/* EPWM_ETCLR[SOCA] Bits */
#define EPWM_ETCLR_SOCA_OFS                      (2)                             /* !< SOCA Offset */
#define EPWM_ETCLR_SOCA_MASK                     ((uint16_t)0x00000004U)         /* !< EPWMxSOCA Clear */
/* EPWM_ETCLR[SOCB] Bits */
#define EPWM_ETCLR_SOCB_OFS                      (3)                             /* !< SOCB Offset */
#define EPWM_ETCLR_SOCB_MASK                     ((uint16_t)0x00000008U)         /* !< EPWMxSOCB Clear */

/* EPWM_ETFRC Bits */
/* EPWM_ETFRC[INT] Bits */
#define EPWM_ETFRC_INT_OFS                       (0)                             /* !< INT Offset */
#define EPWM_ETFRC_INT_MASK                      ((uint16_t)0x00000001U)         /* !< EPWMxINTn Force */
/* EPWM_ETFRC[SOCA] Bits */
#define EPWM_ETFRC_SOCA_OFS                      (2)                             /* !< SOCA Offset */
#define EPWM_ETFRC_SOCA_MASK                     ((uint16_t)0x00000004U)         /* !< EPWMxSOCA Force */
/* EPWM_ETFRC[SOCB] Bits */
#define EPWM_ETFRC_SOCB_OFS                      (3)                             /* !< SOCB Offset */
#define EPWM_ETFRC_SOCB_MASK                     ((uint16_t)0x00000008U)         /* !< EPWMxSOCB Force */

/* EPWM_ETINTPS Bits */
/* EPWM_ETINTPS[INTPRD2] Bits */
#define EPWM_ETINTPS_INTPRD2_OFS                 (0)                             /* !< INTPRD2 Offset */
#define EPWM_ETINTPS_INTPRD2_MASK                ((uint16_t)0x0000000FU)         /* !< EPWMxINTn Period Select */
/* EPWM_ETINTPS[INTCNT2] Bits */
#define EPWM_ETINTPS_INTCNT2_OFS                 (4)                             /* !< INTCNT2 Offset */
#define EPWM_ETINTPS_INTCNT2_MASK                ((uint16_t)0x000000F0U)         /* !< EPWMxINTn Counter Register */

/* EPWM_ETSOCPS Bits */
/* EPWM_ETSOCPS[SOCAPRD2] Bits */
#define EPWM_ETSOCPS_SOCAPRD2_OFS                (0)                             /* !< SOCAPRD2 Offset */
#define EPWM_ETSOCPS_SOCAPRD2_MASK               ((uint16_t)0x0000000FU)         /* !< EPWMxSOCA Period Select */
/* EPWM_ETSOCPS[SOCACNT2] Bits */
#define EPWM_ETSOCPS_SOCACNT2_OFS                (4)                             /* !< SOCACNT2 Offset */
#define EPWM_ETSOCPS_SOCACNT2_MASK               ((uint16_t)0x000000F0U)         /* !< EPWMxSOCA Counter Register */
/* EPWM_ETSOCPS[SOCBPRD2] Bits */
#define EPWM_ETSOCPS_SOCBPRD2_OFS                (8)                             /* !< SOCBPRD2 Offset */
#define EPWM_ETSOCPS_SOCBPRD2_MASK               ((uint16_t)0x00000F00U)         /* !< EPWMxSOCB Period Select */
/* EPWM_ETSOCPS[SOCBCNT2] Bits */
#define EPWM_ETSOCPS_SOCBCNT2_OFS                (12)                            /* !< SOCBCNT2 Offset */
#define EPWM_ETSOCPS_SOCBCNT2_MASK               ((uint16_t)0x0000F000U)         /* !< EPWMxSOCB Counter Register */

/* EPWM_ETCNTINITCTL Bits */
/* EPWM_ETCNTINITCTL[INTINITFRC] Bits */
#define EPWM_ETCNTINITCTL_INTINITFRC_OFS         (10)                            /* !< INTINITFRC Offset */
#define EPWM_ETCNTINITCTL_INTINITFRC_MASK        ((uint16_t)0x00000400U)         /* !< EPWMxINT Counter Initialization
                                                                                    Force */
/* EPWM_ETCNTINITCTL[SOCAINITFRC] Bits */
#define EPWM_ETCNTINITCTL_SOCAINITFRC_OFS        (11)                            /* !< SOCAINITFRC Offset */
#define EPWM_ETCNTINITCTL_SOCAINITFRC_MASK       ((uint16_t)0x00000800U)         /* !< EPWMxSOCA Counter Initialization
                                                                                    Force */
/* EPWM_ETCNTINITCTL[SOCBINITFRC] Bits */
#define EPWM_ETCNTINITCTL_SOCBINITFRC_OFS        (12)                            /* !< SOCBINITFRC Offset */
#define EPWM_ETCNTINITCTL_SOCBINITFRC_MASK       ((uint16_t)0x00001000U)         /* !< EPWMxSOCB Counter Initialization
                                                                                    Force */
/* EPWM_ETCNTINITCTL[INTINITEN] Bits */
#define EPWM_ETCNTINITCTL_INTINITEN_OFS          (13)                            /* !< INTINITEN Offset */
#define EPWM_ETCNTINITCTL_INTINITEN_MASK         ((uint16_t)0x00002000U)         /* !< EPWMxINT Counter Initialization
                                                                                    Enable */
/* EPWM_ETCNTINITCTL[SOCAINITEN] Bits */
#define EPWM_ETCNTINITCTL_SOCAINITEN_OFS         (14)                            /* !< SOCAINITEN Offset */
#define EPWM_ETCNTINITCTL_SOCAINITEN_MASK        ((uint16_t)0x00004000U)         /* !< EPWMxSOCA Counter Initialization
                                                                                    Enable */
/* EPWM_ETCNTINITCTL[SOCBINITEN] Bits */
#define EPWM_ETCNTINITCTL_SOCBINITEN_OFS         (15)                            /* !< SOCBINITEN Offset */
#define EPWM_ETCNTINITCTL_SOCBINITEN_MASK        ((uint16_t)0x00008000U)         /* !< EPWMxSOCB Counter Initialization
                                                                                    Enable */

/* EPWM_ETCNTINIT Bits */
/* EPWM_ETCNTINIT[INTINIT] Bits */
#define EPWM_ETCNTINIT_INTINIT_OFS               (0)                             /* !< INTINIT Offset */
#define EPWM_ETCNTINIT_INTINIT_MASK              ((uint16_t)0x0000000FU)         /* !< EPWMxINT Counter Initialization
                                                                                    Bits */
/* EPWM_ETCNTINIT[SOCAINIT] Bits */
#define EPWM_ETCNTINIT_SOCAINIT_OFS              (4)                             /* !< SOCAINIT Offset */
#define EPWM_ETCNTINIT_SOCAINIT_MASK             ((uint16_t)0x000000F0U)         /* !< EPWMxSOCA Counter Initialization
                                                                                    Bits */
/* EPWM_ETCNTINIT[SOCBINIT] Bits */
#define EPWM_ETCNTINIT_SOCBINIT_OFS              (8)                             /* !< SOCBINIT Offset */
#define EPWM_ETCNTINIT_SOCBINIT_MASK             ((uint16_t)0x00000F00U)         /* !< EPWMxSOCB Counter Initialization
                                                                                    Bits */

/* EPWM_DCTRIPSEL Bits */
/* EPWM_DCTRIPSEL[DCAHCOMPSEL] Bits */
#define EPWM_DCTRIPSEL_DCAHCOMPSEL_OFS           (0)                             /* !< DCAHCOMPSEL Offset */
#define EPWM_DCTRIPSEL_DCAHCOMPSEL_MASK          ((uint16_t)0x0000000FU)         /* !< Digital Compare A High COMP Input
                                                                                    Select */
/* EPWM_DCTRIPSEL[DCALCOMPSEL] Bits */
#define EPWM_DCTRIPSEL_DCALCOMPSEL_OFS           (4)                             /* !< DCALCOMPSEL Offset */
#define EPWM_DCTRIPSEL_DCALCOMPSEL_MASK          ((uint16_t)0x000000F0U)         /* !< Digital Compare A Low COMP Input
                                                                                    Select */
/* EPWM_DCTRIPSEL[DCBHCOMPSEL] Bits */
#define EPWM_DCTRIPSEL_DCBHCOMPSEL_OFS           (8)                             /* !< DCBHCOMPSEL Offset */
#define EPWM_DCTRIPSEL_DCBHCOMPSEL_MASK          ((uint16_t)0x00000F00U)         /* !< Digital Compare B High COMP Input
                                                                                    Select */
/* EPWM_DCTRIPSEL[DCBLCOMPSEL] Bits */
#define EPWM_DCTRIPSEL_DCBLCOMPSEL_OFS           (12)                            /* !< DCBLCOMPSEL Offset */
#define EPWM_DCTRIPSEL_DCBLCOMPSEL_MASK          ((uint16_t)0x0000F000U)         /* !< Digital Compare B Low COMP Input
                                                                                    Select */

/* EPWM_DCACTL Bits */
/* EPWM_DCACTL[EVT1SRCSEL] Bits */
#define EPWM_DCACTL_EVT1SRCSEL_OFS               (0)                             /* !< EVT1SRCSEL Offset */
#define EPWM_DCACTL_EVT1SRCSEL_MASK              ((uint16_t)0x00000001U)         /* !< DCAEVT1 Source Signal */
/* EPWM_DCACTL[EVT1FRCSYNCSEL] Bits */
#define EPWM_DCACTL_EVT1FRCSYNCSEL_OFS           (1)                             /* !< EVT1FRCSYNCSEL Offset */
#define EPWM_DCACTL_EVT1FRCSYNCSEL_MASK          ((uint16_t)0x00000002U)         /* !< DCAEVT1 Force Sync Signal */
/* EPWM_DCACTL[EVT1SOCE] Bits */
#define EPWM_DCACTL_EVT1SOCE_OFS                 (2)                             /* !< EVT1SOCE Offset */
#define EPWM_DCACTL_EVT1SOCE_MASK                ((uint16_t)0x00000004U)         /* !< DCAEVT1 SOC Enable */
/* EPWM_DCACTL[EVT1SYNCE] Bits */
#define EPWM_DCACTL_EVT1SYNCE_OFS                (3)                             /* !< EVT1SYNCE Offset */
#define EPWM_DCACTL_EVT1SYNCE_MASK               ((uint16_t)0x00000008U)         /* !< DCAEVT1 SYNC Enable */
/* EPWM_DCACTL[EVT1LATSEL] Bits */
#define EPWM_DCACTL_EVT1LATSEL_OFS               (4)                             /* !< EVT1LATSEL Offset */
#define EPWM_DCACTL_EVT1LATSEL_MASK              ((uint16_t)0x00000010U)         /* !< DCAEVT1 Latched signal select */
/* EPWM_DCACTL[EVT1LATCLRSEL] Bits */
#define EPWM_DCACTL_EVT1LATCLRSEL_OFS            (5)                             /* !< EVT1LATCLRSEL Offset */
#define EPWM_DCACTL_EVT1LATCLRSEL_MASK           ((uint16_t)0x00000060U)         /* !< DCAEVT1 Latched clear source select */
/* EPWM_DCACTL[EVT1LAT] Bits */
#define EPWM_DCACTL_EVT1LAT_OFS                  (7)                             /* !< EVT1LAT Offset */
#define EPWM_DCACTL_EVT1LAT_MASK                 ((uint16_t)0x00000080U)         /* !< Indicates the status of DCAEVT1LAT
                                                                                    signal. */
/* EPWM_DCACTL[EVT2SRCSEL] Bits */
#define EPWM_DCACTL_EVT2SRCSEL_OFS               (8)                             /* !< EVT2SRCSEL Offset */
#define EPWM_DCACTL_EVT2SRCSEL_MASK              ((uint16_t)0x00000100U)         /* !< DCAEVT2 Source Signal */
/* EPWM_DCACTL[EVT2FRCSYNCSEL] Bits */
#define EPWM_DCACTL_EVT2FRCSYNCSEL_OFS           (9)                             /* !< EVT2FRCSYNCSEL Offset */
#define EPWM_DCACTL_EVT2FRCSYNCSEL_MASK          ((uint16_t)0x00000200U)         /* !< DCAEVT2 Force Sync Signal */
/* EPWM_DCACTL[EVT2LATSEL] Bits */
#define EPWM_DCACTL_EVT2LATSEL_OFS               (12)                            /* !< EVT2LATSEL Offset */
#define EPWM_DCACTL_EVT2LATSEL_MASK              ((uint16_t)0x00001000U)         /* !< DCAEVT2 Latched signal select */
/* EPWM_DCACTL[EVT2LATCLRSEL] Bits */
#define EPWM_DCACTL_EVT2LATCLRSEL_OFS            (13)                            /* !< EVT2LATCLRSEL Offset */
#define EPWM_DCACTL_EVT2LATCLRSEL_MASK           ((uint16_t)0x00006000U)         /* !< DCAEVT2 Latched clear source select */
/* EPWM_DCACTL[EVT2LAT] Bits */
#define EPWM_DCACTL_EVT2LAT_OFS                  (15)                            /* !< EVT2LAT Offset */
#define EPWM_DCACTL_EVT2LAT_MASK                 ((uint16_t)0x00008000U)         /* !< Indicates the status of DCAEVT2LAT
                                                                                    signal. */

/* EPWM_DCBCTL Bits */
/* EPWM_DCBCTL[EVT1SRCSEL] Bits */
#define EPWM_DCBCTL_EVT1SRCSEL_OFS               (0)                             /* !< EVT1SRCSEL Offset */
#define EPWM_DCBCTL_EVT1SRCSEL_MASK              ((uint16_t)0x00000001U)         /* !< DCBEVT1 Source Signal */
/* EPWM_DCBCTL[EVT1FRCSYNCSEL] Bits */
#define EPWM_DCBCTL_EVT1FRCSYNCSEL_OFS           (1)                             /* !< EVT1FRCSYNCSEL Offset */
#define EPWM_DCBCTL_EVT1FRCSYNCSEL_MASK          ((uint16_t)0x00000002U)         /* !< DCBEVT1 Force Sync Signal */
/* EPWM_DCBCTL[EVT1SOCE] Bits */
#define EPWM_DCBCTL_EVT1SOCE_OFS                 (2)                             /* !< EVT1SOCE Offset */
#define EPWM_DCBCTL_EVT1SOCE_MASK                ((uint16_t)0x00000004U)         /* !< DCBEVT1 SOC Enable */
/* EPWM_DCBCTL[EVT1SYNCE] Bits */
#define EPWM_DCBCTL_EVT1SYNCE_OFS                (3)                             /* !< EVT1SYNCE Offset */
#define EPWM_DCBCTL_EVT1SYNCE_MASK               ((uint16_t)0x00000008U)         /* !< DCBEVT1 SYNC Enable */
/* EPWM_DCBCTL[EVT1LATSEL] Bits */
#define EPWM_DCBCTL_EVT1LATSEL_OFS               (4)                             /* !< EVT1LATSEL Offset */
#define EPWM_DCBCTL_EVT1LATSEL_MASK              ((uint16_t)0x00000010U)         /* !< DCBEVT1 Latched signal select */
/* EPWM_DCBCTL[EVT1LATCLRSEL] Bits */
#define EPWM_DCBCTL_EVT1LATCLRSEL_OFS            (5)                             /* !< EVT1LATCLRSEL Offset */
#define EPWM_DCBCTL_EVT1LATCLRSEL_MASK           ((uint16_t)0x00000060U)         /* !< DCBEVT1 Latched clear source select */
/* EPWM_DCBCTL[EVT1LAT] Bits */
#define EPWM_DCBCTL_EVT1LAT_OFS                  (7)                             /* !< EVT1LAT Offset */
#define EPWM_DCBCTL_EVT1LAT_MASK                 ((uint16_t)0x00000080U)         /* !< Indicates the status of DCBEVT1LAT
                                                                                    signal. */
/* EPWM_DCBCTL[EVT2SRCSEL] Bits */
#define EPWM_DCBCTL_EVT2SRCSEL_OFS               (8)                             /* !< EVT2SRCSEL Offset */
#define EPWM_DCBCTL_EVT2SRCSEL_MASK              ((uint16_t)0x00000100U)         /* !< DCBEVT2 Source Signal */
/* EPWM_DCBCTL[EVT2FRCSYNCSEL] Bits */
#define EPWM_DCBCTL_EVT2FRCSYNCSEL_OFS           (9)                             /* !< EVT2FRCSYNCSEL Offset */
#define EPWM_DCBCTL_EVT2FRCSYNCSEL_MASK          ((uint16_t)0x00000200U)         /* !< DCBEVT2 Force Sync Signal */
/* EPWM_DCBCTL[EVT2LATSEL] Bits */
#define EPWM_DCBCTL_EVT2LATSEL_OFS               (12)                            /* !< EVT2LATSEL Offset */
#define EPWM_DCBCTL_EVT2LATSEL_MASK              ((uint16_t)0x00001000U)         /* !< DCBEVT2 Latched signal select */
/* EPWM_DCBCTL[EVT2LATCLRSEL] Bits */
#define EPWM_DCBCTL_EVT2LATCLRSEL_OFS            (13)                            /* !< EVT2LATCLRSEL Offset */
#define EPWM_DCBCTL_EVT2LATCLRSEL_MASK           ((uint16_t)0x00006000U)         /* !< DCBEVT2 Latched clear source select */
/* EPWM_DCBCTL[EVT2LAT] Bits */
#define EPWM_DCBCTL_EVT2LAT_OFS                  (15)                            /* !< EVT2LAT Offset */
#define EPWM_DCBCTL_EVT2LAT_MASK                 ((uint16_t)0x00008000U)         /* !< Indicates the status of DCBEVT2LAT
                                                                                    signal. */

/* EPWM_DCFCTL Bits */
/* EPWM_DCFCTL[SRCSEL] Bits */
#define EPWM_DCFCTL_SRCSEL_OFS                   (0)                             /* !< SRCSEL Offset */
#define EPWM_DCFCTL_SRCSEL_MASK                  ((uint16_t)0x00000003U)         /* !< Filter Block Signal Source Select */
/* EPWM_DCFCTL[BLANKE] Bits */
#define EPWM_DCFCTL_BLANKE_OFS                   (2)                             /* !< BLANKE Offset */
#define EPWM_DCFCTL_BLANKE_MASK                  ((uint16_t)0x00000004U)         /* !< Blanking Enable/Disable */
/* EPWM_DCFCTL[BLANKINV] Bits */
#define EPWM_DCFCTL_BLANKINV_OFS                 (3)                             /* !< BLANKINV Offset */
#define EPWM_DCFCTL_BLANKINV_MASK                ((uint16_t)0x00000008U)         /* !< Blanking Window Inversion */
/* EPWM_DCFCTL[PULSESEL] Bits */
#define EPWM_DCFCTL_PULSESEL_OFS                 (4)                             /* !< PULSESEL Offset */
#define EPWM_DCFCTL_PULSESEL_MASK                ((uint16_t)0x00000030U)         /* !< Pulse Select for Blanking & Capture
                                                                                    Alignment */
/* EPWM_DCFCTL[EDGEFILTSEL] Bits */
#define EPWM_DCFCTL_EDGEFILTSEL_OFS              (6)                             /* !< EDGEFILTSEL Offset */
#define EPWM_DCFCTL_EDGEFILTSEL_MASK             ((uint16_t)0x00000040U)         /* !< Edge Filter Select */
/* EPWM_DCFCTL[EDGEMODE] Bits */
#define EPWM_DCFCTL_EDGEMODE_OFS                 (8)                             /* !< EDGEMODE Offset */
#define EPWM_DCFCTL_EDGEMODE_MASK                ((uint16_t)0x00000300U)         /* !< Edge Mode */
/* EPWM_DCFCTL[EDGECOUNT] Bits */
#define EPWM_DCFCTL_EDGECOUNT_OFS                (10)                            /* !< EDGECOUNT Offset */
#define EPWM_DCFCTL_EDGECOUNT_MASK               ((uint16_t)0x00001C00U)         /* !< Edge Count */
/* EPWM_DCFCTL[EDGESTATUS] Bits */
#define EPWM_DCFCTL_EDGESTATUS_OFS               (13)                            /* !< EDGESTATUS Offset */
#define EPWM_DCFCTL_EDGESTATUS_MASK              ((uint16_t)0x0000E000U)         /* !< Edge Status */

/* EPWM_DCCAPCTL Bits */
/* EPWM_DCCAPCTL[CAPE] Bits */
#define EPWM_DCCAPCTL_CAPE_OFS                   (0)                             /* !< CAPE Offset */
#define EPWM_DCCAPCTL_CAPE_MASK                  ((uint16_t)0x00000001U)         /* !< Counter Capture Enable */
/* EPWM_DCCAPCTL[SHDWMODE] Bits */
#define EPWM_DCCAPCTL_SHDWMODE_OFS               (1)                             /* !< SHDWMODE Offset */
#define EPWM_DCCAPCTL_SHDWMODE_MASK              ((uint16_t)0x00000002U)         /* !< Counter Capture Mode */
/* EPWM_DCCAPCTL[CAPSTS] Bits */
#define EPWM_DCCAPCTL_CAPSTS_OFS                 (13)                            /* !< CAPSTS Offset */
#define EPWM_DCCAPCTL_CAPSTS_MASK                ((uint16_t)0x00002000U)         /* !< Latched Status Flag for Capture
                                                                                    Event */
/* EPWM_DCCAPCTL[CAPCLR] Bits */
#define EPWM_DCCAPCTL_CAPCLR_OFS                 (14)                            /* !< CAPCLR Offset */
#define EPWM_DCCAPCTL_CAPCLR_MASK                ((uint16_t)0x00004000U)         /* !< DC Capture Latched Status Clear
                                                                                    Flag */
/* EPWM_DCCAPCTL[CAPMODE] Bits */
#define EPWM_DCCAPCTL_CAPMODE_OFS                (15)                            /* !< CAPMODE Offset */
#define EPWM_DCCAPCTL_CAPMODE_MASK               ((uint16_t)0x00008000U)         /* !< Counter Capture Mode */

/* EPWM_DCFOFFSET Bits */
/* EPWM_DCFOFFSET[DCFOFFSET] Bits */
#define EPWM_DCFOFFSET_DCFOFFSET_OFS             (0)                             /* !< DCFOFFSET Offset */
#define EPWM_DCFOFFSET_DCFOFFSET_MASK            ((uint16_t)0x0000FFFFU)         /* !< Blanking Offset */

/* EPWM_DCFOFFSETCNT Bits */
/* EPWM_DCFOFFSETCNT[DCFOFFSETCNT] Bits */
#define EPWM_DCFOFFSETCNT_DCFOFFSETCNT_OFS       (0)                             /* !< DCFOFFSETCNT Offset */
#define EPWM_DCFOFFSETCNT_DCFOFFSETCNT_MASK      ((uint16_t)0x0000FFFFU)         /* !< Blanking Offset Counter */

/* EPWM_DCFWINDOW Bits */
/* EPWM_DCFWINDOW[DCFWINDOW] Bits */
#define EPWM_DCFWINDOW_DCFWINDOW_OFS             (0)                             /* !< DCFWINDOW Offset */
#define EPWM_DCFWINDOW_DCFWINDOW_MASK            ((uint16_t)0x0000FFFFU)         /* !< Digital Compare Filter Window
                                                                                    Register */

/* EPWM_DCFWINDOWCNT Bits */
/* EPWM_DCFWINDOWCNT[DCFWINDOWCNT] Bits */
#define EPWM_DCFWINDOWCNT_DCFWINDOWCNT_OFS       (0)                             /* !< DCFWINDOWCNT Offset */
#define EPWM_DCFWINDOWCNT_DCFWINDOWCNT_MASK      ((uint16_t)0x0000FFFFU)         /* !< Digital Compare Filter Window
                                                                                    Counter Register */

/* EPWM_BLANKPULSEMIXSEL Bits */
/* EPWM_BLANKPULSEMIXSEL[ZRO] Bits */
#define EPWM_BLANKPULSEMIXSEL_ZRO_OFS            (0)                             /* !< ZRO Offset */
#define EPWM_BLANKPULSEMIXSEL_ZRO_MASK           ((uint16_t)0x00000001U)         /* !< Zero match enable to BLANKPULSEMIX */
/* EPWM_BLANKPULSEMIXSEL[PRD] Bits */
#define EPWM_BLANKPULSEMIXSEL_PRD_OFS            (1)                             /* !< PRD Offset */
#define EPWM_BLANKPULSEMIXSEL_PRD_MASK           ((uint16_t)0x00000002U)         /* !< Period match enable to
                                                                                    BLANKPULSEMIX */
/* EPWM_BLANKPULSEMIXSEL[CAU] Bits */
#define EPWM_BLANKPULSEMIXSEL_CAU_OFS            (2)                             /* !< CAU Offset */
#define EPWM_BLANKPULSEMIXSEL_CAU_MASK           ((uint16_t)0x00000004U)         /* !< CMPA up-count match enable to
                                                                                    BLANKPULSEMIX */
/* EPWM_BLANKPULSEMIXSEL[CAD] Bits */
#define EPWM_BLANKPULSEMIXSEL_CAD_OFS            (3)                             /* !< CAD Offset */
#define EPWM_BLANKPULSEMIXSEL_CAD_MASK           ((uint16_t)0x00000008U)         /* !< CMPA down-count match enable to
                                                                                    BLANKPULSEMIX */
/* EPWM_BLANKPULSEMIXSEL[CBU] Bits */
#define EPWM_BLANKPULSEMIXSEL_CBU_OFS            (4)                             /* !< CBU Offset */
#define EPWM_BLANKPULSEMIXSEL_CBU_MASK           ((uint16_t)0x00000010U)         /* !< CMPB up-count match enable to
                                                                                    BLANKPULSEMIX */
/* EPWM_BLANKPULSEMIXSEL[CBD] Bits */
#define EPWM_BLANKPULSEMIXSEL_CBD_OFS            (5)                             /* !< CBD Offset */
#define EPWM_BLANKPULSEMIXSEL_CBD_MASK           ((uint16_t)0x00000020U)         /* !< CMPB down-count match enable to
                                                                                    BLANKPULSEMIX */
/* EPWM_BLANKPULSEMIXSEL[CCU] Bits */
#define EPWM_BLANKPULSEMIXSEL_CCU_OFS            (6)                             /* !< CCU Offset */
#define EPWM_BLANKPULSEMIXSEL_CCU_MASK           ((uint16_t)0x00000040U)         /* !< CMPC up-count match enable to
                                                                                    BLANKPULSEMIX */
/* EPWM_BLANKPULSEMIXSEL[CCD] Bits */
#define EPWM_BLANKPULSEMIXSEL_CCD_OFS            (7)                             /* !< CCD Offset */
#define EPWM_BLANKPULSEMIXSEL_CCD_MASK           ((uint16_t)0x00000080U)         /* !< CMPC down-count match enable to
                                                                                    BLANKPULSEMIX */
/* EPWM_BLANKPULSEMIXSEL[CDU] Bits */
#define EPWM_BLANKPULSEMIXSEL_CDU_OFS            (8)                             /* !< CDU Offset */
#define EPWM_BLANKPULSEMIXSEL_CDU_MASK           ((uint16_t)0x00000100U)         /* !< CMPD up-count match enable to
                                                                                    BLANKPULSEMIX */
/* EPWM_BLANKPULSEMIXSEL[CDD] Bits */
#define EPWM_BLANKPULSEMIXSEL_CDD_OFS            (9)                             /* !< CDD Offset */
#define EPWM_BLANKPULSEMIXSEL_CDD_MASK           ((uint16_t)0x00000200U)         /* !< CMPD down-count match enable to
                                                                                    BLANKPULSEMIX */

/* EPWM_DCCAP Bits */
/* EPWM_DCCAP[DCCAP] Bits */
#define EPWM_DCCAP_DCCAP_OFS                     (0)                             /* !< DCCAP Offset */
#define EPWM_DCCAP_DCCAP_MASK                    ((uint16_t)0x0000FFFFU)         /* !< Time Base Counter Capture Register */

/* EPWM_DCAHTRIPSEL Bits */
/* EPWM_DCAHTRIPSEL[TRIPINPUT1] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT1_OFS          (0)                             /* !< TRIPINPUT1 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT1_MASK         ((uint16_t)0x00000001U)         /* !< Trip Input 1 Select to DCAH Mux */
/* EPWM_DCAHTRIPSEL[TRIPINPUT2] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT2_OFS          (1)                             /* !< TRIPINPUT2 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT2_MASK         ((uint16_t)0x00000002U)         /* !< Trip Input 2 Select to DCAH Mux */
/* EPWM_DCAHTRIPSEL[TRIPINPUT3] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT3_OFS          (2)                             /* !< TRIPINPUT3 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT3_MASK         ((uint16_t)0x00000004U)         /* !< Trip Input 3 Select to DCAH Mux */
/* EPWM_DCAHTRIPSEL[TRIPINPUT4] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT4_OFS          (3)                             /* !< TRIPINPUT4 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT4_MASK         ((uint16_t)0x00000008U)         /* !< Trip Input 4 Select to DCAH Mux */
/* EPWM_DCAHTRIPSEL[TRIPINPUT5] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT5_OFS          (4)                             /* !< TRIPINPUT5 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT5_MASK         ((uint16_t)0x00000010U)         /* !< Trip Input 5 Select to DCAH Mux */
/* EPWM_DCAHTRIPSEL[TRIPINPUT6] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT6_OFS          (5)                             /* !< TRIPINPUT6 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT6_MASK         ((uint16_t)0x00000020U)         /* !< Trip Input 6 Select to DCAH Mux */
/* EPWM_DCAHTRIPSEL[TRIPINPUT7] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT7_OFS          (6)                             /* !< TRIPINPUT7 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT7_MASK         ((uint16_t)0x00000040U)         /* !< Trip Input 7 Select to DCAH Mux */
/* EPWM_DCAHTRIPSEL[TRIPINPUT8] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT8_OFS          (7)                             /* !< TRIPINPUT8 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT8_MASK         ((uint16_t)0x00000080U)         /* !< Trip Input 8 Select to DCAH Mux */
/* EPWM_DCAHTRIPSEL[TRIPINPUT9] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT9_OFS          (8)                             /* !< TRIPINPUT9 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT9_MASK         ((uint16_t)0x00000100U)         /* !< Trip Input 9 Select to DCAH Mux */
/* EPWM_DCAHTRIPSEL[TRIPINPUT10] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT10_OFS         (9)                             /* !< TRIPINPUT10 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT10_MASK        ((uint16_t)0x00000200U)         /* !< Trip Input 10 Select to DCAH Mux */
/* EPWM_DCAHTRIPSEL[TRIPINPUT11] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT11_OFS         (10)                            /* !< TRIPINPUT11 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT11_MASK        ((uint16_t)0x00000400U)         /* !< Trip Input 11 Select to DCAH Mux */
/* EPWM_DCAHTRIPSEL[TRIPINPUT12] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT12_OFS         (11)                            /* !< TRIPINPUT12 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT12_MASK        ((uint16_t)0x00000800U)         /* !< Trip Input 12 Select to DCAH Mux */
/* EPWM_DCAHTRIPSEL[TRIPINPUT13] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT13_OFS         (12)                            /* !< TRIPINPUT13 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT13_MASK        ((uint16_t)0x00001000U)         /* !< Trip Input 13 Select to DCAH Mux */
/* EPWM_DCAHTRIPSEL[TRIPINPUT14] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT14_OFS         (13)                            /* !< TRIPINPUT14 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT14_MASK        ((uint16_t)0x00002000U)         /* !< Trip Input 14 Select to DCAH Mux */
/* EPWM_DCAHTRIPSEL[TRIPINPUT15] Bits */
#define EPWM_DCAHTRIPSEL_TRIPINPUT15_OFS         (14)                            /* !< TRIPINPUT15 Offset */
#define EPWM_DCAHTRIPSEL_TRIPINPUT15_MASK        ((uint16_t)0x00004000U)         /* !< Trip Input 15 Select to DCAH Mux */

/* EPWM_DCALTRIPSEL Bits */
/* EPWM_DCALTRIPSEL[TRIPINPUT1] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT1_OFS          (0)                             /* !< TRIPINPUT1 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT1_MASK         ((uint16_t)0x00000001U)         /* !< Trip Input 1 Select to DCAL Mux */
/* EPWM_DCALTRIPSEL[TRIPINPUT2] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT2_OFS          (1)                             /* !< TRIPINPUT2 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT2_MASK         ((uint16_t)0x00000002U)         /* !< Trip Input 2 Select to DCAL Mux */
/* EPWM_DCALTRIPSEL[TRIPINPUT3] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT3_OFS          (2)                             /* !< TRIPINPUT3 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT3_MASK         ((uint16_t)0x00000004U)         /* !< Trip Input 3 Select to DCAL Mux */
/* EPWM_DCALTRIPSEL[TRIPINPUT4] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT4_OFS          (3)                             /* !< TRIPINPUT4 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT4_MASK         ((uint16_t)0x00000008U)         /* !< Trip Input 4 Select to DCAL Mux */
/* EPWM_DCALTRIPSEL[TRIPINPUT5] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT5_OFS          (4)                             /* !< TRIPINPUT5 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT5_MASK         ((uint16_t)0x00000010U)         /* !< Trip Input 5 Select to DCAL Mux */
/* EPWM_DCALTRIPSEL[TRIPINPUT6] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT6_OFS          (5)                             /* !< TRIPINPUT6 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT6_MASK         ((uint16_t)0x00000020U)         /* !< Trip Input 6 Select to DCAL Mux */
/* EPWM_DCALTRIPSEL[TRIPINPUT7] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT7_OFS          (6)                             /* !< TRIPINPUT7 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT7_MASK         ((uint16_t)0x00000040U)         /* !< Trip Input 7 Select to DCAL Mux */
/* EPWM_DCALTRIPSEL[TRIPINPUT8] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT8_OFS          (7)                             /* !< TRIPINPUT8 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT8_MASK         ((uint16_t)0x00000080U)         /* !< Trip Input 8 Select to DCAL Mux */
/* EPWM_DCALTRIPSEL[TRIPINPUT9] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT9_OFS          (8)                             /* !< TRIPINPUT9 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT9_MASK         ((uint16_t)0x00000100U)         /* !< Trip Input 9 Select to DCAL Mux */
/* EPWM_DCALTRIPSEL[TRIPINPUT10] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT10_OFS         (9)                             /* !< TRIPINPUT10 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT10_MASK        ((uint16_t)0x00000200U)         /* !< Trip Input 10 Select to DCAL Mux */
/* EPWM_DCALTRIPSEL[TRIPINPUT11] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT11_OFS         (10)                            /* !< TRIPINPUT11 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT11_MASK        ((uint16_t)0x00000400U)         /* !< Trip Input 11 Select to DCAL Mux */
/* EPWM_DCALTRIPSEL[TRIPINPUT12] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT12_OFS         (11)                            /* !< TRIPINPUT12 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT12_MASK        ((uint16_t)0x00000800U)         /* !< Trip Input 12 Select to DCAL Mux */
/* EPWM_DCALTRIPSEL[TRIPINPUT13] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT13_OFS         (12)                            /* !< TRIPINPUT13 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT13_MASK        ((uint16_t)0x00001000U)         /* !< Trip Input 13 Select to DCAL Mux */
/* EPWM_DCALTRIPSEL[TRIPINPUT14] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT14_OFS         (13)                            /* !< TRIPINPUT14 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT14_MASK        ((uint16_t)0x00002000U)         /* !< Trip Input 14 Select to DCAL Mux */
/* EPWM_DCALTRIPSEL[TRIPINPUT15] Bits */
#define EPWM_DCALTRIPSEL_TRIPINPUT15_OFS         (14)                            /* !< TRIPINPUT15 Offset */
#define EPWM_DCALTRIPSEL_TRIPINPUT15_MASK        ((uint16_t)0x00004000U)         /* !< Trip Input 15 Select to DCAL Mux */

/* EPWM_DCBHTRIPSEL Bits */
/* EPWM_DCBHTRIPSEL[TRIPINPUT1] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT1_OFS          (0)                             /* !< TRIPINPUT1 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT1_MASK         ((uint16_t)0x00000001U)         /* !< Trip Input 1 Select to DCBH Mux */
/* EPWM_DCBHTRIPSEL[TRIPINPUT2] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT2_OFS          (1)                             /* !< TRIPINPUT2 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT2_MASK         ((uint16_t)0x00000002U)         /* !< Trip Input 2 Select to DCBH Mux */
/* EPWM_DCBHTRIPSEL[TRIPINPUT3] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT3_OFS          (2)                             /* !< TRIPINPUT3 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT3_MASK         ((uint16_t)0x00000004U)         /* !< Trip Input 3 Select to DCBH Mux */
/* EPWM_DCBHTRIPSEL[TRIPINPUT4] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT4_OFS          (3)                             /* !< TRIPINPUT4 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT4_MASK         ((uint16_t)0x00000008U)         /* !< Trip Input 4 Select to DCBH Mux */
/* EPWM_DCBHTRIPSEL[TRIPINPUT5] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT5_OFS          (4)                             /* !< TRIPINPUT5 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT5_MASK         ((uint16_t)0x00000010U)         /* !< Trip Input 5 Select to DCBH Mux */
/* EPWM_DCBHTRIPSEL[TRIPINPUT6] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT6_OFS          (5)                             /* !< TRIPINPUT6 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT6_MASK         ((uint16_t)0x00000020U)         /* !< Trip Input 6 Select to DCBH Mux */
/* EPWM_DCBHTRIPSEL[TRIPINPUT7] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT7_OFS          (6)                             /* !< TRIPINPUT7 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT7_MASK         ((uint16_t)0x00000040U)         /* !< Trip Input 7 Select to DCBH Mux */
/* EPWM_DCBHTRIPSEL[TRIPINPUT8] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT8_OFS          (7)                             /* !< TRIPINPUT8 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT8_MASK         ((uint16_t)0x00000080U)         /* !< Trip Input 8 Select to DCBH Mux */
/* EPWM_DCBHTRIPSEL[TRIPINPUT9] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT9_OFS          (8)                             /* !< TRIPINPUT9 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT9_MASK         ((uint16_t)0x00000100U)         /* !< Trip Input 9 Select to DCBH Mux */
/* EPWM_DCBHTRIPSEL[TRIPINPUT10] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT10_OFS         (9)                             /* !< TRIPINPUT10 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT10_MASK        ((uint16_t)0x00000200U)         /* !< Trip Input 10 Select to DCBH Mux */
/* EPWM_DCBHTRIPSEL[TRIPINPUT11] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT11_OFS         (10)                            /* !< TRIPINPUT11 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT11_MASK        ((uint16_t)0x00000400U)         /* !< Trip Input 11 Select to DCBH Mux */
/* EPWM_DCBHTRIPSEL[TRIPINPUT12] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT12_OFS         (11)                            /* !< TRIPINPUT12 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT12_MASK        ((uint16_t)0x00000800U)         /* !< Trip Input 12 Select to DCBH Mux */
/* EPWM_DCBHTRIPSEL[TRIPINPUT13] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT13_OFS         (12)                            /* !< TRIPINPUT13 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT13_MASK        ((uint16_t)0x00001000U)         /* !< Trip Input 13 Select to DCBH Mux */
/* EPWM_DCBHTRIPSEL[TRIPINPUT14] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT14_OFS         (13)                            /* !< TRIPINPUT14 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT14_MASK        ((uint16_t)0x00002000U)         /* !< Trip Input 14 Select to DCBH Mux */
/* EPWM_DCBHTRIPSEL[TRIPINPUT15] Bits */
#define EPWM_DCBHTRIPSEL_TRIPINPUT15_OFS         (14)                            /* !< TRIPINPUT15 Offset */
#define EPWM_DCBHTRIPSEL_TRIPINPUT15_MASK        ((uint16_t)0x00004000U)         /* !< Trip Input 15 Select to DCBH Mux */

/* EPWM_DCBLTRIPSEL Bits */
/* EPWM_DCBLTRIPSEL[TRIPINPUT1] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT1_OFS          (0)                             /* !< TRIPINPUT1 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT1_MASK         ((uint16_t)0x00000001U)         /* !< Trip Input 1 Select to DCBL Mux */
/* EPWM_DCBLTRIPSEL[TRIPINPUT2] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT2_OFS          (1)                             /* !< TRIPINPUT2 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT2_MASK         ((uint16_t)0x00000002U)         /* !< Trip Input 2 Select to DCBL Mux */
/* EPWM_DCBLTRIPSEL[TRIPINPUT3] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT3_OFS          (2)                             /* !< TRIPINPUT3 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT3_MASK         ((uint16_t)0x00000004U)         /* !< Trip Input 3 Select to DCBL Mux */
/* EPWM_DCBLTRIPSEL[TRIPINPUT4] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT4_OFS          (3)                             /* !< TRIPINPUT4 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT4_MASK         ((uint16_t)0x00000008U)         /* !< Trip Input 4 Select to DCBL Mux */
/* EPWM_DCBLTRIPSEL[TRIPINPUT5] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT5_OFS          (4)                             /* !< TRIPINPUT5 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT5_MASK         ((uint16_t)0x00000010U)         /* !< Trip Input 5 Select to DCBL Mux */
/* EPWM_DCBLTRIPSEL[TRIPINPUT6] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT6_OFS          (5)                             /* !< TRIPINPUT6 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT6_MASK         ((uint16_t)0x00000020U)         /* !< Trip Input 6 Select to DCBL Mux */
/* EPWM_DCBLTRIPSEL[TRIPINPUT7] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT7_OFS          (6)                             /* !< TRIPINPUT7 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT7_MASK         ((uint16_t)0x00000040U)         /* !< Trip Input 7 Select to DCBL Mux */
/* EPWM_DCBLTRIPSEL[TRIPINPUT8] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT8_OFS          (7)                             /* !< TRIPINPUT8 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT8_MASK         ((uint16_t)0x00000080U)         /* !< Trip Input 8 Select to DCBL Mux */
/* EPWM_DCBLTRIPSEL[TRIPINPUT9] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT9_OFS          (8)                             /* !< TRIPINPUT9 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT9_MASK         ((uint16_t)0x00000100U)         /* !< Trip Input 9 Select to DCBL Mux */
/* EPWM_DCBLTRIPSEL[TRIPINPUT10] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT10_OFS         (9)                             /* !< TRIPINPUT10 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT10_MASK        ((uint16_t)0x00000200U)         /* !< Trip Input 10 Select to DCBL Mux */
/* EPWM_DCBLTRIPSEL[TRIPINPUT11] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT11_OFS         (10)                            /* !< TRIPINPUT11 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT11_MASK        ((uint16_t)0x00000400U)         /* !< Trip Input 11 Select to DCBL Mux */
/* EPWM_DCBLTRIPSEL[TRIPINPUT12] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT12_OFS         (11)                            /* !< TRIPINPUT12 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT12_MASK        ((uint16_t)0x00000800U)         /* !< Trip Input 12 Select to DCBL Mux */
/* EPWM_DCBLTRIPSEL[TRIPINPUT13] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT13_OFS         (12)                            /* !< TRIPINPUT13 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT13_MASK        ((uint16_t)0x00001000U)         /* !< Trip Input 13 Select to DCBL Mux */
/* EPWM_DCBLTRIPSEL[TRIPINPUT14] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT14_OFS         (13)                            /* !< TRIPINPUT14 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT14_MASK        ((uint16_t)0x00002000U)         /* !< Trip Input 14 Select to DCBL Mux */
/* EPWM_DCBLTRIPSEL[TRIPINPUT15] Bits */
#define EPWM_DCBLTRIPSEL_TRIPINPUT15_OFS         (14)                            /* !< TRIPINPUT15 Offset */
#define EPWM_DCBLTRIPSEL_TRIPINPUT15_MASK        ((uint16_t)0x00004000U)         /* !< Trip Input 15 Select to DCBL Mux */

/* EPWM_EPWMLOCK Bits */
/* EPWM_EPWMLOCK[HRLOCK] Bits */
#define EPWM_EPWMLOCK_HRLOCK_OFS                 (0)                             /* !< HRLOCK Offset */
#define EPWM_EPWMLOCK_HRLOCK_MASK                ((uint32_t)0x00000001U)         /* !< HRPWM Register Set Lock */
/* EPWM_EPWMLOCK[GLLOCK] Bits */
#define EPWM_EPWMLOCK_GLLOCK_OFS                 (1)                             /* !< GLLOCK Offset */
#define EPWM_EPWMLOCK_GLLOCK_MASK                ((uint32_t)0x00000002U)         /* !< Global Load Register Set Lock */
/* EPWM_EPWMLOCK[TZCFGLOCK] Bits */
#define EPWM_EPWMLOCK_TZCFGLOCK_OFS              (2)                             /* !< TZCFGLOCK Offset */
#define EPWM_EPWMLOCK_TZCFGLOCK_MASK             ((uint32_t)0x00000004U)         /* !< TripZone Register Set Lock */
/* EPWM_EPWMLOCK[TZCLRLOCK] Bits */
#define EPWM_EPWMLOCK_TZCLRLOCK_OFS              (3)                             /* !< TZCLRLOCK Offset */
#define EPWM_EPWMLOCK_TZCLRLOCK_MASK             ((uint32_t)0x00000008U)         /* !< TripZone Clear Register Set Lock */
/* EPWM_EPWMLOCK[DCLOCK] Bits */
#define EPWM_EPWMLOCK_DCLOCK_OFS                 (4)                             /* !< DCLOCK Offset */
#define EPWM_EPWMLOCK_DCLOCK_MASK                ((uint32_t)0x00000010U)         /* !< Digital Compare Register Set Lock */
/* EPWM_EPWMLOCK[KEY] Bits */
#define EPWM_EPWMLOCK_KEY_OFS                    (16)                            /* !< KEY Offset */
#define EPWM_EPWMLOCK_KEY_MASK                   ((uint32_t)0xFFFF0000U)         /* !< Key to write to this register */

/* EPWM_HWVDELVAL Bits */
/* EPWM_HWVDELVAL[HWVDELVAL] Bits */
#define EPWM_HWVDELVAL_HWVDELVAL_OFS             (0)                             /* !< HWVDELVAL Offset */
#define EPWM_HWVDELVAL_HWVDELVAL_MASK            ((uint16_t)0x0000FFFFU)         /* !< Hardware programmed Valley Delay
                                                                                    Value */

/* EPWM_VCNTVAL Bits */
/* EPWM_VCNTVAL[VCNTVAL] Bits */
#define EPWM_VCNTVAL_VCNTVAL_OFS                 (0)                             /* !< VCNTVAL Offset */
#define EPWM_VCNTVAL_VCNTVAL_MASK                ((uint16_t)0x0000FFFFU)         /* !< Valley Counter Value */


#ifdef __cplusplus
}
#endif

#endif /* hw_epwm__include */

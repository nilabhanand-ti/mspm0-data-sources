/*****************************************************************************

  Copyright (C) 2026 Texas Instruments Incorporated

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

#ifndef hw_hrpwmcal__include
#define hw_hrpwmcal__include


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
* HRPWMCAL Registers
******************************************************************************/


/** @addtogroup HRPWMCAL
  @{
*/

typedef struct {
       uint16_t RESERVED0[33];
  __IO uint16_t HRPWR;                             /* !< (@ 0x00000042) HRPWM Power Register */
  __IO uint16_t HRCAL;                             /* !< (@ 0x00000044) HRPWM Cal Register */
  __IO uint16_t HRPRD;                             /* !< (@ 0x00000046) HRPWM Period Register */
  __IO uint16_t HRCNT0;                            /* !< (@ 0x00000048) HRPWM Count 0 Register */
  __IO uint16_t HRCNT1;                            /* !< (@ 0x0000004A) HRPWM Count 1 Register */
  __IO uint16_t HRMSTEP;                           /* !< (@ 0x0000004C) HRPWM MEP Step Register */
} HRPWMCAL_Regs;

/*@}*/ /* end of group HRPWMCAL */



/******************************************************************************
* HRPWMCAL Register Offsets
******************************************************************************/
#define HRPWMCAL_HRPWR                           (0x00000042U)
#define HRPWMCAL_HRCAL                           (0x00000044U)
#define HRPWMCAL_HRPRD                           (0x00000046U)
#define HRPWMCAL_HRCNT0                          (0x00000048U)
#define HRPWMCAL_HRCNT1                          (0x0000004AU)
#define HRPWMCAL_HRMSTEP                         (0x0000004CU)



#if defined ( __CC_ARM )
#pragma no_anon_unions
#endif

/******************************************************************************
* HRPWMCAL Register Control Bits
******************************************************************************/

/* HRPWMCAL_HRPWR Bits */
/* HRPWMCAL_HRPWR[CALSTART] Bits */
#define HRPWMCAL_HRPWR_CALSTART_OFS              (2U)                            /* !< CALSTART Offset */
#define HRPWMCAL_HRPWR_CALSTART_MASK             ((uint16_t)0x00000004U)         /* !< Calibration Start/Stop */
/* HRPWMCAL_HRPWR[CNTSEL] Bits */
#define HRPWMCAL_HRPWR_CNTSEL_OFS               (3U)                            /* !< CNTSEL Offset */
#define HRPWMCAL_HRPWR_CNTSEL_MASK              ((uint16_t)0x00000008U)         /* !< Counter Select Bit */
/* HRPWMCAL_HRPWR[CALSTS] Bits */
#define HRPWMCAL_HRPWR_CALSTS_OFS               (4U)                            /* !< CALSTS Offset */
#define HRPWMCAL_HRPWR_CALSTS_MASK              ((uint16_t)0x00000010U)         /* !< Calibration Status Bit */
/* HRPWMCAL_HRPWR[TESTSEL] Bits */
#define HRPWMCAL_HRPWR_TESTSEL_OFS              (5U)                            /* !< TESTSEL Offset */
#define HRPWMCAL_HRPWR_TESTSEL_MASK             ((uint16_t)0x00000020U)         /* !< Test Mode (Lump Delay) Select Bit */
/* HRPWMCAL_HRPWR[CALSEL] Bits */
#define HRPWMCAL_HRPWR_CALSEL_OFS               (6U)                            /* !< CALSEL Offset */
#define HRPWMCAL_HRPWR_CALSEL_MASK              ((uint16_t)0x000003C0U)         /* !< ePWM Delay Line Selection for Calibration */
/* HRPWMCAL_HRPWR[CALPWRON] Bits */
#define HRPWMCAL_HRPWR_CALPWRON_OFS              (15U)                           /* !< CALPWRON Offset */
#define HRPWMCAL_HRPWR_CALPWRON_MASK             ((uint16_t)0x00008000U)         /* !< Calibration Power On */

/* HRPWMCAL_HRCAL Bits */
/* HRPWMCAL_HRCAL[HRCAL] Bits */
#define HRPWMCAL_HRCAL_HRCAL_OFS                (0U)                            /* !< HRCAL Offset */
#define HRPWMCAL_HRCAL_HRCAL_MASK               ((uint16_t)0x000000FFU)         /* !< Delay Line Calibration Value Register */

/* HRPWMCAL_HRMSTEP Bits */
/* HRPWMCAL_HRMSTEP[HRMSTEP] Bits */
#define HRPWMCAL_HRMSTEP_HRMSTEP_OFS             (0U)                            /* !< HRMSTEP Offset */
#define HRPWMCAL_HRMSTEP_HRMSTEP_MASK            ((uint16_t)0x000000FFU)         /* !< High Resolution Micro Step Value */


#ifdef __cplusplus
}
#endif

#endif /* hw_hrpwmcal__include */

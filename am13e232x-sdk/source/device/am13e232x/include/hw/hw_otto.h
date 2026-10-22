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

#ifndef hw_otto__include
#define hw_otto__include


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
* OTTO Registers
******************************************************************************/


/** @addtogroup OTTO
  @{
*/

typedef struct {
       uint16_t RESERVED0[33];
  __IO uint16_t HRPWR;                             /* !< (@ 0x00000042) HRPWM Power Register */
       uint32_t RESERVED1[2];
  __IO uint16_t HRMSTEP;                           /* !< (@ 0x0000004C) HRPWM MEP Step Register */
} OTTO_Regs;

/*@}*/ /* end of group OTTO */



/******************************************************************************
* OTTO Register Offsets
******************************************************************************/
#define OTTO_HRPWR                               (0x00000042U)
#define OTTO_HRMSTEP                             (0x0000004CU)



#if defined ( __CC_ARM )
#pragma no_anon_unions
#endif

/******************************************************************************
* OTTO Register Control Bits
******************************************************************************/

/* OTTO_HRPWR Bits */
/* OTTO_HRPWR[CALPWRON] Bits */
#define OTTO_HRPWR_CALPWRON_OFS                  (15)                            /* !< CALPWRON Offset */
#define OTTO_HRPWR_CALPWRON_MASK                 ((uint16_t)0x00008000U)         /* !< Calibration Power On */

/* OTTO_HRMSTEP Bits */
/* OTTO_HRMSTEP[HRMSTEP] Bits */
#define OTTO_HRMSTEP_HRMSTEP_OFS                 (0)                             /* !< HRMSTEP Offset */
#define OTTO_HRMSTEP_HRMSTEP_MASK                ((uint16_t)0x000000FFU)         /* !< High Resolution Micro Step Value */


#ifdef __cplusplus
}
#endif

#endif /* hw_otto__include */


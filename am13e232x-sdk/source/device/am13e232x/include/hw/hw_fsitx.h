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

#ifndef hw_fsitx__include
#define hw_fsitx__include


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
* FSITX Registers
******************************************************************************/


/** @addtogroup FSITX_FSI_RX
  @{
*/

typedef struct {
  __IO uint16_t RX_MAIN_CTRL;                      /* !< (@ 0x00000000) Receive main control register */
       uint16_t RESERVED0[3];
  __IO uint16_t RX_OPER_CTRL;                      /* !< (@ 0x00000008) Receive operation control register */
       uint16_t RESERVED1;
  __IO uint16_t RX_FRAME_INFO;                     /* !< (@ 0x0000000C) Receive frame control register */
  __IO uint16_t RX_FRAME_TAG_UDATA;                /* !< (@ 0x0000000E) Receive frame tag and user data register */
  __IO uint16_t RX_DMA_CTRL;                       /* !< (@ 0x00000010) Receive DMA event control register */
       uint16_t RESERVED2;
  __IO uint16_t RX_EVT_STS;                        /* !< (@ 0x00000014) Receive event and error status flag register */
  __IO uint16_t RX_CRC_INFO;                       /* !< (@ 0x00000016) Receive CRC info of received and computed CRC */
  __IO uint16_t RX_EVT_CLR;                        /* !< (@ 0x00000018) Receive event and error clear register */
  __IO uint16_t RX_EVT_FRC;                        /* !< (@ 0x0000001A) Receive event and error flag force register */
  __IO uint16_t RX_BUF_PTR_LOAD;                   /* !< (@ 0x0000001C) Receive buffer pointer load register */
  __IO uint16_t RX_BUF_PTR_STS;                    /* !< (@ 0x0000001E) Receive buffer pointer status register */
  __IO uint16_t RX_FRAME_WD_CTRL;                  /* !< (@ 0x00000020) Receive frame watchdog control register */
       uint16_t RESERVED3;
  __IO uint32_t RX_FRAME_WD_REF;                   /* !< (@ 0x00000024) Receive frame watchdog counter reference */
  __IO uint32_t RX_FRAME_WD_CNT;                   /* !< (@ 0x00000028) Receive frame watchdog current count */
  __IO uint16_t RX_PING_WD_CTRL;                   /* !< (@ 0x0000002C) Receive ping watchdog control register */
  __IO uint16_t RX_PING_TAG;                       /* !< (@ 0x0000002E) Receive ping tag register */
  __IO uint32_t RX_PING_WD_REF;                    /* !< (@ 0x00000030) Receive ping watchdog counter reference */
  __IO uint32_t RX_PING_WD_CNT;                    /* !< (@ 0x00000034) Receive pingwatchdog current count */
  __IO uint16_t RX_INT1_CTRL;                      /* !< (@ 0x00000038) Receive interrupt control register for RX_INT1 */
  __IO uint16_t RX_INT2_CTRL;                      /* !< (@ 0x0000003A) Receive interrupt control register for RX_INT2 */
  __IO uint16_t RX_LOCK_CTRL;                      /* !< (@ 0x0000003C) Receive lock control register */
       uint16_t RESERVED4;
  __IO uint32_t RX_ECC_DATA;                       /* !< (@ 0x00000040) Receive ECC data register */
  __IO uint16_t RX_ECC_VAL;                        /* !< (@ 0x00000044) Receive ECC value register */
       uint16_t RESERVED5;
  __IO uint32_t RX_ECC_SEC_DATA;                   /* !< (@ 0x00000048) Receive ECC corrected data register */
  __IO uint16_t RX_ECC_LOG;                        /* !< (@ 0x0000004C) Receive ECC log and status register */
       uint16_t RESERVED6;
  __IO uint16_t RX_FRAME_TAG_CMP;                  /* !< (@ 0x00000050) Receive frame tag compare register */
  __IO uint16_t RX_PING_TAG_CMP;                   /* !< (@ 0x00000052) Receive ping tag compare register */
       uint32_t RESERVED7;
  __IO uint32_t RX_TRIG_CTRL_0;                    /* !< (@ 0x00000058) Receive Trigger Control register 0 */
  __IO uint32_t RX_TRIG_WIDTH_0;                   /* !< (@ 0x0000005C) Receive Trigger Wdith register 0 */
  __IO uint16_t RX_DLYLINE_CTRL;                   /* !< (@ 0x00000060) Receive delay line control register */
       uint16_t RESERVED8;
  __IO uint32_t RX_TRIG_CTRL_1;                    /* !< (@ 0x00000064) Receive Trigger Control register 1 */
  __IO uint32_t RX_TRIG_CTRL_2;                    /* !< (@ 0x00000068) Receive Trigger Control register 2 */
  __IO uint32_t RX_TRIG_CTRL_3;                    /* !< (@ 0x0000006C) Receive Trigger Control register 3 */
  __IO uint32_t RX_VIS_1;                          /* !< (@ 0x00000070) Receive debug visibility register 1 */
  __IO uint16_t RX_UDATA_FILTER;                   /* !< (@ 0x00000074) Receive User Data Filter Control register */
       uint16_t RESERVED9[5];
  __IO uint16_t RX_BUF_BASE[16];                   /* !< (@ 0x00000080) Base address for receive data buffer */
} FSITX_FSI_RX_Regs;

/*@}*/ /* end of group FSITX_FSI_RX */

/** @addtogroup FSITX_FSI_TX
  @{
*/

typedef struct {
  __IO uint16_t TX_MAIN_CTRL;                      /* !< (@ 0x00000000) Transmit main control register */
       uint16_t RESERVED0;
  __IO uint16_t TX_CLK_CTRL;                       /* !< (@ 0x00000004) Transmit clock control register */
       uint16_t RESERVED1;
  __IO uint16_t TX_OPER_CTRL_LO;                   /* !< (@ 0x00000008) Transmit operation control register low */
  __IO uint16_t TX_OPER_CTRL_HI;                   /* !< (@ 0x0000000A) Transmit operation control register high */
  __IO uint16_t TX_FRAME_CTRL;                     /* !< (@ 0x0000000C) Transmit frame control register */
  __IO uint16_t TX_FRAME_TAG_UDATA;                /* !< (@ 0x0000000E) Transmit frame tag and user data register */
  __IO uint16_t TX_BUF_PTR_LOAD;                   /* !< (@ 0x00000010) Transmit buffer pointer control load register */
  __IO uint16_t TX_BUF_PTR_STS;                    /* !< (@ 0x00000012) Transmit buffer pointer control status register */
  __IO uint16_t TX_PING_CTRL;                      /* !< (@ 0x00000014) Transmit ping control register */
  __IO uint16_t TX_PING_TAG;                       /* !< (@ 0x00000016) Transmit ping tag register */
  __IO uint32_t TX_PING_TO_REF;                    /* !< (@ 0x00000018) Transmit ping timeout counter reference */
  __IO uint32_t TX_PING_TO_CNT;                    /* !< (@ 0x0000001C) Transmit ping timeout current count */
  __IO uint16_t TX_INT_CTRL;                       /* !< (@ 0x00000020) Transmit interrupt event control register */
  __IO uint16_t TX_DMA_CTRL;                       /* !< (@ 0x00000022) Transmit DMA event control register */
  __IO uint16_t TX_LOCK_CTRL;                      /* !< (@ 0x00000024) Transmit lock control register */
       uint16_t RESERVED2;
  __IO uint16_t TX_EVT_STS;                        /* !< (@ 0x00000028) Transmit event and error status flag register */
       uint16_t RESERVED3;
  __IO uint16_t TX_EVT_CLR;                        /* !< (@ 0x0000002C) Transmit event and error clear register */
  __IO uint16_t TX_EVT_FRC;                        /* !< (@ 0x0000002E) Transmit event and error flag force register */
  __IO uint16_t TX_USER_CRC;                       /* !< (@ 0x00000030) Transmit user-defined CRC register */
       uint16_t RESERVED4[7];
  __IO uint32_t TX_ECC_DATA;                       /* !< (@ 0x00000040) Transmit ECC data register */
  __IO uint16_t TX_ECC_VAL;                        /* !< (@ 0x00000044) Transmit ECC value register */
       uint16_t RESERVED5;
  __IO uint16_t TX_DLYLINE_CTRL;                   /* !< (@ 0x00000048) Transmit delay Line control register */
       uint16_t RESERVED6[27];
  __IO uint16_t TX_BUF_BASE[16];                   /* !< (@ 0x00000080) Base address for transmit buffer */
} FSITX_FSI_TX_Regs;

/*@}*/ /* end of group FSITX_FSI_TX */



/******************************************************************************
* FSITX Register Offsets
******************************************************************************/
#define FSITX_TX_MAIN_CTRL                       (0x00000000U)
#define FSITX_TX_CLK_CTRL                        (0x00000004U)
#define FSITX_TX_OPER_CTRL_LO                    (0x00000008U)
#define FSITX_TX_OPER_CTRL_HI                    (0x0000000AU)
#define FSITX_TX_FRAME_CTRL                      (0x0000000CU)
#define FSITX_TX_FRAME_TAG_UDATA                 (0x0000000EU)
#define FSITX_TX_BUF_PTR_LOAD                    (0x00000010U)
#define FSITX_TX_BUF_PTR_STS                     (0x00000012U)
#define FSITX_TX_PING_CTRL                       (0x00000014U)
#define FSITX_TX_PING_TAG                        (0x00000016U)
#define FSITX_TX_PING_TO_REF                     (0x00000018U)
#define FSITX_TX_PING_TO_CNT                     (0x0000001CU)
#define FSITX_TX_INT_CTRL                        (0x00000020U)
#define FSITX_TX_DMA_CTRL                        (0x00000022U)
#define FSITX_TX_LOCK_CTRL                       (0x00000024U)
#define FSITX_TX_EVT_STS                         (0x00000028U)
#define FSITX_TX_EVT_CLR                         (0x0000002CU)
#define FSITX_TX_EVT_FRC                         (0x0000002EU)
#define FSITX_TX_USER_CRC                        (0x00000030U)
#define FSITX_TX_ECC_DATA                        (0x00000040U)
#define FSITX_TX_ECC_VAL                         (0x00000044U)
#define FSITX_TX_DLYLINE_CTRL                    (0x00000048U)
#define FSITX_TX_BUF_BASE(i)                     (0x00000080U + 2U * (i)) // 0 <= i < 16

#define FSITX_RX_MAIN_CTRL                       (0x00000000U)
#define FSITX_RX_OPER_CTRL                       (0x00000008U)
#define FSITX_RX_FRAME_INFO                      (0x0000000CU)
#define FSITX_RX_FRAME_TAG_UDATA                 (0x0000000EU)
#define FSITX_RX_DMA_CTRL                        (0x00000010U)
#define FSITX_RX_EVT_STS                         (0x00000014U)
#define FSITX_RX_CRC_INFO                        (0x00000016U)
#define FSITX_RX_EVT_CLR                         (0x00000018U)
#define FSITX_RX_EVT_FRC                         (0x0000001AU)
#define FSITX_RX_BUF_PTR_LOAD                    (0x0000001CU)
#define FSITX_RX_BUF_PTR_STS                     (0x0000001EU)
#define FSITX_RX_FRAME_WD_CTRL                   (0x00000020U)
#define FSITX_RX_FRAME_WD_REF                    (0x00000024U)
#define FSITX_RX_FRAME_WD_CNT                    (0x00000028U)
#define FSITX_RX_PING_WD_CTRL                    (0x0000002CU)
#define FSITX_RX_PING_TAG                        (0x0000002EU)
#define FSITX_RX_PING_WD_REF                     (0x00000030U)
#define FSITX_RX_PING_WD_CNT                     (0x00000034U)
#define FSITX_RX_INT1_CTRL                       (0x00000038U)
#define FSITX_RX_INT2_CTRL                       (0x0000003AU)
#define FSITX_RX_LOCK_CTRL                       (0x0000003CU)
#define FSITX_RX_ECC_DATA                        (0x00000040U)
#define FSITX_RX_ECC_VAL                         (0x00000044U)
#define FSITX_RX_ECC_SEC_DATA                    (0x00000048U)
#define FSITX_RX_ECC_LOG                         (0x0000004CU)
#define FSITX_RX_FRAME_TAG_CMP                   (0x00000050U)
#define FSITX_RX_PING_TAG_CMP                    (0x00000052U)
#define FSITX_RX_TRIG_CTRL_0                     (0x00000058U)
#define FSITX_RX_TRIG_WIDTH_0                    (0x0000005CU)
#define FSITX_RX_DLYLINE_CTRL                    (0x00000060U)
#define FSITX_RX_TRIG_CTRL_1                     (0x00000064U)
#define FSITX_RX_TRIG_CTRL_2                     (0x00000068U)
#define FSITX_RX_TRIG_CTRL_3                     (0x0000006CU)
#define FSITX_RX_VIS_1                           (0x00000070U)
#define FSITX_RX_UDATA_FILTER                    (0x00000074U)
#define FSITX_RX_BUF_BASE(i)                     (0x00000080U + 2U * (i)) // 0 <= i < 16



#if defined ( __CC_ARM )
#pragma no_anon_unions
#endif

/******************************************************************************
* FSITX Register Control Bits
******************************************************************************/

/* FSITX_RX_MAIN_CTRL Bits */
/* FSITX_RX_MAIN_CTRL[CORE_RST] Bits */
#define FSITX_RX_MAIN_CTRL_CORE_RST_OFS          (0)                             /* !< CORE_RST Offset */
#define FSITX_RX_MAIN_CTRL_CORE_RST_MASK         ((uint16_t)0x00000001U)         /* !< Receiver Main Core Reset */
/* FSITX_RX_MAIN_CTRL[INT_LOOPBACK] Bits */
#define FSITX_RX_MAIN_CTRL_INT_LOOPBACK_OFS      (1)                             /* !< INT_LOOPBACK Offset */
#define FSITX_RX_MAIN_CTRL_INT_LOOPBACK_MASK     ((uint16_t)0x00000002U)         /* !< Internal Loopback Enable */
/* FSITX_RX_MAIN_CTRL[SPI_PAIRING] Bits */
#define FSITX_RX_MAIN_CTRL_SPI_PAIRING_OFS       (2)                             /* !< SPI_PAIRING Offset */
#define FSITX_RX_MAIN_CTRL_SPI_PAIRING_MASK      ((uint16_t)0x00000004U)         /* !< Clock Pairing for SPI-like
                                                                                    Behaviour */
/* FSITX_RX_MAIN_CTRL[INPUT_ISOLATE] Bits */
#define FSITX_RX_MAIN_CTRL_INPUT_ISOLATE_OFS     (3)                             /* !< INPUT_ISOLATE Offset */
#define FSITX_RX_MAIN_CTRL_INPUT_ISOLATE_MASK    ((uint16_t)0x00000008U)         /* !< ISOLATE Input signals */
/* FSITX_RX_MAIN_CTRL[DATA_FILTER_EN] Bits */
#define FSITX_RX_MAIN_CTRL_DATA_FILTER_EN_OFS    (4)                             /* !< DATA_FILTER_EN Offset */
#define FSITX_RX_MAIN_CTRL_DATA_FILTER_EN_MASK   ((uint16_t)0x00000010U)         /* !< Data Filter Enable */
/* FSITX_RX_MAIN_CTRL[KEY] Bits */
#define FSITX_RX_MAIN_CTRL_KEY_OFS               (8)                             /* !< KEY Offset */
#define FSITX_RX_MAIN_CTRL_KEY_MASK              ((uint16_t)0x0000FF00U)         /* !< Write Key */

/* FSITX_RX_OPER_CTRL Bits */
/* FSITX_RX_OPER_CTRL[DATA_WIDTH] Bits */
#define FSITX_RX_OPER_CTRL_DATA_WIDTH_OFS        (0)                             /* !< DATA_WIDTH Offset */
#define FSITX_RX_OPER_CTRL_DATA_WIDTH_MASK       ((uint16_t)0x00000003U)         /* !< Receive Data Width Select */
/* FSITX_RX_OPER_CTRL[SPI_MODE] Bits */
#define FSITX_RX_OPER_CTRL_SPI_MODE_OFS          (2)                             /* !< SPI_MODE Offset */
#define FSITX_RX_OPER_CTRL_SPI_MODE_MASK         ((uint16_t)0x00000004U)         /* !< SPI Mode Enable */
/* FSITX_RX_OPER_CTRL[N_WORDS] Bits */
#define FSITX_RX_OPER_CTRL_N_WORDS_OFS           (3)                             /* !< N_WORDS Offset */
#define FSITX_RX_OPER_CTRL_N_WORDS_MASK          ((uint16_t)0x00000078U)         /* !< Number of Words to be Received */
/* FSITX_RX_OPER_CTRL[ECC_SEL] Bits */
#define FSITX_RX_OPER_CTRL_ECC_SEL_OFS           (7)                             /* !< ECC_SEL Offset */
#define FSITX_RX_OPER_CTRL_ECC_SEL_MASK          ((uint16_t)0x00000080U)         /* !< ECC Data Width Select */
/* FSITX_RX_OPER_CTRL[PING_WD_RST_MODE] Bits */
#define FSITX_RX_OPER_CTRL_PING_WD_RST_MODE_OFS  (8)                             /* !< PING_WD_RST_MODE Offset */
#define FSITX_RX_OPER_CTRL_PING_WD_RST_MODE_MASK ((uint16_t)0x00000100U)         /* !< Ping Watchdog Timeout Mode Select */

/* FSITX_RX_FRAME_INFO Bits */
/* FSITX_RX_FRAME_INFO[FRAME_TYPE] Bits */
#define FSITX_RX_FRAME_INFO_FRAME_TYPE_OFS       (0)                             /* !< FRAME_TYPE Offset */
#define FSITX_RX_FRAME_INFO_FRAME_TYPE_MASK      ((uint16_t)0x0000000FU)         /* !< Received Frame Type */

/* FSITX_RX_FRAME_TAG_UDATA Bits */
/* FSITX_RX_FRAME_TAG_UDATA[FRAME_TAG] Bits */
#define FSITX_RX_FRAME_TAG_UDATA_FRAME_TAG_OFS   (1)                             /* !< FRAME_TAG Offset */
#define FSITX_RX_FRAME_TAG_UDATA_FRAME_TAG_MASK  ((uint16_t)0x0000001EU)         /* !< Received Frame Tag */
/* FSITX_RX_FRAME_TAG_UDATA[USER_DATA] Bits */
#define FSITX_RX_FRAME_TAG_UDATA_USER_DATA_OFS   (8)                             /* !< USER_DATA Offset */
#define FSITX_RX_FRAME_TAG_UDATA_USER_DATA_MASK  ((uint16_t)0x0000FF00U)         /* !< Received User Data */

/* FSITX_RX_DMA_CTRL Bits */
/* FSITX_RX_DMA_CTRL[DMA_EVT_EN] Bits */
#define FSITX_RX_DMA_CTRL_DMA_EVT_EN_OFS         (0)                             /* !< DMA_EVT_EN Offset */
#define FSITX_RX_DMA_CTRL_DMA_EVT_EN_MASK        ((uint16_t)0x00000001U)         /* !< DMA Event Enable */

/* FSITX_RX_EVT_STS Bits */
/* FSITX_RX_EVT_STS[PING_WD_TO] Bits */
#define FSITX_RX_EVT_STS_PING_WD_TO_OFS          (0)                             /* !< PING_WD_TO Offset */
#define FSITX_RX_EVT_STS_PING_WD_TO_MASK         ((uint16_t)0x00000001U)         /* !< Ping Watchdog Timeout Flag */
/* FSITX_RX_EVT_STS[FRAME_WD_TO] Bits */
#define FSITX_RX_EVT_STS_FRAME_WD_TO_OFS         (1)                             /* !< FRAME_WD_TO Offset */
#define FSITX_RX_EVT_STS_FRAME_WD_TO_MASK        ((uint16_t)0x00000002U)         /* !< Frame Watchdog Timeout Flag. */
/* FSITX_RX_EVT_STS[CRC_ERR] Bits */
#define FSITX_RX_EVT_STS_CRC_ERR_OFS             (2)                             /* !< CRC_ERR Offset */
#define FSITX_RX_EVT_STS_CRC_ERR_MASK            ((uint16_t)0x00000004U)         /* !< CRC Error Flag */
/* FSITX_RX_EVT_STS[TYPE_ERR] Bits */
#define FSITX_RX_EVT_STS_TYPE_ERR_OFS            (3)                             /* !< TYPE_ERR Offset */
#define FSITX_RX_EVT_STS_TYPE_ERR_MASK           ((uint16_t)0x00000008U)         /* !< Frame Type Error Flag */
/* FSITX_RX_EVT_STS[EOF_ERR] Bits */
#define FSITX_RX_EVT_STS_EOF_ERR_OFS             (4)                             /* !< EOF_ERR Offset */
#define FSITX_RX_EVT_STS_EOF_ERR_MASK            ((uint16_t)0x00000010U)         /* !< End-of-Frame Error Flag */
/* FSITX_RX_EVT_STS[BUF_OVERRUN] Bits */
#define FSITX_RX_EVT_STS_BUF_OVERRUN_OFS         (5)                             /* !< BUF_OVERRUN Offset */
#define FSITX_RX_EVT_STS_BUF_OVERRUN_MASK        ((uint16_t)0x00000020U)         /* !< Receive Buffer Overrun Flag */
/* FSITX_RX_EVT_STS[FRAME_DONE] Bits */
#define FSITX_RX_EVT_STS_FRAME_DONE_OFS          (6)                             /* !< FRAME_DONE Offset */
#define FSITX_RX_EVT_STS_FRAME_DONE_MASK         ((uint16_t)0x00000040U)         /* !< Frame Done Flag */
/* FSITX_RX_EVT_STS[BUF_UNDERRUN] Bits */
#define FSITX_RX_EVT_STS_BUF_UNDERRUN_OFS        (7)                             /* !< BUF_UNDERRUN Offset */
#define FSITX_RX_EVT_STS_BUF_UNDERRUN_MASK       ((uint16_t)0x00000080U)         /* !< Receive Buffer Underrun Flag */
/* FSITX_RX_EVT_STS[ERR_FRAME] Bits */
#define FSITX_RX_EVT_STS_ERR_FRAME_OFS           (8)                             /* !< ERR_FRAME Offset */
#define FSITX_RX_EVT_STS_ERR_FRAME_MASK          ((uint16_t)0x00000100U)         /* !< Error Frame Received Flag */
/* FSITX_RX_EVT_STS[PING_FRAME] Bits */
#define FSITX_RX_EVT_STS_PING_FRAME_OFS          (9)                             /* !< PING_FRAME Offset */
#define FSITX_RX_EVT_STS_PING_FRAME_MASK         ((uint16_t)0x00000200U)         /* !< Ping Frame Received Flag */
/* FSITX_RX_EVT_STS[FRAME_OVERRUN] Bits */
#define FSITX_RX_EVT_STS_FRAME_OVERRUN_OFS       (10)                            /* !< FRAME_OVERRUN Offset */
#define FSITX_RX_EVT_STS_FRAME_OVERRUN_MASK      ((uint16_t)0x00000400U)         /* !< Frame Overrun Flag */
/* FSITX_RX_EVT_STS[DATA_FRAME] Bits */
#define FSITX_RX_EVT_STS_DATA_FRAME_OFS          (11)                            /* !< DATA_FRAME Offset */
#define FSITX_RX_EVT_STS_DATA_FRAME_MASK         ((uint16_t)0x00000800U)         /* !< Data Frame Received Flag */
/* FSITX_RX_EVT_STS[PING_TAG_MATCH] Bits */
#define FSITX_RX_EVT_STS_PING_TAG_MATCH_OFS      (12)                            /* !< PING_TAG_MATCH Offset */
#define FSITX_RX_EVT_STS_PING_TAG_MATCH_MASK     ((uint16_t)0x00001000U)         /* !< Ping Tag Match Flag */
/* FSITX_RX_EVT_STS[DATA_TAG_MATCH] Bits */
#define FSITX_RX_EVT_STS_DATA_TAG_MATCH_OFS      (13)                            /* !< DATA_TAG_MATCH Offset */
#define FSITX_RX_EVT_STS_DATA_TAG_MATCH_MASK     ((uint16_t)0x00002000U)         /* !< Data Tag Match Flag */
/* FSITX_RX_EVT_STS[ERROR_TAG_MATCH] Bits */
#define FSITX_RX_EVT_STS_ERROR_TAG_MATCH_OFS     (14)                            /* !< ERROR_TAG_MATCH Offset */
#define FSITX_RX_EVT_STS_ERROR_TAG_MATCH_MASK    ((uint16_t)0x00004000U)         /* !< Error Tag Match Flag */

/* FSITX_RX_CRC_INFO Bits */
/* FSITX_RX_CRC_INFO[RX_CRC] Bits */
#define FSITX_RX_CRC_INFO_RX_CRC_OFS             (0)                             /* !< RX_CRC Offset */
#define FSITX_RX_CRC_INFO_RX_CRC_MASK            ((uint16_t)0x000000FFU)         /* !< Received CRC Value */
/* FSITX_RX_CRC_INFO[CALC_CRC] Bits */
#define FSITX_RX_CRC_INFO_CALC_CRC_OFS           (8)                             /* !< CALC_CRC Offset */
#define FSITX_RX_CRC_INFO_CALC_CRC_MASK          ((uint16_t)0x0000FF00U)         /* !< Hardware Calculated CRC */

/* FSITX_RX_EVT_CLR Bits */
/* FSITX_RX_EVT_CLR[PING_WD_TO] Bits */
#define FSITX_RX_EVT_CLR_PING_WD_TO_OFS          (0)                             /* !< PING_WD_TO Offset */
#define FSITX_RX_EVT_CLR_PING_WD_TO_MASK         ((uint16_t)0x00000001U)         /* !< Ping Watchdog Timeout Flag Clear */
/* FSITX_RX_EVT_CLR[FRAME_WD_TO] Bits */
#define FSITX_RX_EVT_CLR_FRAME_WD_TO_OFS         (1)                             /* !< FRAME_WD_TO Offset */
#define FSITX_RX_EVT_CLR_FRAME_WD_TO_MASK        ((uint16_t)0x00000002U)         /* !< Frame Watchdog Timeout Flag Clear */
/* FSITX_RX_EVT_CLR[CRC_ERR] Bits */
#define FSITX_RX_EVT_CLR_CRC_ERR_OFS             (2)                             /* !< CRC_ERR Offset */
#define FSITX_RX_EVT_CLR_CRC_ERR_MASK            ((uint16_t)0x00000004U)         /* !< CRC Error Flag Clear */
/* FSITX_RX_EVT_CLR[TYPE_ERR] Bits */
#define FSITX_RX_EVT_CLR_TYPE_ERR_OFS            (3)                             /* !< TYPE_ERR Offset */
#define FSITX_RX_EVT_CLR_TYPE_ERR_MASK           ((uint16_t)0x00000008U)         /* !< Frame Type Error Flag Clear */
/* FSITX_RX_EVT_CLR[EOF_ERR] Bits */
#define FSITX_RX_EVT_CLR_EOF_ERR_OFS             (4)                             /* !< EOF_ERR Offset */
#define FSITX_RX_EVT_CLR_EOF_ERR_MASK            ((uint16_t)0x00000010U)         /* !< End-of-Frame Error Flag Clear */
/* FSITX_RX_EVT_CLR[BUF_OVERRUN] Bits */
#define FSITX_RX_EVT_CLR_BUF_OVERRUN_OFS         (5)                             /* !< BUF_OVERRUN Offset */
#define FSITX_RX_EVT_CLR_BUF_OVERRUN_MASK        ((uint16_t)0x00000020U)         /* !< Receive Buffer Overrun Flag Clear */
/* FSITX_RX_EVT_CLR[FRAME_DONE] Bits */
#define FSITX_RX_EVT_CLR_FRAME_DONE_OFS          (6)                             /* !< FRAME_DONE Offset */
#define FSITX_RX_EVT_CLR_FRAME_DONE_MASK         ((uint16_t)0x00000040U)         /* !< Frame Done Flag Clear */
/* FSITX_RX_EVT_CLR[BUF_UNDERRUN] Bits */
#define FSITX_RX_EVT_CLR_BUF_UNDERRUN_OFS        (7)                             /* !< BUF_UNDERRUN Offset */
#define FSITX_RX_EVT_CLR_BUF_UNDERRUN_MASK       ((uint16_t)0x00000080U)         /* !< Receive Buffer Underrun Flag Clear */
/* FSITX_RX_EVT_CLR[ERR_FRAME] Bits */
#define FSITX_RX_EVT_CLR_ERR_FRAME_OFS           (8)                             /* !< ERR_FRAME Offset */
#define FSITX_RX_EVT_CLR_ERR_FRAME_MASK          ((uint16_t)0x00000100U)         /* !< Error Frame Received Flag Clear */
/* FSITX_RX_EVT_CLR[PING_FRAME] Bits */
#define FSITX_RX_EVT_CLR_PING_FRAME_OFS          (9)                             /* !< PING_FRAME Offset */
#define FSITX_RX_EVT_CLR_PING_FRAME_MASK         ((uint16_t)0x00000200U)         /* !< PING Frame Received Flag Clear */
/* FSITX_RX_EVT_CLR[FRAME_OVERRUN] Bits */
#define FSITX_RX_EVT_CLR_FRAME_OVERRUN_OFS       (10)                            /* !< FRAME_OVERRUN Offset */
#define FSITX_RX_EVT_CLR_FRAME_OVERRUN_MASK      ((uint16_t)0x00000400U)         /* !< Frame Overrun Flag Clear */
/* FSITX_RX_EVT_CLR[DATA_FRAME] Bits */
#define FSITX_RX_EVT_CLR_DATA_FRAME_OFS          (11)                            /* !< DATA_FRAME Offset */
#define FSITX_RX_EVT_CLR_DATA_FRAME_MASK         ((uint16_t)0x00000800U)         /* !< Data Frame Received Flag Clear */
/* FSITX_RX_EVT_CLR[PING_TAG_MATCH] Bits */
#define FSITX_RX_EVT_CLR_PING_TAG_MATCH_OFS      (12)                            /* !< PING_TAG_MATCH Offset */
#define FSITX_RX_EVT_CLR_PING_TAG_MATCH_MASK     ((uint16_t)0x00001000U)         /* !< Ping Tag Match Flag Clear */
/* FSITX_RX_EVT_CLR[DATA_TAG_MATCH] Bits */
#define FSITX_RX_EVT_CLR_DATA_TAG_MATCH_OFS      (13)                            /* !< DATA_TAG_MATCH Offset */
#define FSITX_RX_EVT_CLR_DATA_TAG_MATCH_MASK     ((uint16_t)0x00002000U)         /* !< Data Tag Match Flag Clear */
/* FSITX_RX_EVT_CLR[ERROR_TAG_MATCH] Bits */
#define FSITX_RX_EVT_CLR_ERROR_TAG_MATCH_OFS     (14)                            /* !< ERROR_TAG_MATCH Offset */
#define FSITX_RX_EVT_CLR_ERROR_TAG_MATCH_MASK    ((uint16_t)0x00004000U)         /* !< Error Tag Match Flag Clear */

/* FSITX_RX_EVT_FRC Bits */
/* FSITX_RX_EVT_FRC[PING_WD_TO] Bits */
#define FSITX_RX_EVT_FRC_PING_WD_TO_OFS          (0)                             /* !< PING_WD_TO Offset */
#define FSITX_RX_EVT_FRC_PING_WD_TO_MASK         ((uint16_t)0x00000001U)         /* !< Ping Watchdog Timeout Flag Force */
/* FSITX_RX_EVT_FRC[FRAME_WD_TO] Bits */
#define FSITX_RX_EVT_FRC_FRAME_WD_TO_OFS         (1)                             /* !< FRAME_WD_TO Offset */
#define FSITX_RX_EVT_FRC_FRAME_WD_TO_MASK        ((uint16_t)0x00000002U)         /* !< Frame Watchdog Timeout Flag Force */
/* FSITX_RX_EVT_FRC[CRC_ERR] Bits */
#define FSITX_RX_EVT_FRC_CRC_ERR_OFS             (2)                             /* !< CRC_ERR Offset */
#define FSITX_RX_EVT_FRC_CRC_ERR_MASK            ((uint16_t)0x00000004U)         /* !< CRC Error Flag Force */
/* FSITX_RX_EVT_FRC[TYPE_ERR] Bits */
#define FSITX_RX_EVT_FRC_TYPE_ERR_OFS            (3)                             /* !< TYPE_ERR Offset */
#define FSITX_RX_EVT_FRC_TYPE_ERR_MASK           ((uint16_t)0x00000008U)         /* !< Frame Type Error Flag Force */
/* FSITX_RX_EVT_FRC[EOF_ERR] Bits */
#define FSITX_RX_EVT_FRC_EOF_ERR_OFS             (4)                             /* !< EOF_ERR Offset */
#define FSITX_RX_EVT_FRC_EOF_ERR_MASK            ((uint16_t)0x00000010U)         /* !< End-of-Frame Error Flag Force */
/* FSITX_RX_EVT_FRC[BUF_OVERRUN] Bits */
#define FSITX_RX_EVT_FRC_BUF_OVERRUN_OFS         (5)                             /* !< BUF_OVERRUN Offset */
#define FSITX_RX_EVT_FRC_BUF_OVERRUN_MASK        ((uint16_t)0x00000020U)         /* !< Receive Buffer Overrun Flag Force */
/* FSITX_RX_EVT_FRC[FRAME_DONE] Bits */
#define FSITX_RX_EVT_FRC_FRAME_DONE_OFS          (6)                             /* !< FRAME_DONE Offset */
#define FSITX_RX_EVT_FRC_FRAME_DONE_MASK         ((uint16_t)0x00000040U)         /* !< Frame Done Flag Force */
/* FSITX_RX_EVT_FRC[BUF_UNDERRUN] Bits */
#define FSITX_RX_EVT_FRC_BUF_UNDERRUN_OFS        (7)                             /* !< BUF_UNDERRUN Offset */
#define FSITX_RX_EVT_FRC_BUF_UNDERRUN_MASK       ((uint16_t)0x00000080U)         /* !< Receive Buffer Underrun Flag Force */
/* FSITX_RX_EVT_FRC[ERR_FRAME] Bits */
#define FSITX_RX_EVT_FRC_ERR_FRAME_OFS           (8)                             /* !< ERR_FRAME Offset */
#define FSITX_RX_EVT_FRC_ERR_FRAME_MASK          ((uint16_t)0x00000100U)         /* !< Error Frame Received Flag Force */
/* FSITX_RX_EVT_FRC[PING_FRAME] Bits */
#define FSITX_RX_EVT_FRC_PING_FRAME_OFS          (9)                             /* !< PING_FRAME Offset */
#define FSITX_RX_EVT_FRC_PING_FRAME_MASK         ((uint16_t)0x00000200U)         /* !< Ping Frame Received Flag Force */
/* FSITX_RX_EVT_FRC[FRAME_OVERRUN] Bits */
#define FSITX_RX_EVT_FRC_FRAME_OVERRUN_OFS       (10)                            /* !< FRAME_OVERRUN Offset */
#define FSITX_RX_EVT_FRC_FRAME_OVERRUN_MASK      ((uint16_t)0x00000400U)         /* !< Frame Overrun Flag Force */
/* FSITX_RX_EVT_FRC[DATA_FRAME] Bits */
#define FSITX_RX_EVT_FRC_DATA_FRAME_OFS          (11)                            /* !< DATA_FRAME Offset */
#define FSITX_RX_EVT_FRC_DATA_FRAME_MASK         ((uint16_t)0x00000800U)         /* !< Data Frame Received Flag Force */
/* FSITX_RX_EVT_FRC[PING_TAG_MATCH] Bits */
#define FSITX_RX_EVT_FRC_PING_TAG_MATCH_OFS      (12)                            /* !< PING_TAG_MATCH Offset */
#define FSITX_RX_EVT_FRC_PING_TAG_MATCH_MASK     ((uint16_t)0x00001000U)         /* !< Ping Tag Match Flag Force */
/* FSITX_RX_EVT_FRC[DATA_TAG_MATCH] Bits */
#define FSITX_RX_EVT_FRC_DATA_TAG_MATCH_OFS      (13)                            /* !< DATA_TAG_MATCH Offset */
#define FSITX_RX_EVT_FRC_DATA_TAG_MATCH_MASK     ((uint16_t)0x00002000U)         /* !< Data Tag Match Flag Force */
/* FSITX_RX_EVT_FRC[ERROR_TAG_MATCH] Bits */
#define FSITX_RX_EVT_FRC_ERROR_TAG_MATCH_OFS     (14)                            /* !< ERROR_TAG_MATCH Offset */
#define FSITX_RX_EVT_FRC_ERROR_TAG_MATCH_MASK    ((uint16_t)0x00004000U)         /* !< Error Tag Match Flag Force */

/* FSITX_RX_BUF_PTR_LOAD Bits */
/* FSITX_RX_BUF_PTR_LOAD[BUF_PTR_LOAD] Bits */
#define FSITX_RX_BUF_PTR_LOAD_BUF_PTR_LOAD_OFS   (0)                             /* !< BUF_PTR_LOAD Offset */
#define FSITX_RX_BUF_PTR_LOAD_BUF_PTR_LOAD_MASK  ((uint16_t)0x0000000FU)         /* !< Load value for receive buffer
                                                                                    pointer */

/* FSITX_RX_BUF_PTR_STS Bits */
/* FSITX_RX_BUF_PTR_STS[CURR_BUF_PTR] Bits */
#define FSITX_RX_BUF_PTR_STS_CURR_BUF_PTR_OFS    (0)                             /* !< CURR_BUF_PTR Offset */
#define FSITX_RX_BUF_PTR_STS_CURR_BUF_PTR_MASK   ((uint16_t)0x0000000FU)         /* !< Current Buffer Pointer Index */
/* FSITX_RX_BUF_PTR_STS[CURR_WORD_CNT] Bits */
#define FSITX_RX_BUF_PTR_STS_CURR_WORD_CNT_OFS   (8)                             /* !< CURR_WORD_CNT Offset */
#define FSITX_RX_BUF_PTR_STS_CURR_WORD_CNT_MASK  ((uint16_t)0x00001F00U)         /* !< Available Words in Buffer */

/* FSITX_RX_FRAME_WD_CTRL Bits */
/* FSITX_RX_FRAME_WD_CTRL[FRAME_WD_CNT_RST] Bits */
#define FSITX_RX_FRAME_WD_CTRL_FRAME_WD_CNT_RST_OFS (0)                             /* !< FRAME_WD_CNT_RST Offset */
#define FSITX_RX_FRAME_WD_CTRL_FRAME_WD_CNT_RST_MASK ((uint16_t)0x00000001U)         /* !< Frame Watchdog Counter Reset */
/* FSITX_RX_FRAME_WD_CTRL[FRAME_WD_EN] Bits */
#define FSITX_RX_FRAME_WD_CTRL_FRAME_WD_EN_OFS   (1)                             /* !< FRAME_WD_EN Offset */
#define FSITX_RX_FRAME_WD_CTRL_FRAME_WD_EN_MASK  ((uint16_t)0x00000002U)         /* !< Frame Watchdog Counter Enable */

/* FSITX_RX_FRAME_WD_REF Bits */
/* FSITX_RX_FRAME_WD_REF[FRAME_WD_REF] Bits */
#define FSITX_RX_FRAME_WD_REF_FRAME_WD_REF_OFS   (0)                             /* !< FRAME_WD_REF Offset */
#define FSITX_RX_FRAME_WD_REF_FRAME_WD_REF_MASK  ((uint32_t)0xFFFFFFFFU)         /* !< Frame Watchdog Counter Reference
                                                                                    Value */

/* FSITX_RX_FRAME_WD_CNT Bits */
/* FSITX_RX_FRAME_WD_CNT[FRAME_WD_CNT] Bits */
#define FSITX_RX_FRAME_WD_CNT_FRAME_WD_CNT_OFS   (0)                             /* !< FRAME_WD_CNT Offset */
#define FSITX_RX_FRAME_WD_CNT_FRAME_WD_CNT_MASK  ((uint32_t)0xFFFFFFFFU)         /* !< Frame Watchdog Counter Value */

/* FSITX_RX_PING_WD_CTRL Bits */
/* FSITX_RX_PING_WD_CTRL[PING_WD_RST] Bits */
#define FSITX_RX_PING_WD_CTRL_PING_WD_RST_OFS    (0)                             /* !< PING_WD_RST Offset */
#define FSITX_RX_PING_WD_CTRL_PING_WD_RST_MASK   ((uint16_t)0x00000001U)         /* !< Ping Watchdog Counter Reset */
/* FSITX_RX_PING_WD_CTRL[PING_WD_EN] Bits */
#define FSITX_RX_PING_WD_CTRL_PING_WD_EN_OFS     (1)                             /* !< PING_WD_EN Offset */
#define FSITX_RX_PING_WD_CTRL_PING_WD_EN_MASK    ((uint16_t)0x00000002U)         /* !< Ping Watchdog Counter Enable */

/* FSITX_RX_PING_TAG Bits */
/* FSITX_RX_PING_TAG[PING_TAG] Bits */
#define FSITX_RX_PING_TAG_PING_TAG_OFS           (1)                             /* !< PING_TAG Offset */
#define FSITX_RX_PING_TAG_PING_TAG_MASK          ((uint16_t)0x0000001EU)         /* !< Ping Frame Tag */

/* FSITX_RX_PING_WD_REF Bits */
/* FSITX_RX_PING_WD_REF[PING_WD_REF] Bits */
#define FSITX_RX_PING_WD_REF_PING_WD_REF_OFS     (0)                             /* !< PING_WD_REF Offset */
#define FSITX_RX_PING_WD_REF_PING_WD_REF_MASK    ((uint32_t)0xFFFFFFFFU)         /* !< PING Watchdog Counter Reference
                                                                                    Value */

/* FSITX_RX_PING_WD_CNT Bits */
/* FSITX_RX_PING_WD_CNT[PING_WD_CNT] Bits */
#define FSITX_RX_PING_WD_CNT_PING_WD_CNT_OFS     (0)                             /* !< PING_WD_CNT Offset */
#define FSITX_RX_PING_WD_CNT_PING_WD_CNT_MASK    ((uint32_t)0xFFFFFFFFU)         /* !< Ping Watchdog Counter Value */

/* FSITX_RX_INT1_CTRL Bits */
/* FSITX_RX_INT1_CTRL[INT1_EN_PING_WD_TO] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_PING_WD_TO_OFS (0)                             /* !< INT1_EN_PING_WD_TO Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_PING_WD_TO_MASK ((uint16_t)0x00000001U)         /* !< Enable Ping Watchdog Timeout
                                                                                    Interrupt to INT1 */
/* FSITX_RX_INT1_CTRL[INT1_EN_FRAME_WD_TO] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_FRAME_WD_TO_OFS (1)                             /* !< INT1_EN_FRAME_WD_TO Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_FRAME_WD_TO_MASK ((uint16_t)0x00000002U)         /* !< Enable Frame Watchdog Timeout
                                                                                    Interrupt to INT1 */
/* FSITX_RX_INT1_CTRL[INT1_EN_CRC_ERR] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_CRC_ERR_OFS   (2)                             /* !< INT1_EN_CRC_ERR Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_CRC_ERR_MASK  ((uint16_t)0x00000004U)         /* !< Enable CRC Error Interrupt to INT1 */
/* FSITX_RX_INT1_CTRL[INT1_EN_TYPE_ERR] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_TYPE_ERR_OFS  (3)                             /* !< INT1_EN_TYPE_ERR Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_TYPE_ERR_MASK ((uint16_t)0x00000008U)         /* !< Enable Frame Type Error Interrupt
                                                                                    to INT1 */
/* FSITX_RX_INT1_CTRL[INT1_EN_EOF_ERR] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_EOF_ERR_OFS   (4)                             /* !< INT1_EN_EOF_ERR Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_EOF_ERR_MASK  ((uint16_t)0x00000010U)         /* !< Enable End-of-Frame Error Interrupt
                                                                                    to INT1 */
/* FSITX_RX_INT1_CTRL[INT1_EN_OVERRUN] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_OVERRUN_OFS   (5)                             /* !< INT1_EN_OVERRUN Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_OVERRUN_MASK  ((uint16_t)0x00000020U)         /* !< Enable Receive Buffer Overrun
                                                                                    Interrupt to INT1 */
/* FSITX_RX_INT1_CTRL[INT1_EN_FRAME_DONE] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_FRAME_DONE_OFS (6)                             /* !< INT1_EN_FRAME_DONE Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_FRAME_DONE_MASK ((uint16_t)0x00000040U)         /* !< Enable Frame Done Interrupt to INT1 */
/* FSITX_RX_INT1_CTRL[INT1_EN_UNDERRUN] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_UNDERRUN_OFS  (7)                             /* !< INT1_EN_UNDERRUN Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_UNDERRUN_MASK ((uint16_t)0x00000080U)         /* !< Enable Buffer Underrun Interrupt to
                                                                                    INT1 */
/* FSITX_RX_INT1_CTRL[INT1_EN_ERR_FRAME] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_ERR_FRAME_OFS (8)                             /* !< INT1_EN_ERR_FRAME Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_ERR_FRAME_MASK ((uint16_t)0x00000100U)         /* !< Enable Error Frame Received
                                                                                    Interrupt to INT1 */
/* FSITX_RX_INT1_CTRL[INT1_EN_PING_FRAME] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_PING_FRAME_OFS (9)                             /* !< INT1_EN_PING_FRAME Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_PING_FRAME_MASK ((uint16_t)0x00000200U)         /* !< Enable Ping Frame Received
                                                                                    Interrupt to INT1 */
/* FSITX_RX_INT1_CTRL[INT1_EN_FRAME_OVERRUN] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_FRAME_OVERRUN_OFS (10)                            /* !< INT1_EN_FRAME_OVERRUN Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_FRAME_OVERRUN_MASK ((uint16_t)0x00000400U)         /* !< Enable Frame Overrun Interrupt to
                                                                                    INT1 */
/* FSITX_RX_INT1_CTRL[INT1_EN_DATA_FRAME] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_DATA_FRAME_OFS (11)                            /* !< INT1_EN_DATA_FRAME Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_DATA_FRAME_MASK ((uint16_t)0x00000800U)         /* !< Enable Data Frame Received
                                                                                    Interrupt to INT1 */
/* FSITX_RX_INT1_CTRL[INT1_EN_PING_TAG_MATCH] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_PING_TAG_MATCH_OFS (12)                            /* !< INT1_EN_PING_TAG_MATCH Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_PING_TAG_MATCH_MASK ((uint16_t)0x00001000U)         /* !< Enable Ping Frame Tag Matched
                                                                                    Interrupt to INT1 */
/* FSITX_RX_INT1_CTRL[INT1_EN_DATA_TAG_MATCH] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_DATA_TAG_MATCH_OFS (13)                            /* !< INT1_EN_DATA_TAG_MATCH Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_DATA_TAG_MATCH_MASK ((uint16_t)0x00002000U)         /* !< Enable Data Frame Tag Matched
                                                                                    Interrupt to INT1 */
/* FSITX_RX_INT1_CTRL[INT1_EN_ERROR_TAG_MATCH] Bits */
#define FSITX_RX_INT1_CTRL_INT1_EN_ERROR_TAG_MATCH_OFS (14)                            /* !< INT1_EN_ERROR_TAG_MATCH Offset */
#define FSITX_RX_INT1_CTRL_INT1_EN_ERROR_TAG_MATCH_MASK ((uint16_t)0x00004000U)         /* !< Enable Error Frame Tag Matched
                                                                                    Interrupt to INT1 */

/* FSITX_RX_INT2_CTRL Bits */
/* FSITX_RX_INT2_CTRL[INT2_EN_PING_WD_TO] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_PING_WD_TO_OFS (0)                             /* !< INT2_EN_PING_WD_TO Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_PING_WD_TO_MASK ((uint16_t)0x00000001U)         /* !< Enable Ping Watchdog Timeout
                                                                                    Interrupt to INT2 */
/* FSITX_RX_INT2_CTRL[INT2_EN_FRAME_WD_TO] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_FRAME_WD_TO_OFS (1)                             /* !< INT2_EN_FRAME_WD_TO Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_FRAME_WD_TO_MASK ((uint16_t)0x00000002U)         /* !< Enable Frame Watchdog Timeout
                                                                                    Interrupt to INT2 */
/* FSITX_RX_INT2_CTRL[INT2_EN_CRC_ERR] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_CRC_ERR_OFS   (2)                             /* !< INT2_EN_CRC_ERR Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_CRC_ERR_MASK  ((uint16_t)0x00000004U)         /* !< Enable CRC Errror Interrupt to INT2 */
/* FSITX_RX_INT2_CTRL[INT2_EN_TYPE_ERR] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_TYPE_ERR_OFS  (3)                             /* !< INT2_EN_TYPE_ERR Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_TYPE_ERR_MASK ((uint16_t)0x00000008U)         /* !< Enable Frame Type Error Interrupt
                                                                                    to INT2 */
/* FSITX_RX_INT2_CTRL[INT2_EN_EOF_ERR] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_EOF_ERR_OFS   (4)                             /* !< INT2_EN_EOF_ERR Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_EOF_ERR_MASK  ((uint16_t)0x00000010U)         /* !< Enable End-of-Frame Error Interrupt
                                                                                    to INT2 */
/* FSITX_RX_INT2_CTRL[INT2_EN_OVERRUN] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_OVERRUN_OFS   (5)                             /* !< INT2_EN_OVERRUN Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_OVERRUN_MASK  ((uint16_t)0x00000020U)         /* !< Enable Buffer Overrun Interrupt to
                                                                                    INT2 */
/* FSITX_RX_INT2_CTRL[INT2_EN_FRAME_DONE] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_FRAME_DONE_OFS (6)                             /* !< INT2_EN_FRAME_DONE Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_FRAME_DONE_MASK ((uint16_t)0x00000040U)         /* !< Enable Frame Done Interrupt to INT2 */
/* FSITX_RX_INT2_CTRL[INT2_EN_UNDERRUN] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_UNDERRUN_OFS  (7)                             /* !< INT2_EN_UNDERRUN Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_UNDERRUN_MASK ((uint16_t)0x00000080U)         /* !< Enable Buffer Underrun Interrupt to
                                                                                    INT2 */
/* FSITX_RX_INT2_CTRL[INT2_EN_ERR_FRAME] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_ERR_FRAME_OFS (8)                             /* !< INT2_EN_ERR_FRAME Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_ERR_FRAME_MASK ((uint16_t)0x00000100U)         /* !< Enable Error Frame Received
                                                                                    Interrupt to INT2 */
/* FSITX_RX_INT2_CTRL[INT2_EN_PING_FRAME] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_PING_FRAME_OFS (9)                             /* !< INT2_EN_PING_FRAME Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_PING_FRAME_MASK ((uint16_t)0x00000200U)         /* !< Enable Ping Frame Received
                                                                                    Interrupt to INT2 */
/* FSITX_RX_INT2_CTRL[INT2_EN_FRAME_OVERRUN] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_FRAME_OVERRUN_OFS (10)                            /* !< INT2_EN_FRAME_OVERRUN Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_FRAME_OVERRUN_MASK ((uint16_t)0x00000400U)         /* !< Enable Frame Overrun Interrupt to
                                                                                    INT2 */
/* FSITX_RX_INT2_CTRL[INT2_EN_DATA_FRAME] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_DATA_FRAME_OFS (11)                            /* !< INT2_EN_DATA_FRAME Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_DATA_FRAME_MASK ((uint16_t)0x00000800U)         /* !< Enable Data Frame Received
                                                                                    Interrupt to INT2 */
/* FSITX_RX_INT2_CTRL[INT2_EN_PING_TAG_MATCH] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_PING_TAG_MATCH_OFS (12)                            /* !< INT2_EN_PING_TAG_MATCH Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_PING_TAG_MATCH_MASK ((uint16_t)0x00001000U)         /* !< Enable Ping Frame Tag Matched
                                                                                    Interrupt to INT2 */
/* FSITX_RX_INT2_CTRL[INT2_EN_DATA_TAG_MATCH] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_DATA_TAG_MATCH_OFS (13)                            /* !< INT2_EN_DATA_TAG_MATCH Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_DATA_TAG_MATCH_MASK ((uint16_t)0x00002000U)         /* !< Enable Data Frame Tag Matched
                                                                                    Interrupt to INT2 */
/* FSITX_RX_INT2_CTRL[INT2_EN_ERROR_TAG_MATCH] Bits */
#define FSITX_RX_INT2_CTRL_INT2_EN_ERROR_TAG_MATCH_OFS (14)                            /* !< INT2_EN_ERROR_TAG_MATCH Offset */
#define FSITX_RX_INT2_CTRL_INT2_EN_ERROR_TAG_MATCH_MASK ((uint16_t)0x00004000U)         /* !< Enable Error Frame Tag Matched
                                                                                    Interrupt to INT2 */

/* FSITX_RX_LOCK_CTRL Bits */
/* FSITX_RX_LOCK_CTRL[LOCK] Bits */
#define FSITX_RX_LOCK_CTRL_LOCK_OFS              (0)                             /* !< LOCK Offset */
#define FSITX_RX_LOCK_CTRL_LOCK_MASK             ((uint16_t)0x00000001U)         /* !< Control Register Lock Enable */
/* FSITX_RX_LOCK_CTRL[KEY] Bits */
#define FSITX_RX_LOCK_CTRL_KEY_OFS               (8)                             /* !< KEY Offset */
#define FSITX_RX_LOCK_CTRL_KEY_MASK              ((uint16_t)0x0000FF00U)         /* !< Write Key */

/* FSITX_RX_ECC_DATA Bits */
/* FSITX_RX_ECC_DATA[DATA_LOW] Bits */
#define FSITX_RX_ECC_DATA_DATA_LOW_OFS           (0)                             /* !< DATA_LOW Offset */
#define FSITX_RX_ECC_DATA_DATA_LOW_MASK          ((uint32_t)0x0000FFFFU)         /* !< ECC Data Lower 16 Bits */
/* FSITX_RX_ECC_DATA[DATA_HIGH] Bits */
#define FSITX_RX_ECC_DATA_DATA_HIGH_OFS          (16)                            /* !< DATA_HIGH Offset */
#define FSITX_RX_ECC_DATA_DATA_HIGH_MASK         ((uint32_t)0xFFFF0000U)         /* !< ECC Data Upper 16 Bits */

/* FSITX_RX_ECC_VAL Bits */
/* FSITX_RX_ECC_VAL[ECC_VAL] Bits */
#define FSITX_RX_ECC_VAL_ECC_VAL_OFS             (0)                             /* !< ECC_VAL Offset */
#define FSITX_RX_ECC_VAL_ECC_VAL_MASK            ((uint16_t)0x0000007FU)         /* !< Computed ECC Value */

/* FSITX_RX_ECC_SEC_DATA Bits */
/* FSITX_RX_ECC_SEC_DATA[SEC_DATA] Bits */
#define FSITX_RX_ECC_SEC_DATA_SEC_DATA_OFS       (0)                             /* !< SEC_DATA Offset */
#define FSITX_RX_ECC_SEC_DATA_SEC_DATA_MASK      ((uint32_t)0xFFFFFFFFU)         /* !< ECC Single Error Corrected Data */

/* FSITX_RX_ECC_LOG Bits */
/* FSITX_RX_ECC_LOG[SBE] Bits */
#define FSITX_RX_ECC_LOG_SBE_OFS                 (0)                             /* !< SBE Offset */
#define FSITX_RX_ECC_LOG_SBE_MASK                ((uint16_t)0x00000001U)         /* !< Single Bit Error Detected */
/* FSITX_RX_ECC_LOG[MBE] Bits */
#define FSITX_RX_ECC_LOG_MBE_OFS                 (1)                             /* !< MBE Offset */
#define FSITX_RX_ECC_LOG_MBE_MASK                ((uint16_t)0x00000002U)         /* !< Multiple Bit Errors Detected */

/* FSITX_RX_FRAME_TAG_CMP Bits */
/* FSITX_RX_FRAME_TAG_CMP[TAG_REF] Bits */
#define FSITX_RX_FRAME_TAG_CMP_TAG_REF_OFS       (0)                             /* !< TAG_REF Offset */
#define FSITX_RX_FRAME_TAG_CMP_TAG_REF_MASK      ((uint16_t)0x0000000FU)         /* !< Frame Tag Reference */
/* FSITX_RX_FRAME_TAG_CMP[TAG_MASK] Bits */
#define FSITX_RX_FRAME_TAG_CMP_TAG_MASK_OFS      (4)                             /* !< TAG_MASK Offset */
#define FSITX_RX_FRAME_TAG_CMP_TAG_MASK_MASK     ((uint16_t)0x000000F0U)         /* !< Frame Tag Mask */
/* FSITX_RX_FRAME_TAG_CMP[CMP_EN] Bits */
#define FSITX_RX_FRAME_TAG_CMP_CMP_EN_OFS        (8)                             /* !< CMP_EN Offset */
#define FSITX_RX_FRAME_TAG_CMP_CMP_EN_MASK       ((uint16_t)0x00000100U)         /* !< Frame Tag Compare Enable */
/* FSITX_RX_FRAME_TAG_CMP[BROADCAST_EN] Bits */
#define FSITX_RX_FRAME_TAG_CMP_BROADCAST_EN_OFS  (9)                             /* !< BROADCAST_EN Offset */
#define FSITX_RX_FRAME_TAG_CMP_BROADCAST_EN_MASK ((uint16_t)0x00000200U)         /* !< Broadcast Enable */

/* FSITX_RX_PING_TAG_CMP Bits */
/* FSITX_RX_PING_TAG_CMP[TAG_REF] Bits */
#define FSITX_RX_PING_TAG_CMP_TAG_REF_OFS        (0)                             /* !< TAG_REF Offset */
#define FSITX_RX_PING_TAG_CMP_TAG_REF_MASK       ((uint16_t)0x0000000FU)         /* !< Ping Tag Reference */
/* FSITX_RX_PING_TAG_CMP[TAG_MASK] Bits */
#define FSITX_RX_PING_TAG_CMP_TAG_MASK_OFS       (4)                             /* !< TAG_MASK Offset */
#define FSITX_RX_PING_TAG_CMP_TAG_MASK_MASK      ((uint16_t)0x000000F0U)         /* !< Ping Tag Mask */
/* FSITX_RX_PING_TAG_CMP[CMP_EN] Bits */
#define FSITX_RX_PING_TAG_CMP_CMP_EN_OFS         (8)                             /* !< CMP_EN Offset */
#define FSITX_RX_PING_TAG_CMP_CMP_EN_MASK        ((uint16_t)0x00000100U)         /* !< Ping Tag Compare Enable */
/* FSITX_RX_PING_TAG_CMP[BROADCAST_EN] Bits */
#define FSITX_RX_PING_TAG_CMP_BROADCAST_EN_OFS   (9)                             /* !< BROADCAST_EN Offset */
#define FSITX_RX_PING_TAG_CMP_BROADCAST_EN_MASK  ((uint16_t)0x00000200U)         /* !< Broadcast Enable */

/* FSITX_RX_TRIG_CTRL_0 Bits */
/* FSITX_RX_TRIG_CTRL_0[TRIG_EN] Bits */
#define FSITX_RX_TRIG_CTRL_0_TRIG_EN_OFS         (0)                             /* !< TRIG_EN Offset */
#define FSITX_RX_TRIG_CTRL_0_TRIG_EN_MASK        ((uint32_t)0x00000001U)         /* !< Enable Trigger Function */
/* FSITX_RX_TRIG_CTRL_0[TRIG_SEL] Bits */
#define FSITX_RX_TRIG_CTRL_0_TRIG_SEL_OFS        (1)                             /* !< TRIG_SEL Offset */
#define FSITX_RX_TRIG_CTRL_0_TRIG_SEL_MASK       ((uint32_t)0x0000001EU)         /* !< Input Select for Trigger */
/* FSITX_RX_TRIG_CTRL_0[RX_TRIG_DLY] Bits */
#define FSITX_RX_TRIG_CTRL_0_RX_TRIG_DLY_OFS     (8)                             /* !< RX_TRIG_DLY Offset */
#define FSITX_RX_TRIG_CTRL_0_RX_TRIG_DLY_MASK    ((uint32_t)0xFFFFFF00U)         /* !< Delay for Trigger generation */

/* FSITX_RX_TRIG_WIDTH_0 Bits */
/* FSITX_RX_TRIG_WIDTH_0[RX_TRIG_WIDTH] Bits */
#define FSITX_RX_TRIG_WIDTH_0_RX_TRIG_WIDTH_OFS  (0)                             /* !< RX_TRIG_WIDTH Offset */
#define FSITX_RX_TRIG_WIDTH_0_RX_TRIG_WIDTH_MASK ((uint32_t)0x0000FFFFU)         /* !< Output Pulse Width */

/* FSITX_RX_DLYLINE_CTRL Bits */
/* FSITX_RX_DLYLINE_CTRL[RXCLK_DLY] Bits */
#define FSITX_RX_DLYLINE_CTRL_RXCLK_DLY_OFS      (0)                             /* !< RXCLK_DLY Offset */
#define FSITX_RX_DLYLINE_CTRL_RXCLK_DLY_MASK     ((uint16_t)0x0000001FU)         /* !< Delay Line Tap Select for RXCLK */
/* FSITX_RX_DLYLINE_CTRL[RXD0_DLY] Bits */
#define FSITX_RX_DLYLINE_CTRL_RXD0_DLY_OFS       (5)                             /* !< RXD0_DLY Offset */
#define FSITX_RX_DLYLINE_CTRL_RXD0_DLY_MASK      ((uint16_t)0x000003E0U)         /* !< Delay Line Tap Select for RXD0 */
/* FSITX_RX_DLYLINE_CTRL[RXD1_DLY] Bits */
#define FSITX_RX_DLYLINE_CTRL_RXD1_DLY_OFS       (10)                            /* !< RXD1_DLY Offset */
#define FSITX_RX_DLYLINE_CTRL_RXD1_DLY_MASK      ((uint16_t)0x00007C00U)         /* !< Delay Line Tap Select for RXD1 */

/* FSITX_RX_TRIG_CTRL_1 Bits */
/* FSITX_RX_TRIG_CTRL_1[TRIG_EN] Bits */
#define FSITX_RX_TRIG_CTRL_1_TRIG_EN_OFS         (0)                             /* !< TRIG_EN Offset */
#define FSITX_RX_TRIG_CTRL_1_TRIG_EN_MASK        ((uint32_t)0x00000001U)         /* !< Enable Trigger Function */
/* FSITX_RX_TRIG_CTRL_1[TRIG_SEL] Bits */
#define FSITX_RX_TRIG_CTRL_1_TRIG_SEL_OFS        (1)                             /* !< TRIG_SEL Offset */
#define FSITX_RX_TRIG_CTRL_1_TRIG_SEL_MASK       ((uint32_t)0x0000001EU)         /* !< Input Select for Trigger */
/* FSITX_RX_TRIG_CTRL_1[RX_TRIG_DLY] Bits */
#define FSITX_RX_TRIG_CTRL_1_RX_TRIG_DLY_OFS     (8)                             /* !< RX_TRIG_DLY Offset */
#define FSITX_RX_TRIG_CTRL_1_RX_TRIG_DLY_MASK    ((uint32_t)0xFFFFFF00U)         /* !< Delay for Trigger generation */

/* FSITX_RX_TRIG_CTRL_2 Bits */
/* FSITX_RX_TRIG_CTRL_2[TRIG_EN] Bits */
#define FSITX_RX_TRIG_CTRL_2_TRIG_EN_OFS         (0)                             /* !< TRIG_EN Offset */
#define FSITX_RX_TRIG_CTRL_2_TRIG_EN_MASK        ((uint32_t)0x00000001U)         /* !< Enable Trigger Function */
/* FSITX_RX_TRIG_CTRL_2[TRIG_SEL] Bits */
#define FSITX_RX_TRIG_CTRL_2_TRIG_SEL_OFS        (1)                             /* !< TRIG_SEL Offset */
#define FSITX_RX_TRIG_CTRL_2_TRIG_SEL_MASK       ((uint32_t)0x0000001EU)         /* !< Input Select for Trigger */
/* FSITX_RX_TRIG_CTRL_2[RX_TRIG_DLY] Bits */
#define FSITX_RX_TRIG_CTRL_2_RX_TRIG_DLY_OFS     (8)                             /* !< RX_TRIG_DLY Offset */
#define FSITX_RX_TRIG_CTRL_2_RX_TRIG_DLY_MASK    ((uint32_t)0xFFFFFF00U)         /* !< Delay for Trigger generation */

/* FSITX_RX_TRIG_CTRL_3 Bits */
/* FSITX_RX_TRIG_CTRL_3[TRIG_EN] Bits */
#define FSITX_RX_TRIG_CTRL_3_TRIG_EN_OFS         (0)                             /* !< TRIG_EN Offset */
#define FSITX_RX_TRIG_CTRL_3_TRIG_EN_MASK        ((uint32_t)0x00000001U)         /* !< Enable Trigger Function */
/* FSITX_RX_TRIG_CTRL_3[TRIG_SEL] Bits */
#define FSITX_RX_TRIG_CTRL_3_TRIG_SEL_OFS        (1)                             /* !< TRIG_SEL Offset */
#define FSITX_RX_TRIG_CTRL_3_TRIG_SEL_MASK       ((uint32_t)0x0000001EU)         /* !< Input Select for Trigger */
/* FSITX_RX_TRIG_CTRL_3[RX_TRIG_DLY] Bits */
#define FSITX_RX_TRIG_CTRL_3_RX_TRIG_DLY_OFS     (8)                             /* !< RX_TRIG_DLY Offset */
#define FSITX_RX_TRIG_CTRL_3_RX_TRIG_DLY_MASK    ((uint32_t)0xFFFFFF00U)         /* !< Delay for Trigger generation */

/* FSITX_RX_VIS_1 Bits */
/* FSITX_RX_VIS_1[RX_CORE_STS] Bits */
#define FSITX_RX_VIS_1_RX_CORE_STS_OFS           (3)                             /* !< RX_CORE_STS Offset */
#define FSITX_RX_VIS_1_RX_CORE_STS_MASK          ((uint32_t)0x00000008U)         /* !< Receiver Core Status */

/* FSITX_RX_UDATA_FILTER Bits */
/* FSITX_RX_UDATA_FILTER[UDATA_REF] Bits */
#define FSITX_RX_UDATA_FILTER_UDATA_REF_OFS      (0)                             /* !< UDATA_REF Offset */
#define FSITX_RX_UDATA_FILTER_UDATA_REF_MASK     ((uint16_t)0x000000FFU)         /* !< UserData reference value */
/* FSITX_RX_UDATA_FILTER[UDATA_MASK] Bits */
#define FSITX_RX_UDATA_FILTER_UDATA_MASK_OFS     (8)                             /* !< UDATA_MASK Offset */
#define FSITX_RX_UDATA_FILTER_UDATA_MASK_MASK    ((uint16_t)0x0000FF00U)         /* !< UserData mask  value */

/* FSITX_RX_BUF_BASE Bits */
/* FSITX_RX_BUF_BASE[BASE_ADDRESS] Bits */
#define FSITX_RX_BUF_BASE_BASE_ADDRESS_OFS       (0)                             /* !< BASE_ADDRESS Offset */
#define FSITX_RX_BUF_BASE_BASE_ADDRESS_MASK      ((uint16_t)0x0000FFFFU)         /* !< Receive Data Buffer Base Address */

/* FSITX_TX_MAIN_CTRL Bits */
/* FSITX_TX_MAIN_CTRL[CORE_RST] Bits */
#define FSITX_TX_MAIN_CTRL_CORE_RST_OFS          (0)                             /* !< CORE_RST Offset */
#define FSITX_TX_MAIN_CTRL_CORE_RST_MASK         ((uint16_t)0x00000001U)         /* !< Transmitter Main Core Reset */
/* FSITX_TX_MAIN_CTRL[FLUSH] Bits */
#define FSITX_TX_MAIN_CTRL_FLUSH_OFS             (1)                             /* !< FLUSH Offset */
#define FSITX_TX_MAIN_CTRL_FLUSH_MASK            ((uint16_t)0x00000002U)         /* !< Flush Operation Start */
/* FSITX_TX_MAIN_CTRL[KEY] Bits */
#define FSITX_TX_MAIN_CTRL_KEY_OFS               (8)                             /* !< KEY Offset */
#define FSITX_TX_MAIN_CTRL_KEY_MASK              ((uint16_t)0x0000FF00U)         /* !< Write Key */

/* FSITX_TX_CLK_CTRL Bits */
/* FSITX_TX_CLK_CTRL[CLK_RST] Bits */
#define FSITX_TX_CLK_CTRL_CLK_RST_OFS            (0)                             /* !< CLK_RST Offset */
#define FSITX_TX_CLK_CTRL_CLK_RST_MASK           ((uint16_t)0x00000001U)         /* !< Soft Reset for the Clock Divider */
/* FSITX_TX_CLK_CTRL[CLK_EN] Bits */
#define FSITX_TX_CLK_CTRL_CLK_EN_OFS             (1)                             /* !< CLK_EN Offset */
#define FSITX_TX_CLK_CTRL_CLK_EN_MASK            ((uint16_t)0x00000002U)         /* !< Clock Divider Enable */
/* FSITX_TX_CLK_CTRL[PRESCALE_VAL] Bits */
#define FSITX_TX_CLK_CTRL_PRESCALE_VAL_OFS       (2)                             /* !< PRESCALE_VAL Offset */
#define FSITX_TX_CLK_CTRL_PRESCALE_VAL_MASK      ((uint16_t)0x000003FCU)         /* !< Prescale value */

/* FSITX_TX_OPER_CTRL_LO Bits */
/* FSITX_TX_OPER_CTRL_LO[DATA_WIDTH] Bits */
#define FSITX_TX_OPER_CTRL_LO_DATA_WIDTH_OFS     (0)                             /* !< DATA_WIDTH Offset */
#define FSITX_TX_OPER_CTRL_LO_DATA_WIDTH_MASK    ((uint16_t)0x00000003U)         /* !< Transmit Data width */
/* FSITX_TX_OPER_CTRL_LO[SPI_MODE] Bits */
#define FSITX_TX_OPER_CTRL_LO_SPI_MODE_OFS       (2)                             /* !< SPI_MODE Offset */
#define FSITX_TX_OPER_CTRL_LO_SPI_MODE_MASK      ((uint16_t)0x00000004U)         /* !< SPI Mode Select */
/* FSITX_TX_OPER_CTRL_LO[START_MODE] Bits */
#define FSITX_TX_OPER_CTRL_LO_START_MODE_OFS     (3)                             /* !< START_MODE Offset */
#define FSITX_TX_OPER_CTRL_LO_START_MODE_MASK    ((uint16_t)0x00000038U)         /* !< Transmission Start Mode Select */
/* FSITX_TX_OPER_CTRL_LO[SW_CRC] Bits */
#define FSITX_TX_OPER_CTRL_LO_SW_CRC_OFS         (6)                             /* !< SW_CRC Offset */
#define FSITX_TX_OPER_CTRL_LO_SW_CRC_MASK        ((uint16_t)0x00000040U)         /* !< CRC Source Select */
/* FSITX_TX_OPER_CTRL_LO[PING_TO_MODE] Bits */
#define FSITX_TX_OPER_CTRL_LO_PING_TO_MODE_OFS   (7)                             /* !< PING_TO_MODE Offset */
#define FSITX_TX_OPER_CTRL_LO_PING_TO_MODE_MASK  ((uint16_t)0x00000080U)         /* !< Ping Counter Reset Mode Select */
/* FSITX_TX_OPER_CTRL_LO[SEL_PLLCLK] Bits */
#define FSITX_TX_OPER_CTRL_LO_SEL_PLLCLK_OFS     (8)                             /* !< SEL_PLLCLK Offset */
#define FSITX_TX_OPER_CTRL_LO_SEL_PLLCLK_MASK    ((uint16_t)0x00000100U)         /* !< Input Clock Select */
/* FSITX_TX_OPER_CTRL_LO[TDM_ENABLE] Bits */
#define FSITX_TX_OPER_CTRL_LO_TDM_ENABLE_OFS     (9)                             /* !< TDM_ENABLE Offset */
#define FSITX_TX_OPER_CTRL_LO_TDM_ENABLE_MASK    ((uint16_t)0x00000200U)         /* !< Transmit TDM Mode Enable */
/* FSITX_TX_OPER_CTRL_LO[SEL_TDM_IN] Bits */
#define FSITX_TX_OPER_CTRL_LO_SEL_TDM_IN_OFS     (10)                            /* !< SEL_TDM_IN Offset */
#define FSITX_TX_OPER_CTRL_LO_SEL_TDM_IN_MASK    ((uint16_t)0x00000400U)         /* !< Input TDM Port Select */

/* FSITX_TX_OPER_CTRL_HI Bits */
/* FSITX_TX_OPER_CTRL_HI[FORCE_ERR] Bits */
#define FSITX_TX_OPER_CTRL_HI_FORCE_ERR_OFS      (5)                             /* !< FORCE_ERR Offset */
#define FSITX_TX_OPER_CTRL_HI_FORCE_ERR_MASK     ((uint16_t)0x00000020U)         /* !< Error Frame Force */
/* FSITX_TX_OPER_CTRL_HI[ECC_SEL] Bits */
#define FSITX_TX_OPER_CTRL_HI_ECC_SEL_OFS        (6)                             /* !< ECC_SEL Offset */
#define FSITX_TX_OPER_CTRL_HI_ECC_SEL_MASK       ((uint16_t)0x00000040U)         /* !< ECC Data Width Select */
/* FSITX_TX_OPER_CTRL_HI[EXT_TRIG_SEL] Bits */
#define FSITX_TX_OPER_CTRL_HI_EXT_TRIG_SEL_OFS   (7)                             /* !< EXT_TRIG_SEL Offset */
#define FSITX_TX_OPER_CTRL_HI_EXT_TRIG_SEL_MASK  ((uint16_t)0x00003F80U)         /* !< External Trigger Select */

/* FSITX_TX_FRAME_CTRL Bits */
/* FSITX_TX_FRAME_CTRL[FRAME_TYPE] Bits */
#define FSITX_TX_FRAME_CTRL_FRAME_TYPE_OFS       (0)                             /* !< FRAME_TYPE Offset */
#define FSITX_TX_FRAME_CTRL_FRAME_TYPE_MASK      ((uint16_t)0x0000000FU)         /* !< Transmit Frame Type */
/* FSITX_TX_FRAME_CTRL[N_WORDS] Bits */
#define FSITX_TX_FRAME_CTRL_N_WORDS_OFS          (4)                             /* !< N_WORDS Offset */
#define FSITX_TX_FRAME_CTRL_N_WORDS_MASK         ((uint16_t)0x000000F0U)         /* !< Number of Words to be Transmitted */
/* FSITX_TX_FRAME_CTRL[START] Bits */
#define FSITX_TX_FRAME_CTRL_START_OFS            (15)                            /* !< START Offset */
#define FSITX_TX_FRAME_CTRL_START_MASK           ((uint16_t)0x00008000U)         /* !< Start Transmission */

/* FSITX_TX_FRAME_TAG_UDATA Bits */
/* FSITX_TX_FRAME_TAG_UDATA[FRAME_TAG] Bits */
#define FSITX_TX_FRAME_TAG_UDATA_FRAME_TAG_OFS   (0)                             /* !< FRAME_TAG Offset */
#define FSITX_TX_FRAME_TAG_UDATA_FRAME_TAG_MASK  ((uint16_t)0x0000000FU)         /* !< Frame Tag */
/* FSITX_TX_FRAME_TAG_UDATA[USER_DATA] Bits */
#define FSITX_TX_FRAME_TAG_UDATA_USER_DATA_OFS   (8)                             /* !< USER_DATA Offset */
#define FSITX_TX_FRAME_TAG_UDATA_USER_DATA_MASK  ((uint16_t)0x0000FF00U)         /* !< User Data */

/* FSITX_TX_BUF_PTR_LOAD Bits */
/* FSITX_TX_BUF_PTR_LOAD[BUF_PTR_LOAD] Bits */
#define FSITX_TX_BUF_PTR_LOAD_BUF_PTR_LOAD_OFS   (0)                             /* !< BUF_PTR_LOAD Offset */
#define FSITX_TX_BUF_PTR_LOAD_BUF_PTR_LOAD_MASK  ((uint16_t)0x0000000FU)         /* !< Buffer Pointer Force Load */

/* FSITX_TX_BUF_PTR_STS Bits */
/* FSITX_TX_BUF_PTR_STS[CURR_BUF_PTR] Bits */
#define FSITX_TX_BUF_PTR_STS_CURR_BUF_PTR_OFS    (0)                             /* !< CURR_BUF_PTR Offset */
#define FSITX_TX_BUF_PTR_STS_CURR_BUF_PTR_MASK   ((uint16_t)0x0000000FU)         /* !< Current Buffer Pointer Index */
/* FSITX_TX_BUF_PTR_STS[CURR_WORD_CNT] Bits */
#define FSITX_TX_BUF_PTR_STS_CURR_WORD_CNT_OFS   (8)                             /* !< CURR_WORD_CNT Offset */
#define FSITX_TX_BUF_PTR_STS_CURR_WORD_CNT_MASK  ((uint16_t)0x00001F00U)         /* !< Remaining Words in Buffer */

/* FSITX_TX_PING_CTRL Bits */
/* FSITX_TX_PING_CTRL[CNT_RST] Bits */
#define FSITX_TX_PING_CTRL_CNT_RST_OFS           (0)                             /* !< CNT_RST Offset */
#define FSITX_TX_PING_CTRL_CNT_RST_MASK          ((uint16_t)0x00000001U)         /* !< Ping Counter Reset */
/* FSITX_TX_PING_CTRL[TIMER_EN] Bits */
#define FSITX_TX_PING_CTRL_TIMER_EN_OFS          (1)                             /* !< TIMER_EN Offset */
#define FSITX_TX_PING_CTRL_TIMER_EN_MASK         ((uint16_t)0x00000002U)         /* !< Ping Counter Enable */
/* FSITX_TX_PING_CTRL[EXT_TRIG_EN] Bits */
#define FSITX_TX_PING_CTRL_EXT_TRIG_EN_OFS       (2)                             /* !< EXT_TRIG_EN Offset */
#define FSITX_TX_PING_CTRL_EXT_TRIG_EN_MASK      ((uint16_t)0x00000004U)         /* !< External Trigger Enable */
/* FSITX_TX_PING_CTRL[EXT_TRIG_SEL] Bits */
#define FSITX_TX_PING_CTRL_EXT_TRIG_SEL_OFS      (3)                             /* !< EXT_TRIG_SEL Offset */
#define FSITX_TX_PING_CTRL_EXT_TRIG_SEL_MASK     ((uint16_t)0x000003F8U)         /* !< External Trigger Select */

/* FSITX_TX_PING_TAG Bits */
/* FSITX_TX_PING_TAG[TAG] Bits */
#define FSITX_TX_PING_TAG_TAG_OFS                (0)                             /* !< TAG Offset */
#define FSITX_TX_PING_TAG_TAG_MASK               ((uint16_t)0x0000000FU)         /* !< Ping Frame Tag */

/* FSITX_TX_PING_TO_REF Bits */
/* FSITX_TX_PING_TO_REF[TO_REF] Bits */
#define FSITX_TX_PING_TO_REF_TO_REF_OFS          (0)                             /* !< TO_REF Offset */
#define FSITX_TX_PING_TO_REF_TO_REF_MASK         ((uint32_t)0xFFFFFFFFU)         /* !< Ping Timer Reference */

/* FSITX_TX_PING_TO_CNT Bits */
/* FSITX_TX_PING_TO_CNT[TO_CNT] Bits */
#define FSITX_TX_PING_TO_CNT_TO_CNT_OFS          (0)                             /* !< TO_CNT Offset */
#define FSITX_TX_PING_TO_CNT_TO_CNT_MASK         ((uint32_t)0xFFFFFFFFU)         /* !< Ping Timer Counter */

/* FSITX_TX_INT_CTRL Bits */
/* FSITX_TX_INT_CTRL[INT1_EN_FRAME_DONE] Bits */
#define FSITX_TX_INT_CTRL_INT1_EN_FRAME_DONE_OFS (0)                             /* !< INT1_EN_FRAME_DONE Offset */
#define FSITX_TX_INT_CTRL_INT1_EN_FRAME_DONE_MASK ((uint16_t)0x00000001U)         /* !< Enable Frame Done Interrupt to INT1 */
/* FSITX_TX_INT_CTRL[INT1_EN_BUF_UNDERRUN] Bits */
#define FSITX_TX_INT_CTRL_INT1_EN_BUF_UNDERRUN_OFS (1)                             /* !< INT1_EN_BUF_UNDERRUN Offset */
#define FSITX_TX_INT_CTRL_INT1_EN_BUF_UNDERRUN_MASK ((uint16_t)0x00000002U)         /* !< Enable Buffer Underrun Interrupt to
                                                                                    INT1 */
/* FSITX_TX_INT_CTRL[INT1_EN_BUF_OVERRUN] Bits */
#define FSITX_TX_INT_CTRL_INT1_EN_BUF_OVERRUN_OFS (2)                             /* !< INT1_EN_BUF_OVERRUN Offset */
#define FSITX_TX_INT_CTRL_INT1_EN_BUF_OVERRUN_MASK ((uint16_t)0x00000004U)         /* !< Enable Buffer Overrun Interrupt to
                                                                                    INT1 */
/* FSITX_TX_INT_CTRL[INT1_EN_PING_TO] Bits */
#define FSITX_TX_INT_CTRL_INT1_EN_PING_TO_OFS    (3)                             /* !< INT1_EN_PING_TO Offset */
#define FSITX_TX_INT_CTRL_INT1_EN_PING_TO_MASK   ((uint16_t)0x00000008U)         /* !< Enable Ping Timer Interrupt to INT1 */
/* FSITX_TX_INT_CTRL[INT2_EN_FRAME_DONE] Bits */
#define FSITX_TX_INT_CTRL_INT2_EN_FRAME_DONE_OFS (8)                             /* !< INT2_EN_FRAME_DONE Offset */
#define FSITX_TX_INT_CTRL_INT2_EN_FRAME_DONE_MASK ((uint16_t)0x00000100U)         /* !< Enable Frame Done Interrupt to INT2 */
/* FSITX_TX_INT_CTRL[INT2_EN_BUF_UNDERRUN] Bits */
#define FSITX_TX_INT_CTRL_INT2_EN_BUF_UNDERRUN_OFS (9)                             /* !< INT2_EN_BUF_UNDERRUN Offset */
#define FSITX_TX_INT_CTRL_INT2_EN_BUF_UNDERRUN_MASK ((uint16_t)0x00000200U)         /* !< Enable Buffer Underrun Interrupt to
                                                                                    INT2 */
/* FSITX_TX_INT_CTRL[INT2_EN_BUF_OVERRUN] Bits */
#define FSITX_TX_INT_CTRL_INT2_EN_BUF_OVERRUN_OFS (10)                            /* !< INT2_EN_BUF_OVERRUN Offset */
#define FSITX_TX_INT_CTRL_INT2_EN_BUF_OVERRUN_MASK ((uint16_t)0x00000400U)         /* !< Enable Buffer Overrun Interrupt to
                                                                                    INT2 */
/* FSITX_TX_INT_CTRL[INT2_EN_PING_TO] Bits */
#define FSITX_TX_INT_CTRL_INT2_EN_PING_TO_OFS    (11)                            /* !< INT2_EN_PING_TO Offset */
#define FSITX_TX_INT_CTRL_INT2_EN_PING_TO_MASK   ((uint16_t)0x00000800U)         /* !< Enable Ping Timer Interrupt to INT2 */

/* FSITX_TX_DMA_CTRL Bits */
/* FSITX_TX_DMA_CTRL[DMA_EVT_EN] Bits */
#define FSITX_TX_DMA_CTRL_DMA_EVT_EN_OFS         (0)                             /* !< DMA_EVT_EN Offset */
#define FSITX_TX_DMA_CTRL_DMA_EVT_EN_MASK        ((uint16_t)0x00000001U)         /* !< DMA Event Enable */

/* FSITX_TX_LOCK_CTRL Bits */
/* FSITX_TX_LOCK_CTRL[LOCK] Bits */
#define FSITX_TX_LOCK_CTRL_LOCK_OFS              (0)                             /* !< LOCK Offset */
#define FSITX_TX_LOCK_CTRL_LOCK_MASK             ((uint16_t)0x00000001U)         /* !< Control Register Lock Enable */
/* FSITX_TX_LOCK_CTRL[KEY] Bits */
#define FSITX_TX_LOCK_CTRL_KEY_OFS               (8)                             /* !< KEY Offset */
#define FSITX_TX_LOCK_CTRL_KEY_MASK              ((uint16_t)0x0000FF00U)         /* !< Write Key */

/* FSITX_TX_EVT_STS Bits */
/* FSITX_TX_EVT_STS[FRAME_DONE] Bits */
#define FSITX_TX_EVT_STS_FRAME_DONE_OFS          (0)                             /* !< FRAME_DONE Offset */
#define FSITX_TX_EVT_STS_FRAME_DONE_MASK         ((uint16_t)0x00000001U)         /* !< Frame Done Flag */
/* FSITX_TX_EVT_STS[BUF_UNDERRUN] Bits */
#define FSITX_TX_EVT_STS_BUF_UNDERRUN_OFS        (1)                             /* !< BUF_UNDERRUN Offset */
#define FSITX_TX_EVT_STS_BUF_UNDERRUN_MASK       ((uint16_t)0x00000002U)         /* !< Buffer Underrun Flag */
/* FSITX_TX_EVT_STS[BUF_OVERRUN] Bits */
#define FSITX_TX_EVT_STS_BUF_OVERRUN_OFS         (2)                             /* !< BUF_OVERRUN Offset */
#define FSITX_TX_EVT_STS_BUF_OVERRUN_MASK        ((uint16_t)0x00000004U)         /* !< Buffer Overrun Flag */
/* FSITX_TX_EVT_STS[PING_TRIGGERED] Bits */
#define FSITX_TX_EVT_STS_PING_TRIGGERED_OFS      (3)                             /* !< PING_TRIGGERED Offset */
#define FSITX_TX_EVT_STS_PING_TRIGGERED_MASK     ((uint16_t)0x00000008U)         /* !< Ping Frame Triggered Flag */

/* FSITX_TX_EVT_CLR Bits */
/* FSITX_TX_EVT_CLR[FRAME_DONE] Bits */
#define FSITX_TX_EVT_CLR_FRAME_DONE_OFS          (0)                             /* !< FRAME_DONE Offset */
#define FSITX_TX_EVT_CLR_FRAME_DONE_MASK         ((uint16_t)0x00000001U)         /* !< Frame Done Flag Clear */
/* FSITX_TX_EVT_CLR[BUF_UNDERRUN] Bits */
#define FSITX_TX_EVT_CLR_BUF_UNDERRUN_OFS        (1)                             /* !< BUF_UNDERRUN Offset */
#define FSITX_TX_EVT_CLR_BUF_UNDERRUN_MASK       ((uint16_t)0x00000002U)         /* !< Buffer Underrun Flag Clear */
/* FSITX_TX_EVT_CLR[BUF_OVERRUN] Bits */
#define FSITX_TX_EVT_CLR_BUF_OVERRUN_OFS         (2)                             /* !< BUF_OVERRUN Offset */
#define FSITX_TX_EVT_CLR_BUF_OVERRUN_MASK        ((uint16_t)0x00000004U)         /* !< Buffer Overrun Flag Clear */
/* FSITX_TX_EVT_CLR[PING_TRIGGERED] Bits */
#define FSITX_TX_EVT_CLR_PING_TRIGGERED_OFS      (3)                             /* !< PING_TRIGGERED Offset */
#define FSITX_TX_EVT_CLR_PING_TRIGGERED_MASK     ((uint16_t)0x00000008U)         /* !< Ping Frame Triggered Flag Clear */

/* FSITX_TX_EVT_FRC Bits */
/* FSITX_TX_EVT_FRC[FRAME_DONE] Bits */
#define FSITX_TX_EVT_FRC_FRAME_DONE_OFS          (0)                             /* !< FRAME_DONE Offset */
#define FSITX_TX_EVT_FRC_FRAME_DONE_MASK         ((uint16_t)0x00000001U)         /* !< Frame Done Flag Force */
/* FSITX_TX_EVT_FRC[BUF_UNDERRUN] Bits */
#define FSITX_TX_EVT_FRC_BUF_UNDERRUN_OFS        (1)                             /* !< BUF_UNDERRUN Offset */
#define FSITX_TX_EVT_FRC_BUF_UNDERRUN_MASK       ((uint16_t)0x00000002U)         /* !< Buffer Underrun Flag Force */
/* FSITX_TX_EVT_FRC[BUF_OVERRUN] Bits */
#define FSITX_TX_EVT_FRC_BUF_OVERRUN_OFS         (2)                             /* !< BUF_OVERRUN Offset */
#define FSITX_TX_EVT_FRC_BUF_OVERRUN_MASK        ((uint16_t)0x00000004U)         /* !< Buffer Overrun Flag Force */
/* FSITX_TX_EVT_FRC[PING_TRIGGERED] Bits */
#define FSITX_TX_EVT_FRC_PING_TRIGGERED_OFS      (3)                             /* !< PING_TRIGGERED Offset */
#define FSITX_TX_EVT_FRC_PING_TRIGGERED_MASK     ((uint16_t)0x00000008U)         /* !< Ping Frame Triggered Flag Force */

/* FSITX_TX_USER_CRC Bits */
/* FSITX_TX_USER_CRC[USER_CRC] Bits */
#define FSITX_TX_USER_CRC_USER_CRC_OFS           (0)                             /* !< USER_CRC Offset */
#define FSITX_TX_USER_CRC_USER_CRC_MASK          ((uint16_t)0x000000FFU)         /* !< User-defined CRC */

/* FSITX_TX_ECC_DATA Bits */
/* FSITX_TX_ECC_DATA[DATA_LOW] Bits */
#define FSITX_TX_ECC_DATA_DATA_LOW_OFS           (0)                             /* !< DATA_LOW Offset */
#define FSITX_TX_ECC_DATA_DATA_LOW_MASK          ((uint32_t)0x0000FFFFU)         /* !< ECC Data Lower 16 Bits */
/* FSITX_TX_ECC_DATA[DATA_HIGH] Bits */
#define FSITX_TX_ECC_DATA_DATA_HIGH_OFS          (16)                            /* !< DATA_HIGH Offset */
#define FSITX_TX_ECC_DATA_DATA_HIGH_MASK         ((uint32_t)0xFFFF0000U)         /* !< ECC Data Upper 16 Bits */

/* FSITX_TX_ECC_VAL Bits */
/* FSITX_TX_ECC_VAL[ECC_VAL] Bits */
#define FSITX_TX_ECC_VAL_ECC_VAL_OFS             (0)                             /* !< ECC_VAL Offset */
#define FSITX_TX_ECC_VAL_ECC_VAL_MASK            ((uint16_t)0x0000007FU)         /* !< Computed ECC Value */

/* FSITX_TX_DLYLINE_CTRL Bits */
/* FSITX_TX_DLYLINE_CTRL[TXCLK_DLY] Bits */
#define FSITX_TX_DLYLINE_CTRL_TXCLK_DLY_OFS      (0)                             /* !< TXCLK_DLY Offset */
#define FSITX_TX_DLYLINE_CTRL_TXCLK_DLY_MASK     ((uint16_t)0x0000001FU)         /* !< Delay Line Tap Select for TXCLK */
/* FSITX_TX_DLYLINE_CTRL[TXD0_DLY] Bits */
#define FSITX_TX_DLYLINE_CTRL_TXD0_DLY_OFS       (5)                             /* !< TXD0_DLY Offset */
#define FSITX_TX_DLYLINE_CTRL_TXD0_DLY_MASK      ((uint16_t)0x000003E0U)         /* !< Delay Line Tap Select for TXD0 */
/* FSITX_TX_DLYLINE_CTRL[TXD1_DLY] Bits */
#define FSITX_TX_DLYLINE_CTRL_TXD1_DLY_OFS       (10)                            /* !< TXD1_DLY Offset */
#define FSITX_TX_DLYLINE_CTRL_TXD1_DLY_MASK      ((uint16_t)0x00007C00U)         /* !< Delay Line Tap Select for TXD1 */

/* FSITX_TX_BUF_BASE Bits */
/* FSITX_TX_BUF_BASE[BASE_ADDRESS] Bits */
#define FSITX_TX_BUF_BASE_BASE_ADDRESS_OFS       (0)                             /* !< BASE_ADDRESS Offset */
#define FSITX_TX_BUF_BASE_BASE_ADDRESS_MASK      ((uint16_t)0x0000FFFFU)         /* !< Transmit Data Buffer Base Address */


#ifdef __cplusplus
}
#endif

#endif /* hw_fsitx__include */


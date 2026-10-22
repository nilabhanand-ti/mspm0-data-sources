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

#ifndef hw_escss__include
#define hw_escss__include


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
* ESCSS Registers
******************************************************************************/


/** @addtogroup ESCSS_CONFIG
  @{
*/

typedef struct {
  __IO uint32_t CONFIG_LOCK;                       /* !< (@ 0x00000000) EtherCATSS Configuration Lock */
  __IO uint32_t MISC_IO_CONFIG;                    /* !< (@ 0x00000004) RESET_IN, EEPROM IO connections select */
  __IO uint32_t PHY_IO_CONFIG;                     /* !< (@ 0x00000008) Control Register of ESCSS */
       uint32_t RESERVED0[2];
  __IO uint32_t GPIN_SEL;                          /* !< (@ 0x00000014) GPIN Select between IO PAD & tieoff */
       uint32_t RESERVED1[4];
  __IO uint32_t MISC_CONFIG;                       /* !< (@ 0x00000028) Miscelleneous Configuration */
} ESCSS_CONFIG_Regs;

/*@}*/ /* end of group ESCSS_CONFIG */

/** @addtogroup ESCSS
  @{
*/

typedef struct {
  __IO uint32_t IPREVNUM;                          /* !< (@ 0x00000000) IP Revision Number */
  __IO uint32_t INTR_RIS;                          /* !< (@ 0x00000004) EtherCATSS Interrupt Raw Status */
  __IO uint32_t INTR_MASK;                         /* !< (@ 0x00000008) EtherCATSS Interrupt Mask */
  __IO uint32_t INTR_MIS;                          /* !< (@ 0x0000000C) EtherCATSS Masked Interrupt Status */
  __IO uint32_t INTR_CLR;                          /* !< (@ 0x00000010) EtherCATSS Interrupt Clear */
  __IO uint32_t INTR_SET;                          /* !< (@ 0x00000014) EtherCATSS Interrupt Set to emulate */
  __IO uint32_t LATCH_SEL;                         /* !< (@ 0x00000018) Select for Latch0/1 inputs and LATCHIN input */
  __IO uint32_t ACCESS_CTRL;                       /* !< (@ 0x0000001C) PDI interface access control config. */
  __IO uint32_t GPIN_DAT;                          /* !< (@ 0x00000020) GPIN data capture for debug & override */
  __IO uint32_t GPIN_PIPE;                         /* !< (@ 0x00000024) GPIN pipeline select */
  __IO uint32_t GPIN_GRP_CAP_SEL;                  /* !< (@ 0x00000028) GPIN pipe group capture trigger */
  __IO uint32_t GPOUT_DAT;                         /* !< (@ 0x0000002C) GPOUT data capture for debug & override */
  __IO uint32_t GPOUT_PIPE;                        /* !< (@ 0x00000030) GPOUT pipeline select */
  __IO uint32_t GPOUT_GRP_CAP_SEL;                 /* !< (@ 0x00000034) GPOUT pipe group capture trigger */
  __IO uint32_t MEM_TEST;                          /* !< (@ 0x00000038) Memory Test Control */
  __IO uint32_t RESET_DEST_CONFIG;                 /* !< (@ 0x0000003C) ResetOut impact or destination config */
  __IO uint32_t SYNC0_CONFIG;                      /* !< (@ 0x00000040) SYNC0 Configuration for various triggers */
  __IO uint32_t SYNC1_CONFIG;                      /* !< (@ 0x00000044) SYNC1 Configuration for various triggers */
} ESCSS_Regs;

/*@}*/ /* end of group ESCSS */



/******************************************************************************
* ESCSS Register Offsets
******************************************************************************/
#define ESCSS_IPREVNUM                           (0x00000000U)
#define ESCSS_INTR_RIS                           (0x00000004U)
#define ESCSS_INTR_MASK                          (0x00000008U)
#define ESCSS_INTR_MIS                           (0x0000000CU)
#define ESCSS_INTR_CLR                           (0x00000010U)
#define ESCSS_INTR_SET                           (0x00000014U)
#define ESCSS_LATCH_SEL                          (0x00000018U)
#define ESCSS_ACCESS_CTRL                        (0x0000001CU)
#define ESCSS_GPIN_DAT                           (0x00000020U)
#define ESCSS_GPIN_PIPE                          (0x00000024U)
#define ESCSS_GPIN_GRP_CAP_SEL                   (0x00000028U)
#define ESCSS_GPOUT_DAT                          (0x0000002CU)
#define ESCSS_GPOUT_PIPE                         (0x00000030U)
#define ESCSS_GPOUT_GRP_CAP_SEL                  (0x00000034U)
#define ESCSS_MEM_TEST                           (0x00000038U)
#define ESCSS_RESET_DEST_CONFIG                  (0x0000003CU)
#define ESCSS_SYNC0_CONFIG                       (0x00000040U)
#define ESCSS_SYNC1_CONFIG                       (0x00000044U)

#define ESCSS_CONFIG_LOCK                        (0x00000000U)
#define ESCSS_MISC_IO_CONFIG                     (0x00000004U)
#define ESCSS_PHY_IO_CONFIG                      (0x00000008U)
#define ESCSS_GPIN_SEL                           (0x00000014U)
#define ESCSS_MISC_CONFIG                        (0x00000028U)



#if defined ( __CC_ARM )
#pragma no_anon_unions
#endif

/******************************************************************************
* ESCSS Register Control Bits
******************************************************************************/

/* ESCSS_CONFIG_LOCK Bits */
/* ESCSS_CONFIG_LOCK[LOCK_ENABLE] Bits */
#define ESCSS_CONFIG_LOCK_LOCK_ENABLE_OFS        (0U)                            /* !< LOCK_ENABLE Offset */
#define ESCSS_CONFIG_LOCK_LOCK_ENABLE_MASK       ((uint32_t)0x00000001U)         /* !< Locking writes to ECATSS */
/* ESCSS_CONFIG_LOCK[IO_CONFIG_ENABLE] Bits */
#define ESCSS_CONFIG_LOCK_IO_CONFIG_ENABLE_OFS   (4U)                            /* !< IO_CONFIG_ENABLE Offset */
#define ESCSS_CONFIG_LOCK_IO_CONFIG_ENABLE_MASK  ((uint32_t)0x00000010U)         /* !< Locking the IO Configuration */
/* ESCSS_CONFIG_LOCK[WRITE_KEY] Bits */
#define ESCSS_CONFIG_LOCK_WRITE_KEY_OFS          (8U)                            /* !< WRITE_KEY Offset */
#define ESCSS_CONFIG_LOCK_WRITE_KEY_MASK         ((uint32_t)0x0000FF00U)         /* !< Key to enable writing lock */

/* ESCSS_MISC_IO_CONFIG Bits */
/* ESCSS_MISC_IO_CONFIG[EEPROM_I2C_IO_EN] Bits */
#define ESCSS_MISC_IO_CONFIG_EEPROM_I2C_IO_EN_OFS (1U)                            /* !< EEPROM_I2C_IO_EN Offset */
#define ESCSS_MISC_IO_CONFIG_EEPROM_I2C_IO_EN_MASK ((uint32_t)0x00000002U)         /* !< Enables the EEPROM I2C IOPAD
                                                                                    connection */
/* ESCSS_MISC_IO_CONFIG[WRITE_KEY] Bits */
#define ESCSS_MISC_IO_CONFIG_WRITE_KEY_OFS       (8U)                            /* !< WRITE_KEY Offset */
#define ESCSS_MISC_IO_CONFIG_WRITE_KEY_MASK      ((uint32_t)0x0000FF00U)         /* !< Key to enable writing lock */

/* ESCSS_PHY_IO_CONFIG Bits */
/* ESCSS_PHY_IO_CONFIG[PHY_PORT_CNT] Bits */
#define ESCSS_PHY_IO_CONFIG_PHY_PORT_CNT_OFS     (2U)                            /* !< PHY_PORT_CNT Offset */
#define ESCSS_PHY_IO_CONFIG_PHY_PORT_CNT_MASK    ((uint32_t)0x0000000CU)         /* !< Number of PHY port counts */
/* ESCSS_PHY_IO_CONFIG[TX_CLK_AUTO_COMP] Bits */
#define ESCSS_PHY_IO_CONFIG_TX_CLK_AUTO_COMP_OFS (6U)                            /* !< TX_CLK_AUTO_COMP Offset */
#define ESCSS_PHY_IO_CONFIG_TX_CLK_AUTO_COMP_MASK ((uint32_t)0x00000040U)         /* !< Selects TX_CLK IO to do Auto
                                                                                    compensation */
/* ESCSS_PHY_IO_CONFIG[WRITE_KEY] Bits */
#define ESCSS_PHY_IO_CONFIG_WRITE_KEY_OFS        (8U)                            /* !< WRITE_KEY Offset */
#define ESCSS_PHY_IO_CONFIG_WRITE_KEY_MASK       ((uint32_t)0x0000FF00U)         /* !< Key to enable writing lock */

/* ESCSS_GPIN_SEL Bits */
/* ESCSS_GPIN_SEL[GPIN_SEL] Bits */
#define ESCSS_GPIN_SEL_GPIN_SEL_OFS              (0U)                            /* !< GPIN_SEL Offset */
#define ESCSS_GPIN_SEL_GPIN_SEL_MASK             ((uint32_t)0xFFFFFFFFU)         /* !< Enable for GPI Connection to IO
                                                                                    pad. */

/* ESCSS_MISC_CONFIG Bits */
/* ESCSS_MISC_CONFIG[TX0_SHIFT_CONFIG] Bits */
#define ESCSS_MISC_CONFIG_TX0_SHIFT_CONFIG_OFS   (0U)                            /* !< TX0_SHIFT_CONFIG Offset */
#define ESCSS_MISC_CONFIG_TX0_SHIFT_CONFIG_MASK  ((uint32_t)0x00000003U)         /* !< TX Shift configuration for Port0 */
/* ESCSS_MISC_CONFIG[TX1_SHIFT_CONFIG] Bits */
#define ESCSS_MISC_CONFIG_TX1_SHIFT_CONFIG_OFS   (2U)                            /* !< TX1_SHIFT_CONFIG Offset */
#define ESCSS_MISC_CONFIG_TX1_SHIFT_CONFIG_MASK  ((uint32_t)0x0000000CU)         /* !< TX Shift configuration for Port1 */
/* ESCSS_MISC_CONFIG[EEPROM_SIZE] Bits */
#define ESCSS_MISC_CONFIG_EEPROM_SIZE_OFS        (4U)                            /* !< EEPROM_SIZE Offset */
#define ESCSS_MISC_CONFIG_EEPROM_SIZE_MASK       ((uint32_t)0x00000010U)         /* !< EEPROM Size bound select */
/* ESCSS_MISC_CONFIG[PDI_EMULATION] Bits */
#define ESCSS_MISC_CONFIG_PDI_EMULATION_OFS      (5U)                            /* !< PDI_EMULATION Offset */
#define ESCSS_MISC_CONFIG_PDI_EMULATION_MASK     ((uint32_t)0x00000020U)         /* !< PDI Emulation enable */
/* ESCSS_MISC_CONFIG[PHY_ADDR] Bits */
#define ESCSS_MISC_CONFIG_PHY_ADDR_OFS           (6U)                            /* !< PHY_ADDR Offset */
#define ESCSS_MISC_CONFIG_PHY_ADDR_MASK          ((uint32_t)0x000007C0U)         /* !< PHY Address Offset */

/* ESCSS_IPREVNUM Bits */
/* ESCSS_IPREVNUM[IP_REV_MINOR] Bits */
#define ESCSS_IPREVNUM_IP_REV_MINOR_OFS          (0U)                            /* !< IP_REV_MINOR Offset */
#define ESCSS_IPREVNUM_IP_REV_MINOR_MASK         ((uint32_t)0x0000000FU)         /* !< Minor IP Revision Number */
/* ESCSS_IPREVNUM[IP_REV_MAJOR] Bits */
#define ESCSS_IPREVNUM_IP_REV_MAJOR_OFS          (4U)                            /* !< IP_REV_MAJOR Offset */
#define ESCSS_IPREVNUM_IP_REV_MAJOR_MASK         ((uint32_t)0x000000F0U)         /* !< Major IP Revision Number */

/* ESCSS_INTR_RIS Bits */
/* ESCSS_INTR_RIS[SYNC0_RIS] Bits */
#define ESCSS_INTR_RIS_SYNC0_RIS_OFS             (0U)                            /* !< SYNC0_RIS Offset */
#define ESCSS_INTR_RIS_SYNC0_RIS_MASK            ((uint32_t)0x00000001U)         /* !< SYNC0 feature RIS */
/* ESCSS_INTR_RIS[SYNC1_RIS] Bits */
#define ESCSS_INTR_RIS_SYNC1_RIS_OFS             (1U)                            /* !< SYNC1_RIS Offset */
#define ESCSS_INTR_RIS_SYNC1_RIS_MASK            ((uint32_t)0x00000002U)         /* !< SYNC1 feature RIS */
/* ESCSS_INTR_RIS[IRQ_RIS] Bits */
#define ESCSS_INTR_RIS_IRQ_RIS_OFS               (2U)                            /* !< IRQ_RIS Offset */
#define ESCSS_INTR_RIS_IRQ_RIS_MASK              ((uint32_t)0x00000004U)         /* !< EtherCATSS IRQ RIS */
/* ESCSS_INTR_RIS[DMA_DONE_RIS] Bits */
#define ESCSS_INTR_RIS_DMA_DONE_RIS_OFS          (3U)                            /* !< DMA_DONE_RIS Offset */
#define ESCSS_INTR_RIS_DMA_DONE_RIS_MASK         ((uint32_t)0x00000008U)         /* !< DMA Done RIS */
/* ESCSS_INTR_RIS[TIMEOUT_ERR_RIS] Bits */
#define ESCSS_INTR_RIS_TIMEOUT_ERR_RIS_OFS       (4U)                            /* !< TIMEOUT_ERR_RIS Offset */
#define ESCSS_INTR_RIS_TIMEOUT_ERR_RIS_MASK      ((uint32_t)0x00000010U)         /* !< PDI bus Timeout Error RIS */
/* ESCSS_INTR_RIS[MASTER_RESET_RIS] Bits */
#define ESCSS_INTR_RIS_MASTER_RESET_RIS_OFS      (5U)                            /* !< MASTER_RESET_RIS Offset */
#define ESCSS_INTR_RIS_MASTER_RESET_RIS_MASK     ((uint32_t)0x00000020U)         /* !< ECAT RESET RIS */

/* ESCSS_INTR_MASK Bits */
/* ESCSS_INTR_MASK[SYNC0_MASK] Bits */
#define ESCSS_INTR_MASK_SYNC0_MASK_OFS           (0U)                            /* !< SYNC0_MASK Offset */
#define ESCSS_INTR_MASK_SYNC0_MASK_MASK          ((uint32_t)0x00000001U)         /* !< SYNC0 feature Mask */
/* ESCSS_INTR_MASK[SYNC1_MASK] Bits */
#define ESCSS_INTR_MASK_SYNC1_MASK_OFS           (1U)                            /* !< SYNC1_MASK Offset */
#define ESCSS_INTR_MASK_SYNC1_MASK_MASK          ((uint32_t)0x00000002U)         /* !< SYNC1 feature Mask */
/* ESCSS_INTR_MASK[IRQ_MASK] Bits */
#define ESCSS_INTR_MASK_IRQ_MASK_OFS             (2U)                            /* !< IRQ_MASK Offset */
#define ESCSS_INTR_MASK_IRQ_MASK_MASK            ((uint32_t)0x00000004U)         /* !< EtherCATSS IRQ Mask */
/* ESCSS_INTR_MASK[DMA_DONE_MASK] Bits */
#define ESCSS_INTR_MASK_DMA_DONE_MASK_OFS        (3U)                            /* !< DMA_DONE_MASK Offset */
#define ESCSS_INTR_MASK_DMA_DONE_MASK_MASK       ((uint32_t)0x00000008U)         /* !< DMA Done Mask */
/* ESCSS_INTR_MASK[TIMEOUT_ERR_MASK] Bits */
#define ESCSS_INTR_MASK_TIMEOUT_ERR_MASK_OFS     (4U)                            /* !< TIMEOUT_ERR_MASK Offset */
#define ESCSS_INTR_MASK_TIMEOUT_ERR_MASK_MASK    ((uint32_t)0x00000010U)         /* !< PDI Access Timeout Error Mask */
/* ESCSS_INTR_MASK[MASTER_RESET_MASK] Bits */
#define ESCSS_INTR_MASK_MASTER_RESET_MASK_OFS    (5U)                            /* !< MASTER_RESET_MASK Offset */
#define ESCSS_INTR_MASK_MASTER_RESET_MASK_MASK   ((uint32_t)0x00000020U)         /* !< EtherCAT Master Reset Mask */

/* ESCSS_INTR_MIS Bits */
/* ESCSS_INTR_MIS[SYNC0_MIS] Bits */
#define ESCSS_INTR_MIS_SYNC0_MIS_OFS             (0U)                            /* !< SYNC0_MIS Offset */
#define ESCSS_INTR_MIS_SYNC0_MIS_MASK            ((uint32_t)0x00000001U)         /* !< SYNC0 feature MIS */
/* ESCSS_INTR_MIS[SYNC1_MIS] Bits */
#define ESCSS_INTR_MIS_SYNC1_MIS_OFS             (1U)                            /* !< SYNC1_MIS Offset */
#define ESCSS_INTR_MIS_SYNC1_MIS_MASK            ((uint32_t)0x00000002U)         /* !< SYNC1 feature MIS */
/* ESCSS_INTR_MIS[IRQ_MIS] Bits */
#define ESCSS_INTR_MIS_IRQ_MIS_OFS               (2U)                            /* !< IRQ_MIS Offset */
#define ESCSS_INTR_MIS_IRQ_MIS_MASK              ((uint32_t)0x00000004U)         /* !< EtherCATSS IRQ MIS */
/* ESCSS_INTR_MIS[DMA_DONE_MIS] Bits */
#define ESCSS_INTR_MIS_DMA_DONE_MIS_OFS          (3U)                            /* !< DMA_DONE_MIS Offset */
#define ESCSS_INTR_MIS_DMA_DONE_MIS_MASK         ((uint32_t)0x00000008U)         /* !< DMA Done MIS */
/* ESCSS_INTR_MIS[TIMEOUT_ERR_MIS] Bits */
#define ESCSS_INTR_MIS_TIMEOUT_ERR_MIS_OFS       (4U)                            /* !< TIMEOUT_ERR_MIS Offset */
#define ESCSS_INTR_MIS_TIMEOUT_ERR_MIS_MASK      ((uint32_t)0x00000010U)         /* !< PDI bus Timeout Error MIS */
/* ESCSS_INTR_MIS[MASTER_RESET_MIS] Bits */
#define ESCSS_INTR_MIS_MASTER_RESET_MIS_OFS      (5U)                            /* !< MASTER_RESET_MIS Offset */
#define ESCSS_INTR_MIS_MASTER_RESET_MIS_MASK     ((uint32_t)0x00000020U)         /* !< EtherCAT Master Reset MIS */

/* ESCSS_INTR_CLR Bits */
/* ESCSS_INTR_CLR[SYNC0_CLR] Bits */
#define ESCSS_INTR_CLR_SYNC0_CLR_OFS             (0U)                            /* !< SYNC0_CLR Offset */
#define ESCSS_INTR_CLR_SYNC0_CLR_MASK            ((uint32_t)0x00000001U)         /* !< SYNC0 feature Clear */
/* ESCSS_INTR_CLR[SYNC1_CLR] Bits */
#define ESCSS_INTR_CLR_SYNC1_CLR_OFS             (1U)                            /* !< SYNC1_CLR Offset */
#define ESCSS_INTR_CLR_SYNC1_CLR_MASK            ((uint32_t)0x00000002U)         /* !< SYNC1 feature Clear */
/* ESCSS_INTR_CLR[IRQ_CLR] Bits */
#define ESCSS_INTR_CLR_IRQ_CLR_OFS               (2U)                            /* !< IRQ_CLR Offset */
#define ESCSS_INTR_CLR_IRQ_CLR_MASK              ((uint32_t)0x00000004U)         /* !< EtherCATSS IRQ Clear */
/* ESCSS_INTR_CLR[DMA_DONE_CLR] Bits */
#define ESCSS_INTR_CLR_DMA_DONE_CLR_OFS          (3U)                            /* !< DMA_DONE_CLR Offset */
#define ESCSS_INTR_CLR_DMA_DONE_CLR_MASK         ((uint32_t)0x00000008U)         /* !< DMA Done Clear */
/* ESCSS_INTR_CLR[TIMEOUT_ERR_CLR] Bits */
#define ESCSS_INTR_CLR_TIMEOUT_ERR_CLR_OFS       (4U)                            /* !< TIMEOUT_ERR_CLR Offset */
#define ESCSS_INTR_CLR_TIMEOUT_ERR_CLR_MASK      ((uint32_t)0x00000010U)         /* !< PDI Access Timeout Error Clear */
/* ESCSS_INTR_CLR[MASTER_RESET_CLR] Bits */
#define ESCSS_INTR_CLR_MASTER_RESET_CLR_OFS      (5U)                            /* !< MASTER_RESET_CLR Offset */
#define ESCSS_INTR_CLR_MASTER_RESET_CLR_MASK     ((uint32_t)0x00000020U)         /* !< EtherCAT Master Reset Clear */

/* ESCSS_INTR_SET Bits */
/* ESCSS_INTR_SET[SYNC0_SET] Bits */
#define ESCSS_INTR_SET_SYNC0_SET_OFS             (0U)                            /* !< SYNC0_SET Offset */
#define ESCSS_INTR_SET_SYNC0_SET_MASK            ((uint32_t)0x00000001U)         /* !< SYNC0 Set Emulate */
/* ESCSS_INTR_SET[SYNC1_SET] Bits */
#define ESCSS_INTR_SET_SYNC1_SET_OFS             (1U)                            /* !< SYNC1_SET Offset */
#define ESCSS_INTR_SET_SYNC1_SET_MASK            ((uint32_t)0x00000002U)         /* !< SYNC1 Set Emulate */
/* ESCSS_INTR_SET[IRQ_SET] Bits */
#define ESCSS_INTR_SET_IRQ_SET_OFS               (2U)                            /* !< IRQ_SET Offset */
#define ESCSS_INTR_SET_IRQ_SET_MASK              ((uint32_t)0x00000004U)         /* !< EtherCATSS IRQ Set Emulate */
/* ESCSS_INTR_SET[DMA_DONE_SET] Bits */
#define ESCSS_INTR_SET_DMA_DONE_SET_OFS          (3U)                            /* !< DMA_DONE_SET Offset */
#define ESCSS_INTR_SET_DMA_DONE_SET_MASK         ((uint32_t)0x00000008U)         /* !< DMA Done Set Emulate */
/* ESCSS_INTR_SET[TIMEOUT_ERR_SET] Bits */
#define ESCSS_INTR_SET_TIMEOUT_ERR_SET_OFS       (4U)                            /* !< TIMEOUT_ERR_SET Offset */
#define ESCSS_INTR_SET_TIMEOUT_ERR_SET_MASK      ((uint32_t)0x00000010U)         /* !< PDI Access Timeout Error Set
                                                                                    Emulate */
/* ESCSS_INTR_SET[MASTER_RESET_SET] Bits */
#define ESCSS_INTR_SET_MASTER_RESET_SET_OFS      (5U)                            /* !< MASTER_RESET_SET Offset */
#define ESCSS_INTR_SET_MASTER_RESET_SET_MASK     ((uint32_t)0x00000020U)         /* !< EtherCAT Master Reset Emulate */
/* ESCSS_INTR_SET[WRITE_KEY] Bits */
#define ESCSS_INTR_SET_WRITE_KEY_OFS             (8U)                            /* !< WRITE_KEY Offset */
#define ESCSS_INTR_SET_WRITE_KEY_MASK            ((uint32_t)0x0000FF00U)         /* !< Key to enable writing lock */

/* ESCSS_LATCH_SEL Bits */
/* ESCSS_LATCH_SEL[LATCH0_SELECT] Bits */
#define ESCSS_LATCH_SEL_LATCH0_SELECT_OFS        (0U)                            /* !< LATCH0_SELECT Offset */
#define ESCSS_LATCH_SEL_LATCH0_SELECT_MASK       ((uint32_t)0x0000001FU)         /* !< LATCH0 Inputs mux select */
/* ESCSS_LATCH_SEL[LATCH1_SELECT] Bits */
#define ESCSS_LATCH_SEL_LATCH1_SELECT_OFS        (8U)                            /* !< LATCH1_SELECT Offset */
#define ESCSS_LATCH_SEL_LATCH1_SELECT_MASK       ((uint32_t)0x00001F00U)         /* !< LATCH1 Inputs mux select */

/* ESCSS_ACCESS_CTRL Bits */
/* ESCSS_ACCESS_CTRL[WAIT_STATES] Bits */
#define ESCSS_ACCESS_CTRL_WAIT_STATES_OFS        (0U)                            /* !< WAIT_STATES Offset */
#define ESCSS_ACCESS_CTRL_WAIT_STATES_MASK       ((uint32_t)0x0000007FU)         /* !< Minimum Wait States for VBUS Bridge */
/* ESCSS_ACCESS_CTRL[EN_TIMEOUT] Bits */
#define ESCSS_ACCESS_CTRL_EN_TIMEOUT_OFS         (7U)                            /* !< EN_TIMEOUT Offset */
#define ESCSS_ACCESS_CTRL_EN_TIMEOUT_MASK        ((uint32_t)0x00000080U)         /* !< PDI Timeout enable */
/* ESCSS_ACCESS_CTRL[ENABLE_DEBUG_ACCESS] Bits */
#define ESCSS_ACCESS_CTRL_ENABLE_DEBUG_ACCESS_OFS (9U)                            /* !< ENABLE_DEBUG_ACCESS Offset */
#define ESCSS_ACCESS_CTRL_ENABLE_DEBUG_ACCESS_MASK ((uint32_t)0x00000200U)         /* !< Debug access enable */
/* ESCSS_ACCESS_CTRL[TIMEOUT_COUNT] Bits */
#define ESCSS_ACCESS_CTRL_TIMEOUT_COUNT_OFS      (16U)                           /* !< TIMEOUT_COUNT Offset */
#define ESCSS_ACCESS_CTRL_TIMEOUT_COUNT_MASK     ((uint32_t)0x0FFF0000U)         /* !< Max timecount programmed and count
                                                                                    while enabled. */

/* ESCSS_GPIN_DAT Bits */
/* ESCSS_GPIN_DAT[GPIN_DAT] Bits */
#define ESCSS_GPIN_DAT_GPIN_DAT_OFS              (0U)                            /* !< GPIN_DAT Offset */
#define ESCSS_GPIN_DAT_GPIN_DAT_MASK             ((uint32_t)0xFFFFFFFFU)         /* !< Registered GPI data driving
                                                                                    EtherCAT GPI input */

/* ESCSS_GPIN_PIPE Bits */
/* ESCSS_GPIN_PIPE[GPI_PIPE] Bits */
#define ESCSS_GPIN_PIPE_GPI_PIPE_OFS             (0U)                            /* !< GPI_PIPE Offset */
#define ESCSS_GPIN_PIPE_GPI_PIPE_MASK            ((uint32_t)0xFFFFFFFFU)         /* !< GPI IO inputs pipeline enable. */

/* ESCSS_GPIN_GRP_CAP_SEL Bits */
/* ESCSS_GPIN_GRP_CAP_SEL[GPI_GRP_CAP_SEL0] Bits */
#define ESCSS_GPIN_GRP_CAP_SEL_GPI_GRP_CAP_SEL0_OFS (0U)                            /* !< GPI_GRP_CAP_SEL0 Offset */
#define ESCSS_GPIN_GRP_CAP_SEL_GPI_GRP_CAP_SEL0_MASK ((uint32_t)0x00000007U)         /* !< GPI7-0 capture trigger select */
/* ESCSS_GPIN_GRP_CAP_SEL[GPI_GRP_CAP_SEL1] Bits */
#define ESCSS_GPIN_GRP_CAP_SEL_GPI_GRP_CAP_SEL1_OFS (4U)                            /* !< GPI_GRP_CAP_SEL1 Offset */
#define ESCSS_GPIN_GRP_CAP_SEL_GPI_GRP_CAP_SEL1_MASK ((uint32_t)0x00000070U)         /* !< GPI15-8 capture trigger select */
/* ESCSS_GPIN_GRP_CAP_SEL[GPI_GRP_CAP_SEL2] Bits */
#define ESCSS_GPIN_GRP_CAP_SEL_GPI_GRP_CAP_SEL2_OFS (8U)                            /* !< GPI_GRP_CAP_SEL2 Offset */
#define ESCSS_GPIN_GRP_CAP_SEL_GPI_GRP_CAP_SEL2_MASK ((uint32_t)0x00000700U)         /* !< GPI23-16 capture trigger select */
/* ESCSS_GPIN_GRP_CAP_SEL[GPI_GRP_CAP_SEL3] Bits */
#define ESCSS_GPIN_GRP_CAP_SEL_GPI_GRP_CAP_SEL3_OFS (12U)                           /* !< GPI_GRP_CAP_SEL3 Offset */
#define ESCSS_GPIN_GRP_CAP_SEL_GPI_GRP_CAP_SEL3_MASK ((uint32_t)0x00007000U)         /* !< GPI31-24 capture trigger select */

/* ESCSS_GPOUT_DAT Bits */
/* ESCSS_GPOUT_DAT[GPOUT_DAT] Bits */
#define ESCSS_GPOUT_DAT_GPOUT_DAT_OFS            (0U)                            /* !< GPOUT_DAT Offset */
#define ESCSS_GPOUT_DAT_GPOUT_DAT_MASK           ((uint32_t)0xFFFFFFFFU)         /* !< Registered GPO data from EtherCAT
                                                                                    o/p */

/* ESCSS_GPOUT_PIPE Bits */
/* ESCSS_GPOUT_PIPE[GPO_PIPE] Bits */
#define ESCSS_GPOUT_PIPE_GPO_PIPE_OFS            (0U)                            /* !< GPO_PIPE Offset */
#define ESCSS_GPOUT_PIPE_GPO_PIPE_MASK           ((uint32_t)0xFFFFFFFFU)         /* !< GPO output pipeline enable. */

/* ESCSS_GPOUT_GRP_CAP_SEL Bits */
/* ESCSS_GPOUT_GRP_CAP_SEL[GPO_GRP_CAP_SEL0] Bits */
#define ESCSS_GPOUT_GRP_CAP_SEL_GPO_GRP_CAP_SEL0_OFS (0U)                            /* !< GPO_GRP_CAP_SEL0 Offset */
#define ESCSS_GPOUT_GRP_CAP_SEL_GPO_GRP_CAP_SEL0_MASK ((uint32_t)0x00000003U)         /* !< GPO7-0 capture trigger select */
/* ESCSS_GPOUT_GRP_CAP_SEL[GPO_GRP_CAP_SEL1] Bits */
#define ESCSS_GPOUT_GRP_CAP_SEL_GPO_GRP_CAP_SEL1_OFS (4U)                            /* !< GPO_GRP_CAP_SEL1 Offset */
#define ESCSS_GPOUT_GRP_CAP_SEL_GPO_GRP_CAP_SEL1_MASK ((uint32_t)0x00000030U)         /* !< GPO15-8 capture trigger select */
/* ESCSS_GPOUT_GRP_CAP_SEL[GPO_GRP_CAP_SEL2] Bits */
#define ESCSS_GPOUT_GRP_CAP_SEL_GPO_GRP_CAP_SEL2_OFS (8U)                            /* !< GPO_GRP_CAP_SEL2 Offset */
#define ESCSS_GPOUT_GRP_CAP_SEL_GPO_GRP_CAP_SEL2_MASK ((uint32_t)0x00000300U)         /* !< GPO23-16 capture trigger select */
/* ESCSS_GPOUT_GRP_CAP_SEL[GPO_GRP_CAP_SEL3] Bits */
#define ESCSS_GPOUT_GRP_CAP_SEL_GPO_GRP_CAP_SEL3_OFS (12U)                           /* !< GPO_GRP_CAP_SEL3 Offset */
#define ESCSS_GPOUT_GRP_CAP_SEL_GPO_GRP_CAP_SEL3_MASK ((uint32_t)0x00003000U)         /* !< GPO31-24 capture trigger select */

/* ESCSS_MEM_TEST Bits */
/* ESCSS_MEM_TEST[INITIATE_MEM_INIT] Bits */
#define ESCSS_MEM_TEST_INITIATE_MEM_INIT_OFS     (0U)                            /* !< INITIATE_MEM_INIT Offset */
#define ESCSS_MEM_TEST_INITIATE_MEM_INIT_MASK    ((uint32_t)0x00000001U)         /* !< Initialize memory init */
/* ESCSS_MEM_TEST[MEM_INIT_DONE] Bits */
#define ESCSS_MEM_TEST_MEM_INIT_DONE_OFS         (1U)                            /* !< MEM_INIT_DONE Offset */
#define ESCSS_MEM_TEST_MEM_INIT_DONE_MASK        ((uint32_t)0x00000002U)         /* !< Memory Init done status */

/* ESCSS_RESET_DEST_CONFIG Bits */
/* ESCSS_RESET_DEST_CONFIG[CPU_RESET_EN] Bits */
#define ESCSS_RESET_DEST_CONFIG_CPU_RESET_EN_OFS (0U)                            /* !< CPU_RESET_EN Offset */
#define ESCSS_RESET_DEST_CONFIG_CPU_RESET_EN_MASK ((uint32_t)0x00000001U)         /* !< CPU reset enable for ResetOut */
/* ESCSS_RESET_DEST_CONFIG[CPU_NMI_EN] Bits */
#define ESCSS_RESET_DEST_CONFIG_CPU_NMI_EN_OFS   (1U)                            /* !< CPU_NMI_EN Offset */
#define ESCSS_RESET_DEST_CONFIG_CPU_NMI_EN_MASK  ((uint32_t)0x00000002U)         /* !< CPU NMI enable for ResetOut */
/* ESCSS_RESET_DEST_CONFIG[CPU_INT_EN] Bits */
#define ESCSS_RESET_DEST_CONFIG_CPU_INT_EN_OFS   (2U)                            /* !< CPU_INT_EN Offset */
#define ESCSS_RESET_DEST_CONFIG_CPU_INT_EN_MASK  ((uint32_t)0x00000004U)         /* !< CPU Interrupt enable for ResetOut */
/* ESCSS_RESET_DEST_CONFIG[DEVICE_RESET_EN] Bits */
#define ESCSS_RESET_DEST_CONFIG_DEVICE_RESET_EN_OFS (7U)                            /* !< DEVICE_RESET_EN Offset */
#define ESCSS_RESET_DEST_CONFIG_DEVICE_RESET_EN_MASK ((uint32_t)0x00000080U)         /* !< Enables RESET_OUT to impact the
                                                                                    device reset */
/* ESCSS_RESET_DEST_CONFIG[WRITE_KEY] Bits */
#define ESCSS_RESET_DEST_CONFIG_WRITE_KEY_OFS    (8U)                            /* !< WRITE_KEY Offset */
#define ESCSS_RESET_DEST_CONFIG_WRITE_KEY_MASK   ((uint32_t)0x0000FF00U)         /* !< Key to enable writing lock */

/* ESCSS_SYNC0_CONFIG Bits */
/* ESCSS_SYNC0_CONFIG[CPUX_INT_EN] Bits */
#define ESCSS_SYNC0_CONFIG_CPUX_INT_EN_OFS       (0U)                            /* !< CPUX_INT_EN Offset */
#define ESCSS_SYNC0_CONFIG_CPUX_INT_EN_MASK      ((uint32_t)0x00000001U)         /* !< Connects the SYNC0 to CPUx
                                                                                    Interrupt */
/* ESCSS_SYNC0_CONFIG[DMAX_TRIG_EN] Bits */
#define ESCSS_SYNC0_CONFIG_DMAX_TRIG_EN_OFS      (2U)                            /* !< DMAX_TRIG_EN Offset */
#define ESCSS_SYNC0_CONFIG_DMAX_TRIG_EN_MASK     ((uint32_t)0x00000004U)         /* !< Connects the SYNC0 to DMA Trigger */
/* ESCSS_SYNC0_CONFIG[WRITE_KEY] Bits */
#define ESCSS_SYNC0_CONFIG_WRITE_KEY_OFS         (8U)                            /* !< WRITE_KEY Offset */
#define ESCSS_SYNC0_CONFIG_WRITE_KEY_MASK        ((uint32_t)0x0000FF00U)         /* !< Key to enable writing lock */

/* ESCSS_SYNC1_CONFIG Bits */
/* ESCSS_SYNC1_CONFIG[CPUX_INT_EN] Bits */
#define ESCSS_SYNC1_CONFIG_CPUX_INT_EN_OFS       (0U)                            /* !< CPUX_INT_EN Offset */
#define ESCSS_SYNC1_CONFIG_CPUX_INT_EN_MASK      ((uint32_t)0x00000001U)         /* !< Connects the SYNC1 to CPUx
                                                                                    Interrupt */
/* ESCSS_SYNC1_CONFIG[DMAX_TRIG_EN] Bits */
#define ESCSS_SYNC1_CONFIG_DMAX_TRIG_EN_OFS      (2U)                            /* !< DMAX_TRIG_EN Offset */
#define ESCSS_SYNC1_CONFIG_DMAX_TRIG_EN_MASK     ((uint32_t)0x00000004U)         /* !< Connects the SYNC1 to CPUx DMA
                                                                                    Trigger */
/* ESCSS_SYNC1_CONFIG[WRITE_KEY] Bits */
#define ESCSS_SYNC1_CONFIG_WRITE_KEY_OFS         (8U)                            /* !< WRITE_KEY Offset */
#define ESCSS_SYNC1_CONFIG_WRITE_KEY_MASK        ((uint32_t)0x0000FF00U)         /* !< Key to enable writing lock */


#ifdef __cplusplus
}
#endif

#endif /* hw_escss__include */


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

#ifndef hw_pinmap__include
#define hw_pinmap__include

/* Use standard integer types with explicit width */
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
 extern "C" {
#endif

/******************************************************************************
* IOMUX Pin Definitions                                                       *
******************************************************************************/

typedef enum
{
  IOMUX_PINCM_PA0        = 0,
  IOMUX_PINCM_PA1        = 1,
  IOMUX_PINCM_PA2        = 2,
  IOMUX_PINCM_PA3        = 3,
  IOMUX_PINCM_PA4        = 4,
  IOMUX_PINCM_PA5        = 5,
  IOMUX_PINCM_PA6        = 6,
  IOMUX_PINCM_PA7        = 7,
  IOMUX_PINCM_PA8        = 8,
  IOMUX_PINCM_PA9        = 9,
  IOMUX_PINCM_PA10       = 10,
  IOMUX_PINCM_PA11       = 11,
  IOMUX_PINCM_PA12       = 12,
  IOMUX_PINCM_PA13       = 13,
  IOMUX_PINCM_PA14       = 14,
  IOMUX_PINCM_PA15       = 15,
  IOMUX_PINCM_PA16       = 16,
  IOMUX_PINCM_PA17       = 17,
  IOMUX_PINCM_PA18       = 18,
  IOMUX_PINCM_PA19       = 19,
  IOMUX_PINCM_PA20       = 20,
  IOMUX_PINCM_PA21       = 21,
  IOMUX_PINCM_PA22       = 22,
  IOMUX_PINCM_PA23       = 23,
  IOMUX_PINCM_PA24       = 24,
  IOMUX_PINCM_PA25       = 25,
  IOMUX_PINCM_PA26       = 26,
  IOMUX_PINCM_PA27       = 27,
  IOMUX_PINCM_PA28       = 28,
  IOMUX_PINCM_PA29       = 29,
  IOMUX_PINCM_PA30       = 30,
  IOMUX_PINCM_PA31       = 31,
  IOMUX_PINCM_PB0        = 32,
  IOMUX_PINCM_PB1        = 33,
  IOMUX_PINCM_PB2        = 34,
  IOMUX_PINCM_PB3        = 35,
  IOMUX_PINCM_PB4        = 36,
  IOMUX_PINCM_PB5        = 37,
  IOMUX_PINCM_PB6        = 38,
  IOMUX_PINCM_PB7        = 39,
  IOMUX_PINCM_PB8        = 40,
  IOMUX_PINCM_PB9        = 41,
  IOMUX_PINCM_PB10       = 42,
  IOMUX_PINCM_PB11       = 43,
  IOMUX_PINCM_PB12       = 44,
  IOMUX_PINCM_PB13       = 45,
  IOMUX_PINCM_PB14       = 46,
  IOMUX_PINCM_PB15       = 47,
  IOMUX_PINCM_PB16       = 48,
  IOMUX_PINCM_PB17       = 49,
  IOMUX_PINCM_PB18       = 50,
  IOMUX_PINCM_PB19       = 51,
  IOMUX_PINCM_PB20       = 52,
  IOMUX_PINCM_PB21       = 53,
  IOMUX_PINCM_PB22       = 54,
  IOMUX_PINCM_PB23       = 55,
  IOMUX_PINCM_PB24       = 56,
  IOMUX_PINCM_PB25       = 57,
  IOMUX_PINCM_PB26       = 58,
  IOMUX_PINCM_PB27       = 59,
  IOMUX_PINCM_PB28       = 60,
  IOMUX_PINCM_PB29       = 61,
  IOMUX_PINCM_PB30       = 62,
  IOMUX_PINCM_PB31       = 63,
  IOMUX_PINCM_PC0        = 64,
  IOMUX_PINCM_PC1        = 65,
  IOMUX_PINCM_PC2        = 66,
  IOMUX_PINCM_PC3        = 67,
  IOMUX_PINCM_PC4        = 68,
  IOMUX_PINCM_PC5        = 69,
  IOMUX_PINCM_PC6        = 70,
  IOMUX_PINCM_PC7        = 71,
  IOMUX_PINCM_PC8        = 72,
  IOMUX_PINCM_PC9        = 73,
  IOMUX_PINCM_PC10       = 74,
  IOMUX_PINCM_PC11       = 75,
  IOMUX_PINCM_PC12       = 76,
  IOMUX_PINCM_PC13       = 77,
  IOMUX_PINCM_PC14       = 78,
  IOMUX_PINCM_PC15       = 79,
  IOMUX_PINCM_PC16_X1    = 80,
  IOMUX_PINCM_PC17_X2    = 81,
  IOMUX_PINCM_PC18       = 82,
  IOMUX_PINCM_PC19       = 83,
  IOMUX_PINCM_PC20       = 84,
  IOMUX_PINCM_PC21       = 85,
  IOMUX_PINCM_PC22       = 86,
  IOMUX_PINCM_PC23       = 87,
  IOMUX_PINCM_PC24       = 88,
  IOMUX_PINCM_PC25       = 89,
  IOMUX_PINCM_PC26       = 90,
  IOMUX_PINCM_PC27       = 91,
  IOMUX_PINCM_PC28       = 92,
  IOMUX_PINCM_PC29       = 93,
  IOMUX_PINCM_PC30       = 94,
  IOMUX_PINCM_PC31       = 95,
  IOMUX_PINCM_PD0        = 96,
  IOMUX_PINCM_PD1        = 97,
  IOMUX_PINCM_PD2        = 98,
  IOMUX_PINCM_PD3        = 99,
  IOMUX_PINCM_PD4        = 100,
  IOMUX_PINCM_PD5        = 101,
  IOMUX_PINCM_PD6        = 102,
  IOMUX_PINCM_PD7        = 103,
  IOMUX_PINCM_PD8        = 104,
  IOMUX_PINCM_PD9        = 105,
  IOMUX_PINCM_NRST       = 106,
  IOMUX_PINCM_PD11       = 107,
  IOMUX_PINCM_PD12       = 108,
  IOMUX_PINCM_PD13       = 109,
  IOMUX_PINCM_PD14       = 110,
  IOMUX_PINCM_PD15       = 111,
  IOMUX_PINCM_PD16       = 112,
  IOMUX_PINCM_PD17       = 113,
  IOMUX_PINCM_PD18       = 114,
  IOMUX_PINCM_PD19       = 115,
  IOMUX_PINCM_PD20       = 116,
} IOMUX_PINCM_t;

/* IOMUX_PINCM[0] Bits (Pin name : PA0)*/
#define IOMUX_PA0_GPIO00                         1U
#define IOMUX_PA0_ETPWM3_1A                      2U
#define IOMUX_PA0_ETPWM0_1A                      3U
#define IOMUX_PA0_TIMG12_0_CCP0                  4U
#define IOMUX_PA0_TIMG4_0_CCP0                   5U
#define IOMUX_PA0_UC5_RX_SCL                     6U
#define IOMUX_PA0_UC4_TX_SDA_PICO                7U
#define IOMUX_PA0_UC1_CTS_CS0                    8U
#define IOMUX_PA0_UC1_TX_SDA_PICO                9U
#define IOMUX_PA0_ETPWM4_1A                      10U
#define IOMUX_PA0_UC2_RX_SCL                     11U
#define IOMUX_PA0_UC0_CTS_CS0                    13U
#define IOMUX_PA0_ESC_LED_LINK1_ACTIVE           14U
#define IOMUX_PA0_MCAN1_RX                       15U
#define IOMUX_PA0_OUTPUTXBAR8                    16U

/* IOMUX_PINCM[1] Bits (Pin name : PA1)*/
#define IOMUX_PA1_GPIO01                         1U
#define IOMUX_PA1_ETPWM3_1B                      2U
#define IOMUX_PA1_ETPWM1_1A                      3U
#define IOMUX_PA1_TIMG12_0_CCP1                  4U
#define IOMUX_PA1_TIMG4_0_CCP1                   5U
#define IOMUX_PA1_UC5_TX_SDA                     6U
#define IOMUX_PA1_UC4_RX_SCL_SCLK                7U
#define IOMUX_PA1_UC1_RTS_POCI                   8U
#define IOMUX_PA1_UC1_RX_SCL_SCLK                9U
#define IOMUX_PA1_ETPWM0_1B                      10U
#define IOMUX_PA1_UC2_TX_SDA                     11U
#define IOMUX_PA1_ETPWM4_1B                      12U
#define IOMUX_PA1_UC0_RTS_POCI                   13U
#define IOMUX_PA1_ESC_RX0_CLK                    14U
#define IOMUX_PA1_MCAN1_TX                       15U
#define IOMUX_PA1_OUTPUTXBAR4                    16U

/* IOMUX_PINCM[2] Bits (Pin name : PA2)*/
#define IOMUX_PA2_GPIO02                         1U
#define IOMUX_PA2_ETPWM4_1A                      2U
#define IOMUX_PA2_ETPWM0_1B                      3U
#define IOMUX_PA2_ETPWM2_1A                      4U
#define IOMUX_PA2_ETPWM5_1A                      5U
#define IOMUX_PA2_ETPWM4_1B                      6U
#define IOMUX_PA2_UC1_TX_SDA_PICO                8U
#define IOMUX_PA2_ETPWM0_1A                      10U
#define IOMUX_PA2_UC0_TX_SDA_PICO                13U
#define IOMUX_PA2_ESC_RX0_DV                     14U
#define IOMUX_PA2_OUTPUTXBAR5                    16U

/* IOMUX_PINCM[3] Bits (Pin name : PA3)*/
#define IOMUX_PA3_GPIO03                         1U
#define IOMUX_PA3_SYSCTL_HFCLKIN                 2U
#define IOMUX_PA3_ETPWM1_1B                      3U
#define IOMUX_PA3_TIMG4_0_CCP0                   4U
#define IOMUX_PA3_TIMG12_0_CCP0                  5U
#define IOMUX_PA3_ETPWM2_1B                      6U
#define IOMUX_PA3_ETPWM4_1B                      7U
#define IOMUX_PA3_UC1_RX_SCL_SCLK                8U
#define IOMUX_PA3_ETPWM1_1A                      10U
#define IOMUX_PA3_UC0_RX_SCL_SCLK                13U
#define IOMUX_PA3_ESC_RX0_ERR                    14U
#define IOMUX_PA3_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[4] Bits (Pin name : PA4)*/
#define IOMUX_PA4_GPIO04                         1U
#define IOMUX_PA4_SYSCTL_XCLKOUT                 2U
#define IOMUX_PA4_ETPWM5_1B                      3U
#define IOMUX_PA4_TIMG4_0_CCP1                   4U
#define IOMUX_PA4_TIMG12_0_CCP1                  5U
#define IOMUX_PA4_UC0_RTS_POCI                   6U
#define IOMUX_PA4_UC2_RTS                        7U
#define IOMUX_PA4_FSI0_FSIRX_D0                  8U
#define IOMUX_PA4_UC3_RTS_POCI                   9U
#define IOMUX_PA4_SD0_C2                         10U
#define IOMUX_PA4_UC5_RTS                        11U
#define IOMUX_PA4_ESC_RX0_DATA0                  14U
#define IOMUX_PA4_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[5] Bits (Pin name : PA5)*/
#define IOMUX_PA5_GPIO05                         1U
#define IOMUX_PA5_ETPWM3_1A                      2U
#define IOMUX_PA5_MCPWM2_1B                      3U
#define IOMUX_PA5_ETPWM0_1B                      4U
#define IOMUX_PA5_UC0_RX_SCL_SCLK                6U
#define IOMUX_PA5_FSI0_FSIRX_D1                  8U
#define IOMUX_PA5_UC3_RX_SCL_SCLK                9U
#define IOMUX_PA5_SD0_D2                         10U
#define IOMUX_PA5_MCAN0_RX                       11U
#define IOMUX_PA5_ESC_RX0_DATA1                  14U
#define IOMUX_PA5_OUTPUTXBAR7                    16U

/* IOMUX_PINCM[6] Bits (Pin name : PA6)*/
#define IOMUX_PA6_GPIO06                         1U
#define IOMUX_PA6_ETPWM0_1A                      2U
#define IOMUX_PA6_ETPWM2_1A                      3U
#define IOMUX_PA6_ETPWM4_1A                      4U
#define IOMUX_PA6_UC0_CTS_CS0                    6U
#define IOMUX_PA6_FSI0_FSIRX_CLK                 8U
#define IOMUX_PA6_UC3_CTS_CS0                    9U
#define IOMUX_PA6_UC3_RTS_POCI                   11U
#define IOMUX_PA6_UC0_RTS_POCI                   13U
#define IOMUX_PA6_ESC_RX0_DATA2                  14U
#define IOMUX_PA6_OUTPUTXBAR8                    16U

/* IOMUX_PINCM[7] Bits (Pin name : PA7)*/
#define IOMUX_PA7_GPIO07                         1U
#define IOMUX_PA7_ETPWM2_1A                      2U
#define IOMUX_PA7_ETPWM2_1B                      3U
#define IOMUX_PA7_ETPWM3_1A                      4U
#define IOMUX_PA7_MCPWM1_1B                      5U
#define IOMUX_PA7_UC0_TX_SDA_PICO                6U
#define IOMUX_PA7_MCPWM0_1B                      7U
#define IOMUX_PA7_ETPWM3_1B                      8U
#define IOMUX_PA7_UC3_TX_SDA_PICO                9U
#define IOMUX_PA7_ETPWM5_1A                      10U
#define IOMUX_PA7_ETPWM4_1B                      11U
#define IOMUX_PA7_ESC_RX0_DATA3                  14U
#define IOMUX_PA7_OUTPUTXBAR1                    16U

/* IOMUX_PINCM[8] Bits (Pin name : PA8)*/
#define IOMUX_PA8_GPIO08                         1U
#define IOMUX_PA8_SD0_C2                         2U
#define IOMUX_PA8_UC0_RX_SCL_SCLK                3U
#define IOMUX_PA8_SD0_D4                         4U
#define IOMUX_PA8_UC1_TX_SDA_PICO                5U
#define IOMUX_PA8_ETPWM3_1A                      6U
#define IOMUX_PA8_MCPWM0_1A                      7U
#define IOMUX_PA8_UC3_RX_SCL_SCLK                9U
#define IOMUX_PA8_UC4_TX_SDA_PICO                10U
#define IOMUX_PA8_MCAN0_TX                       12U
#define IOMUX_PA8_ESC_I2C_SDA                    13U
#define IOMUX_PA8_ETPWM0_1A                      14U
#define IOMUX_PA8_ETPWM4_1A                      15U
#define IOMUX_PA8_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[9] Bits (Pin name : PA9)*/
#define IOMUX_PA9_GPIO09                         1U
#define IOMUX_PA9_SD0_D2                         2U
#define IOMUX_PA9_SD0_C1                         3U
#define IOMUX_PA9_SD0_C4                         4U
#define IOMUX_PA9_UC1_RX_SCL_SCLK                5U
#define IOMUX_PA9_UC4_RX_SCL_SCLK                6U
#define IOMUX_PA9_MCPWM0_2A                      7U
#define IOMUX_PA9_UC0_TX_SDA_PICO                8U
#define IOMUX_PA9_UC5_RTS                        9U
#define IOMUX_PA9_UC4_TX_SDA_PICO                10U
#define IOMUX_PA9_ETPWM4_1A                      11U
#define IOMUX_PA9_UC2_RTS                        12U
#define IOMUX_PA9_ETPWM2_1A                      13U
#define IOMUX_PA9_ETPWM0_1B                      14U
#define IOMUX_PA9_ETPWM4_1B                      15U
#define IOMUX_PA9_OUTPUTXBAR4                    16U

/* IOMUX_PINCM[10] Bits (Pin name : PA10)*/
#define IOMUX_PA10_GPIO10                         1U
#define IOMUX_PA10_FSI0_FSIRX_D1                  2U
#define IOMUX_PA10_SD0_D1                         3U
#define IOMUX_PA10_ETPWM5_1A                      4U
#define IOMUX_PA10_UC4_TX_SDA_PICO                5U
#define IOMUX_PA10_UC1_TX_SDA_PICO                6U
#define IOMUX_PA10_MCPWM0_3A                      7U
#define IOMUX_PA10_UC0_RX_SCL_SCLK                8U
#define IOMUX_PA10_UC5_RX_SCL                     9U
#define IOMUX_PA10_UC4_RX_SCL_SCLK                10U
#define IOMUX_PA10_ETPWM4_1B                      11U
#define IOMUX_PA10_UC2_RX_SCL                     12U
#define IOMUX_PA10_ETPWM2_1B                      13U
#define IOMUX_PA10_ETPWM1_1A                      14U
#define IOMUX_PA10_ESC_PHY_RESETn                 15U
#define IOMUX_PA10_OUTPUTXBAR8                    16U

/* IOMUX_PINCM[11] Bits (Pin name : PA11)*/
#define IOMUX_PA11_GPIO11                         1U
#define IOMUX_PA11_ETPWM4_1A                      2U
#define IOMUX_PA11_UC3_CTS_CS0                    3U
#define IOMUX_PA11_UC2_TX_SDA                     4U
#define IOMUX_PA11_UC4_CTS_CS0                    5U
#define IOMUX_PA11_UC1_CTS_CS0                    6U
#define IOMUX_PA11_MCPWM0_1B                      7U
#define IOMUX_PA11_UC0_CTS_CS0                    8U
#define IOMUX_PA11_UC5_TX_SDA                     9U
#define IOMUX_PA11_MCAN0_RX                       10U
#define IOMUX_PA11_MCPWM2_2A                      11U
#define IOMUX_PA11_MCPWM0_1A                      12U
#define IOMUX_PA11_ETPWM3_1B                      13U
#define IOMUX_PA11_ETPWM1_1B                      14U
#define IOMUX_PA11_ETPWM3_1A                      15U
#define IOMUX_PA11_OUTPUTXBAR5                    16U

/* IOMUX_PINCM[12] Bits (Pin name : PA12)*/
#define IOMUX_PA12_GPIO12                         1U
#define IOMUX_PA12_ETPWM0_1A                      2U
#define IOMUX_PA12_ETPWM4_1A                      3U
#define IOMUX_PA12_ETPWM1_1B                      6U
#define IOMUX_PA12_MCPWM0_2B                      7U
#define IOMUX_PA12_UC0_RTS_POCI                   8U
#define IOMUX_PA12_UC3_RTS_POCI                   9U
#define IOMUX_PA12_MCAN0_TX                       10U
#define IOMUX_PA12_MCPWM2_2B                      11U
#define IOMUX_PA12_MCPWM0_1B                      12U
#define IOMUX_PA12_ETPWM4_1B                      13U
#define IOMUX_PA12_ETPWM2_1B                      14U
#define IOMUX_PA12_ETPWM3_1B                      15U
#define IOMUX_PA12_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[13] Bits (Pin name : PA13)*/
#define IOMUX_PA13_GPIO13                         1U
#define IOMUX_PA13_DEBUG_TMS_SWDIO                2U
#define IOMUX_PA13_ETPWM0_1B                      3U
#define IOMUX_PA13_ETPWM4_1B                      4U
#define IOMUX_PA13_UC0_RX_SCL_SCLK                5U
#define IOMUX_PA13_UC3_RX_SCL_SCLK                6U
#define IOMUX_PA13_UC0_CTS_CS0                    8U
#define IOMUX_PA13_SYSCTL_FCC_IN                  9U
#define IOMUX_PA13_UC3_CTS_CS0                    10U
#define IOMUX_PA13_MCPWM2_3A                      11U
#define IOMUX_PA13_ETPWM2_1A                      12U
#define IOMUX_PA13_ETPWM5_1A                      13U
#define IOMUX_PA13_OUTPUTXBAR7                    16U

/* IOMUX_PINCM[14] Bits (Pin name : PA14)*/
#define IOMUX_PA14_GPIO14                         1U
#define IOMUX_PA14_DEBUG_JTCK_SWCLK               2U
#define IOMUX_PA14_UC0_TX_SDA_PICO                5U
#define IOMUX_PA14_MCPWM1_2A                      6U
#define IOMUX_PA14_ETPWM2_1A                      7U
#define IOMUX_PA14_UC1_TX_SDA_PICO                8U
#define IOMUX_PA14_UC2_CTS                        9U
#define IOMUX_PA14_UC5_CTS                        10U
#define IOMUX_PA14_ESC_TX0_DATA3                  14U
#define IOMUX_PA14_OUTPUTXBAR8                    16U

/* IOMUX_PINCM[15] Bits (Pin name : PA15)*/
#define IOMUX_PA15_GPIO15                         1U
#define IOMUX_PA15_DEBUG_JTDI                     2U
#define IOMUX_PA15_ETPWM0_1A                      3U
#define IOMUX_PA15_MCPWM1_1A                      4U
#define IOMUX_PA15_UC0_RX_SCL_SCLK                5U
#define IOMUX_PA15_UC0_RTS_POCI                   6U
#define IOMUX_PA15_UC3_RTS_POCI                   7U
#define IOMUX_PA15_UC1_RX_SCL_SCLK                8U
#define IOMUX_PA15_UC2_RTS                        9U
#define IOMUX_PA15_UC5_RTS                        10U
#define IOMUX_PA15_ETPWM4_1A                      11U
#define IOMUX_PA15_MCAN0_RX                       12U
#define IOMUX_PA15_ESC_TX1_ENA                    14U
#define IOMUX_PA15_ESC_RX1_DATA1                  15U
#define IOMUX_PA15_OUTPUTXBAR1                    16U

/* IOMUX_PINCM[16] Bits (Pin name : PA16)*/
#define IOMUX_PA16_GPIO16                         1U
#define IOMUX_PA16_UC1_CTS_CS0                    2U
#define IOMUX_PA16_ETPWM3_1A                      3U
#define IOMUX_PA16_ETPWM5_1B                      4U
#define IOMUX_PA16_MCPWM1_2B                      5U
#define IOMUX_PA16_ETPWM4_1B                      6U
#define IOMUX_PA16_MCPWM0_2B                      7U
#define IOMUX_PA16_ETPWM2_1B                      8U
#define IOMUX_PA16_SYSCTL_FCC_IN                  9U
#define IOMUX_PA16_ESC_TX0_DATA0                  14U
#define IOMUX_PA16_OUTPUTXBAR1                    16U

/* IOMUX_PINCM[17] Bits (Pin name : PA17)*/
#define IOMUX_PA17_GPIO17                         1U
#define IOMUX_PA17_UC1_RTS_POCI                   2U
#define IOMUX_PA17_ETPWM3_1B                      3U
#define IOMUX_PA17_MCPWM2_1B                      4U
#define IOMUX_PA17_MCPWM1_3B                      5U
#define IOMUX_PA17_ETPWM5_1B                      6U
#define IOMUX_PA17_MCPWM0_3B                      7U
#define IOMUX_PA17_ETPWM0_1B                      8U
#define IOMUX_PA17_UC3_RTS_POCI                   11U
#define IOMUX_PA17_UC0_RTS_POCI                   13U
#define IOMUX_PA17_ESC_TX0_DATA1                  14U
#define IOMUX_PA17_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[18] Bits (Pin name : PA18)*/
#define IOMUX_PA18_GPIO18                         1U
#define IOMUX_PA18_ETPWM0_1A                      3U
#define IOMUX_PA18_MCPWM2_1A                      4U
#define IOMUX_PA18_ETPWM4_1A                      5U
#define IOMUX_PA18_ESC_LED_STATE_RUN              14U
#define IOMUX_PA18_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[19] Bits (Pin name : PA19)*/
#define IOMUX_PA19_GPIO19                         1U
#define IOMUX_PA19_DEBUG_JTDO_SWO                 2U
#define IOMUX_PA19_ETPWM3_1B                      3U
#define IOMUX_PA19_ETPWM4_1B                      4U
#define IOMUX_PA19_MCPWM1_1B                      5U
#define IOMUX_PA19_UC0_RX_SCL_SCLK                6U
#define IOMUX_PA19_UC3_RX_SCL_SCLK                7U
#define IOMUX_PA19_UC1_TX_SDA_PICO                8U
#define IOMUX_PA19_UC3_TX_SDA_PICO                9U
#define IOMUX_PA19_MCAN0_RX                       12U
#define IOMUX_PA19_SD0_C4                         14U
#define IOMUX_PA19_MCAN1_RX                       15U
#define IOMUX_PA19_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[20] Bits (Pin name : PA20)*/
#define IOMUX_PA20_GPIO20                         1U
#define IOMUX_PA20_ETPWM4_1A                      2U
#define IOMUX_PA20_ETPWM0_1A                      3U
#define IOMUX_PA20_ETPWM5_1A                      4U
#define IOMUX_PA20_MCPWM1_2B                      5U
#define IOMUX_PA20_UC0_CTS_CS0                    6U
#define IOMUX_PA20_UC3_CTS_CS0                    7U
#define IOMUX_PA20_UC1_RX_SCL_SCLK                8U
#define IOMUX_PA20_UC3_RTS_POCI                   9U
#define IOMUX_PA20_UC4_RX_SCL_SCLK                10U
#define IOMUX_PA20_UC0_RTS_POCI                   11U
#define IOMUX_PA20_MCAN0_TX                       12U
#define IOMUX_PA20_ETPWM5_1B                      13U
#define IOMUX_PA20_SD0_D4                         14U
#define IOMUX_PA20_MCAN1_TX                       15U
#define IOMUX_PA20_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[21] Bits (Pin name : PA21)*/
#define IOMUX_PA21_GPIO21                         1U
#define IOMUX_PA21_FSI0_FSIRX_D0                  2U
#define IOMUX_PA21_ETPWM5_1B                      3U
#define IOMUX_PA21_MCPWM1_3B                      4U
#define IOMUX_PA21_ETPWM3_1B                      5U
#define IOMUX_PA21_UC0_TX_SDA_PICO                6U
#define IOMUX_PA21_UC3_TX_SDA_PICO                7U
#define IOMUX_PA21_UC0_RX_SCL_SCLK                8U
#define IOMUX_PA21_UC3_RX_SCL_SCLK                9U
#define IOMUX_PA21_MCAN0_RX                       10U
#define IOMUX_PA21_ETPWM2_1A                      11U
#define IOMUX_PA21_ETPWM5_1A                      12U
#define IOMUX_PA21_MCAN1_RX                       13U
#define IOMUX_PA21_UC0_CTS_CS0                    14U
#define IOMUX_PA21_UC3_CTS_CS0                    15U
#define IOMUX_PA21_OUTPUTXBAR4                    16U

/* IOMUX_PINCM[22] Bits (Pin name : PA22)*/
#define IOMUX_PA22_GPIO22                         1U
#define IOMUX_PA22_ETPWM0_1B                      2U
#define IOMUX_PA22_MCPWM2_2A                      3U
#define IOMUX_PA22_UC2_TX_SDA                     4U
#define IOMUX_PA22_ETPWM4_1B                      5U
#define IOMUX_PA22_MCPWM1_1A                      6U
#define IOMUX_PA22_UC5_TX_SDA                     7U
#define IOMUX_PA22_UC0_TX_SDA_PICO                8U
#define IOMUX_PA22_UC3_TX_SDA_PICO                9U
#define IOMUX_PA22_MCAN0_TX                       10U
#define IOMUX_PA22_ETPWM2_1B                      11U
#define IOMUX_PA22_ETPWM5_1B                      12U
#define IOMUX_PA22_MCAN1_TX                       13U
#define IOMUX_PA22_ETPWM4_1A                      14U
#define IOMUX_PA22_ETPWM1_1A                      15U
#define IOMUX_PA22_OUTPUTXBAR5                    16U

/* IOMUX_PINCM[23] Bits (Pin name : PA23)*/
#define IOMUX_PA23_GPIO23                         1U
#define IOMUX_PA23_ETPWM2_1B                      2U
#define IOMUX_PA23_MCPWM2_2B                      3U
#define IOMUX_PA23_UC2_RX_SCL                     4U
#define IOMUX_PA23_UC0_TX_SDA_PICO                5U
#define IOMUX_PA23_ETPWM5_1B                      6U
#define IOMUX_PA23_UC5_RX_SCL                     7U
#define IOMUX_PA23_UC0_RX_SCL_SCLK                8U
#define IOMUX_PA23_UC3_RX_SCL_SCLK                9U
#define IOMUX_PA23_UC3_TX_SDA_PICO                10U
#define IOMUX_PA23_ETPWM3_1B                      11U
#define IOMUX_PA23_ETPWM1_1B                      12U
#define IOMUX_PA23_ETPWM4_1B                      13U
#define IOMUX_PA23_UC4_CTS_CS0                    14U
#define IOMUX_PA23_UC1_CTS_CS0                    15U
#define IOMUX_PA23_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[24] Bits (Pin name : PA24)*/
#define IOMUX_PA24_GPIO24                         1U
#define IOMUX_PA24_ETPWM0_1A                      2U
#define IOMUX_PA24_MCPWM2_3A                      3U
#define IOMUX_PA24_ETPWM4_1A                      4U
#define IOMUX_PA24_UC0_RX_SCL_SCLK                5U
#define IOMUX_PA24_UC3_RX_SCL_SCLK                6U
#define IOMUX_PA24_ETPWM2_1A                      7U
#define IOMUX_PA24_UC0_TX_SDA_PICO                8U
#define IOMUX_PA24_UC3_TX_SDA_PICO                9U
#define IOMUX_PA24_MCAN0_RX                       10U
#define IOMUX_PA24_MCPWM1_2A                      11U
#define IOMUX_PA24_ETPWM5_1A                      12U
#define IOMUX_PA24_ESC_I2C_SCL                    13U
#define IOMUX_PA24_SD0_C3                         15U
#define IOMUX_PA24_OUTPUTXBAR7                    16U

/* IOMUX_PINCM[25] Bits (Pin name : PA25)*/
#define IOMUX_PA25_GPIO25                         1U
#define IOMUX_PA25_ETPWM2_1A                      2U
#define IOMUX_PA25_MCPWM2_3B                      3U
#define IOMUX_PA25_ETPWM5_1A                      4U
#define IOMUX_PA25_UC0_TX_SDA_PICO                5U
#define IOMUX_PA25_UC3_TX_SDA_PICO                6U
#define IOMUX_PA25_ETPWM2_1B                      7U
#define IOMUX_PA25_UC0_RX_SCL_SCLK                8U
#define IOMUX_PA25_UC3_RX_SCL_SCLK                9U
#define IOMUX_PA25_MCAN0_TX                       10U
#define IOMUX_PA25_MCPWM1_3A                      11U
#define IOMUX_PA25_ETPWM5_1B                      12U
#define IOMUX_PA25_MCPWM0_3B                      13U
#define IOMUX_PA25_ETPWM3_1A                      14U
#define IOMUX_PA25_SD0_D3                         15U
#define IOMUX_PA25_OUTPUTXBAR7                    16U

/* IOMUX_PINCM[26] Bits (Pin name : PA26)*/
#define IOMUX_PA26_GPIO26                         1U
#define IOMUX_PA26_ETPWM4_1A                      2U
#define IOMUX_PA26_TIMG4_0_CCP0                   3U
#define IOMUX_PA26_TIMG12_0_CCP0                  4U
#define IOMUX_PA26_ETPWM2_1A                      5U
#define IOMUX_PA26_ETPWM5_1A                      6U
#define IOMUX_PA26_UC0_RX_SCL_SCLK                8U
#define IOMUX_PA26_UC0_TX_SDA_PICO                9U
#define IOMUX_PA26_UC3_TX_SDA_PICO                10U
#define IOMUX_PA26_UC3_RX_SCL_SCLK                11U
#define IOMUX_PA26_ESC_GPI2                       14U
#define IOMUX_PA26_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[27] Bits (Pin name : PA27)*/
#define IOMUX_PA27_GPIO27                         1U
#define IOMUX_PA27_ETPWM4_1B                      2U
#define IOMUX_PA27_TIMG4_0_CCP1                   3U
#define IOMUX_PA27_TIMG12_0_CCP1                  4U
#define IOMUX_PA27_ETPWM2_1B                      5U
#define IOMUX_PA27_SYSCTL_XCLKOUT                 7U
#define IOMUX_PA27_UC0_RX_SCL_SCLK                8U
#define IOMUX_PA27_UC0_TX_SDA_PICO                9U
#define IOMUX_PA27_UC3_TX_SDA_PICO                10U
#define IOMUX_PA27_UC3_RX_SCL_SCLK                11U
#define IOMUX_PA27_UC2_RX_SCL                     12U
#define IOMUX_PA27_FSI0_FSITX_D0                  13U
#define IOMUX_PA27_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[28] Bits (Pin name : PA28)*/
#define IOMUX_PA28_GPIO28                         1U
#define IOMUX_PA28_TIMG12_0_CCP0                  2U
#define IOMUX_PA28_TIMG4_0_CCP0                   3U
#define IOMUX_PA28_MCAN0_RX                       4U
#define IOMUX_PA28_UC1_RTS_POCI                   6U
#define IOMUX_PA28_UC0_CTS_CS0                    8U
#define IOMUX_PA28_UC0_RTS_POCI                   9U
#define IOMUX_PA28_UC4_RTS_POCI                   10U
#define IOMUX_PA28_UC3_CTS_CS0                    11U
#define IOMUX_PA28_FSI0_FSITX_D1                  13U
#define IOMUX_PA28_ETPWM2_1A                      14U
#define IOMUX_PA28_ETPWM3_1A                      15U
#define IOMUX_PA28_OUTPUTXBAR4                    16U

/* IOMUX_PINCM[29] Bits (Pin name : PA29)*/
#define IOMUX_PA29_GPIO29                         1U
#define IOMUX_PA29_TIMG12_0_CCP1                  2U
#define IOMUX_PA29_TIMG4_0_CCP1                   3U
#define IOMUX_PA29_MCAN0_TX                       4U
#define IOMUX_PA29_ETPWM3_1B                      6U
#define IOMUX_PA29_MCPWM0_1B                      7U
#define IOMUX_PA29_SYSCTL_FCC_IN                  8U
#define IOMUX_PA29_UC0_CTS_CS0                    9U
#define IOMUX_PA29_UC3_CTS_CS0                    11U
#define IOMUX_PA29_FSI0_FSITX_CLK                 13U
#define IOMUX_PA29_ETPWM2_1B                      14U
#define IOMUX_PA29_ETPWM5_1B                      15U
#define IOMUX_PA29_OUTPUTXBAR5                    16U

/* IOMUX_PINCM[30] Bits (Pin name : PA30)*/
#define IOMUX_PA30_GPIO30                         1U
#define IOMUX_PA30_ETPWM0_1A                      2U
#define IOMUX_PA30_ETPWM4_1A                      3U
#define IOMUX_PA30_ETPWM2_1B                      4U
#define IOMUX_PA30_ETPWM4_1B                      5U
#define IOMUX_PA30_UC1_TX_SDA_PICO                6U
#define IOMUX_PA30_MCPWM0_2B                      7U
#define IOMUX_PA30_UC0_RTS_POCI                   8U
#define IOMUX_PA30_UC4_RTS_POCI                   10U
#define IOMUX_PA30_UC4_TX_SDA_PICO                11U
#define IOMUX_PA30_ESC_TX0_DATA2                  13U
#define IOMUX_PA30_ETPWM3_1A                      14U
#define IOMUX_PA30_SD0_D3                         15U
#define IOMUX_PA30_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[31] Bits (Pin name : PA31)*/
#define IOMUX_PA31_GPIO31                         1U
#define IOMUX_PA31_ETPWM1_1A                      2U
#define IOMUX_PA31_ETPWM0_1B                      3U
#define IOMUX_PA31_ETPWM5_1B                      4U
#define IOMUX_PA31_MCPWM0_3B                      5U
#define IOMUX_PA31_UC1_CTS_CS0                    6U
#define IOMUX_PA31_ETPWM4_1B                      7U
#define IOMUX_PA31_UC4_CTS_CS0                    11U
#define IOMUX_PA31_ETPWM3_1B                      14U
#define IOMUX_PA31_SD0_C3                         15U
#define IOMUX_PA31_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[32] Bits (Pin name : PB0)*/
#define IOMUX_PB0_GPIO32                         1U
#define IOMUX_PB0_MCPWM0_1A                      3U
#define IOMUX_PB0_ETPWM3_1A                      4U
#define IOMUX_PB0_UC0_RX_SCL_SCLK                9U
#define IOMUX_PB0_UC3_RX_SCL_SCLK                11U
#define IOMUX_PB0_ESC_I2C_SCL                    12U
#define IOMUX_PB0_ESC_RX1_DATA3                  14U
#define IOMUX_PB0_OUTPUTXBAR5                    16U

/* IOMUX_PINCM[33] Bits (Pin name : PB1)*/
#define IOMUX_PB1_GPIO33                         1U
#define IOMUX_PB1_MCPWM0_2A                      3U
#define IOMUX_PB1_ETPWM4_1A                      4U
#define IOMUX_PB1_ETPWM2_1A                      5U
#define IOMUX_PB1_UC0_TX_SDA_PICO                9U
#define IOMUX_PB1_UC3_TX_SDA_PICO                11U
#define IOMUX_PB1_ESC_I2C_SDA                    12U
#define IOMUX_PB1_ESC_PHY_RESETn                 14U
#define IOMUX_PB1_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[34] Bits (Pin name : PB2)*/
#define IOMUX_PB2_GPIO34                         1U
#define IOMUX_PB2_MCPWM0_3A                      3U
#define IOMUX_PB2_ETPWM5_1A                      4U
#define IOMUX_PB2_ETPWM4_1A                      6U
#define IOMUX_PB2_MCPWM2_2A                      7U
#define IOMUX_PB2_ETPWM1_1A                      8U
#define IOMUX_PB2_MCAN1_RX                       11U
#define IOMUX_PB2_ESC_PHY_CLK                    13U
#define IOMUX_PB2_ESC_LED_RUN                    14U
#define IOMUX_PB2_OUTPUTXBAR7                    16U

/* IOMUX_PINCM[35] Bits (Pin name : PB3)*/
#define IOMUX_PB3_GPIO35                         1U
#define IOMUX_PB3_MCPWM0_1A                      3U
#define IOMUX_PB3_ETPWM3_1A                      4U
#define IOMUX_PB3_MCAN1_TX                       11U
#define IOMUX_PB3_ESC_LED_ERR                    14U
#define IOMUX_PB3_OUTPUTXBAR8                    16U

/* IOMUX_PINCM[36] Bits (Pin name : PB4)*/
#define IOMUX_PB4_GPIO36                         1U
#define IOMUX_PB4_UC1_RX_SCL_SCLK                5U
#define IOMUX_PB4_UC0_TX_SDA_PICO                8U
#define IOMUX_PB4_UC3_TX_SDA_PICO                9U
#define IOMUX_PB4_MCAN0_RX                       10U
#define IOMUX_PB4_UC4_RX_SCL_SCLK                11U
#define IOMUX_PB4_ESC_TX0_ENA                    14U
#define IOMUX_PB4_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[37] Bits (Pin name : PB5)*/
#define IOMUX_PB5_GPIO37                         1U
#define IOMUX_PB5_ETPWM3_1B                      6U
#define IOMUX_PB5_MCPWM0_1B                      7U
#define IOMUX_PB5_UC0_RX_SCL_SCLK                8U
#define IOMUX_PB5_UC3_RX_SCL_SCLK                9U
#define IOMUX_PB5_MCAN0_TX                       10U
#define IOMUX_PB5_ESC_TX0_CLK                    14U
#define IOMUX_PB5_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[38] Bits (Pin name : PB6)*/
#define IOMUX_PB6_GPIO38                         1U
#define IOMUX_PB6_ETPWM2_1A                      3U
#define IOMUX_PB6_MCPWM1_1A                      5U
#define IOMUX_PB6_ETPWM4_1A                      6U
#define IOMUX_PB6_UC5_RX_SCL                     8U
#define IOMUX_PB6_UC2_RX_SCL                     9U
#define IOMUX_PB6_ETPWM5_1A                      14U
#define IOMUX_PB6_ESC_I2C_SDA                    15U
#define IOMUX_PB6_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[39] Bits (Pin name : PB7)*/
#define IOMUX_PB7_GPIO39                         1U
#define IOMUX_PB7_ETPWM2_1B                      3U
#define IOMUX_PB7_ETPWM5_1A                      4U
#define IOMUX_PB7_MCPWM1_2A                      5U
#define IOMUX_PB7_UC5_TX_SDA                     8U
#define IOMUX_PB7_UC2_TX_SDA                     9U
#define IOMUX_PB7_ETPWM5_1B                      14U
#define IOMUX_PB7_ESC_I2C_SCL                    15U
#define IOMUX_PB7_OUTPUTXBAR4                    16U

/* IOMUX_PINCM[40] Bits (Pin name : PB8)*/
#define IOMUX_PB8_GPIO40                         1U
#define IOMUX_PB8_TRACE_DATA1                    2U
#define IOMUX_PB8_ETPWM0_1A                      3U
#define IOMUX_PB8_ETPWM4_1A                      4U
#define IOMUX_PB8_MCPWM1_3A                      5U
#define IOMUX_PB8_UC2_CTS                        6U
#define IOMUX_PB8_MCPWM2_3A                      7U
#define IOMUX_PB8_ETPWM2_1A                      8U
#define IOMUX_PB8_UC0_RX_SCL_SCLK                9U
#define IOMUX_PB8_UC3_RX_SCL_SCLK                10U
#define IOMUX_PB8_UC5_RTS                        11U
#define IOMUX_PB8_FSI0_FSIRX_D1                  12U
#define IOMUX_PB8_ETPWM5_1A                      13U
#define IOMUX_PB8_ETPWM5_1B                      14U
#define IOMUX_PB8_ETPWM2_1B                      15U
#define IOMUX_PB8_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[41] Bits (Pin name : PB9)*/
#define IOMUX_PB9_GPIO41                         1U
#define IOMUX_PB9_ETPWM0_1B                      3U
#define IOMUX_PB9_ETPWM4_1B                      4U
#define IOMUX_PB9_MCPWM1_1A                      5U
#define IOMUX_PB9_UC2_RTS                        6U
#define IOMUX_PB9_ETPWM4_1A                      7U
#define IOMUX_PB9_ETPWM2_1B                      8U
#define IOMUX_PB9_UC0_TX_SDA_PICO                9U
#define IOMUX_PB9_UC3_TX_SDA_PICO                10U
#define IOMUX_PB9_UC5_CTS                        11U
#define IOMUX_PB9_FSI0_FSIRX_CLK                 12U
#define IOMUX_PB9_ESC_LATCH0                     14U
#define IOMUX_PB9_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[42] Bits (Pin name : PB10)*/
#define IOMUX_PB10_GPIO42                         1U
#define IOMUX_PB10_UC5_TX_SDA                     4U
#define IOMUX_PB10_MCPWM1_1B                      5U
#define IOMUX_PB10_UC2_TX_SDA                     6U
#define IOMUX_PB10_UC3_RX_SCL_SCLK                7U
#define IOMUX_PB10_UC0_TX_SDA_PICO                8U
#define IOMUX_PB10_UC0_RX_SCL_SCLK                9U
#define IOMUX_PB10_UC3_TX_SDA_PICO                10U
#define IOMUX_PB10_ETPWM1_1B                      11U
#define IOMUX_PB10_ESC_LED_LINK0_ACTIVE           12U
#define IOMUX_PB10_ESC_TX0_DATA3                  13U
#define IOMUX_PB10_ESC_TX1_CLK                    14U
#define IOMUX_PB10_ESC_RX1_DATA2                  15U
#define IOMUX_PB10_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[43] Bits (Pin name : PB11)*/
#define IOMUX_PB11_GPIO43                         1U
#define IOMUX_PB11_TRACE_CLK                      2U
#define IOMUX_PB11_UC5_RX_SCL                     4U
#define IOMUX_PB11_MCPWM1_2B                      5U
#define IOMUX_PB11_UC2_RX_SCL                     6U
#define IOMUX_PB11_UC3_CTS_CS0                    7U
#define IOMUX_PB11_UC0_RX_SCL_SCLK                8U
#define IOMUX_PB11_UC0_TX_SDA_PICO                9U
#define IOMUX_PB11_UC0_CTS_CS0                    10U
#define IOMUX_PB11_UC3_RX_SCL_SCLK                11U
#define IOMUX_PB11_SD0_C1                         12U
#define IOMUX_PB11_UC3_TX_SDA_PICO                13U
#define IOMUX_PB11_ESC_LATCH0                     14U
#define IOMUX_PB11_ESC_MDIO_DATA                  15U
#define IOMUX_PB11_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[44] Bits (Pin name : PB12)*/
#define IOMUX_PB12_GPIO44                         1U
#define IOMUX_PB12_TRACE_DATA3                    2U
#define IOMUX_PB12_ETPWM0_1B                      3U
#define IOMUX_PB12_ETPWM4_1B                      4U
#define IOMUX_PB12_MCPWM1_3B                      5U
#define IOMUX_PB12_UC3_TX_SDA_PICO                6U
#define IOMUX_PB12_UC3_RX_SCL_SCLK                7U
#define IOMUX_PB12_UC0_RX_SCL_SCLK                8U
#define IOMUX_PB12_ETPWM3_1B                      9U
#define IOMUX_PB12_ESC_TX0_DATA2                  10U
#define IOMUX_PB12_UC0_TX_SDA_PICO                11U
#define IOMUX_PB12_SD0_D1                         12U
#define IOMUX_PB12_ESC_TX0_DATA3                  13U
#define IOMUX_PB12_ESC_RX1_DATA1                  15U
#define IOMUX_PB12_OUTPUTXBAR4                    16U

/* IOMUX_PINCM[45] Bits (Pin name : PB13)*/
#define IOMUX_PB13_GPIO45                         1U
#define IOMUX_PB13_SYSCTL_XCLKOUT                 2U
#define IOMUX_PB13_UC1_RTS_POCI                   3U
#define IOMUX_PB13_MCPWM0_1B                      5U
#define IOMUX_PB13_ETPWM0_1B                      6U
#define IOMUX_PB13_MCPWM1_1B                      7U
#define IOMUX_PB13_SYSCTL_FCC_IN                  8U
#define IOMUX_PB13_ETPWM4_1B                      9U
#define IOMUX_PB13_ESC_TX1_ENA                    12U
#define IOMUX_PB13_ESC_TX1_DATA0                  14U
#define IOMUX_PB13_FSI0_FSITX_D0                  15U
#define IOMUX_PB13_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[46] Bits (Pin name : PB14)*/
#define IOMUX_PB14_GPIO46                         1U
#define IOMUX_PB14_SYSCTL_XCLKOUT                 2U
#define IOMUX_PB14_UC0_TX_SDA_PICO                8U
#define IOMUX_PB14_MCAN0_RX                       10U
#define IOMUX_PB14_UC3_TX_SDA_PICO                11U
#define IOMUX_PB14_ESC_RX1_ERR                    12U
#define IOMUX_PB14_ESC_SYNC0                      14U
#define IOMUX_PB14_FSI0_FSITX_D1                  15U
#define IOMUX_PB14_OUTPUTXBAR1                    16U

/* IOMUX_PINCM[47] Bits (Pin name : PB15)*/
#define IOMUX_PB15_GPIO47                         1U
#define IOMUX_PB15_UC0_RX_SCL_SCLK                8U
#define IOMUX_PB15_MCAN0_TX                       10U
#define IOMUX_PB15_UC3_RX_SCL_SCLK                11U
#define IOMUX_PB15_ESC_RX1_CLK                    12U
#define IOMUX_PB15_FSI0_FSITX_D1                  13U
#define IOMUX_PB15_ESC_SYNC1                      14U
#define IOMUX_PB15_FSI0_FSITX_CLK                 15U
#define IOMUX_PB15_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[48] Bits (Pin name : PB16)*/
#define IOMUX_PB16_GPIO48                         1U
#define IOMUX_PB16_TRACE_DATA0                    2U
#define IOMUX_PB16_UC5_TX_SDA                     4U
#define IOMUX_PB16_MCPWM1_1B                      7U
#define IOMUX_PB16_ETPWM1_1B                      8U
#define IOMUX_PB16_MCAN0_TX                       10U
#define IOMUX_PB16_UC2_TX_SDA                     11U
#define IOMUX_PB16_ESC_MDIO_CLK                   12U
#define IOMUX_PB16_MCAN1_RX                       13U
#define IOMUX_PB16_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[49] Bits (Pin name : PB17)*/
#define IOMUX_PB17_GPIO49                         1U
#define IOMUX_PB17_UC5_RX_SCL                     4U
#define IOMUX_PB17_MCPWM1_1A                      5U
#define IOMUX_PB17_ETPWM1_1A                      6U
#define IOMUX_PB17_MCAN0_RX                       10U
#define IOMUX_PB17_UC2_RX_SCL                     11U
#define IOMUX_PB17_UC1_TX_SDA_PICO                12U
#define IOMUX_PB17_MCAN1_TX                       13U
#define IOMUX_PB17_ESC_RX0_ERR                    14U
#define IOMUX_PB17_ESC_TX0_ENA                    15U
#define IOMUX_PB17_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[50] Bits (Pin name : PB18)*/
#define IOMUX_PB18_GPIO50                         1U
#define IOMUX_PB18_TRACE_DATA2                    2U
#define IOMUX_PB18_TRACE_DATA3                    3U
#define IOMUX_PB18_UC5_CTS                        4U
#define IOMUX_PB18_MCPWM1_3A                      5U
#define IOMUX_PB18_UC3_RX_SCL_SCLK                6U
#define IOMUX_PB18_UC3_TX_SDA_PICO                7U
#define IOMUX_PB18_UC0_RX_SCL_SCLK                8U
#define IOMUX_PB18_UC0_TX_SDA_PICO                9U
#define IOMUX_PB18_ESC_RX0_CLK                    10U
#define IOMUX_PB18_UC2_CTS                        11U
#define IOMUX_PB18_UC1_RX_SCL_SCLK                12U
#define IOMUX_PB18_ESC_TX0_CLK                    13U
#define IOMUX_PB18_ESC_MDIO_CLK                   14U
#define IOMUX_PB18_SD0_C4                         15U
#define IOMUX_PB18_OUTPUTXBAR4                    16U

/* IOMUX_PINCM[51] Bits (Pin name : PB19)*/
#define IOMUX_PB19_GPIO51                         1U
#define IOMUX_PB19_ETPWM3_1A                      3U
#define IOMUX_PB19_UC5_RTS                        4U
#define IOMUX_PB19_UC1_CTS_CS0                    8U
#define IOMUX_PB19_UC4_CTS_CS0                    10U
#define IOMUX_PB19_UC2_RTS                        11U
#define IOMUX_PB19_ESC_PDI_UC_IRQ                 12U
#define IOMUX_PB19_ESC_RX0_DV                     13U
#define IOMUX_PB19_ESC_MDIO_DATA                  14U
#define IOMUX_PB19_SD0_D4                         15U
#define IOMUX_PB19_OUTPUTXBAR5                    16U

/* IOMUX_PINCM[52] Bits (Pin name : PB20)*/
#define IOMUX_PB20_GPIO52                         1U
#define IOMUX_PB20_ETPWM3_1B                      3U
#define IOMUX_PB20_UC1_RTS_POCI                   8U
#define IOMUX_PB20_UC4_RTS_POCI                   10U
#define IOMUX_PB20_ESC_RX0_ERR                    12U
#define IOMUX_PB20_ESC_RX0_DATA0                  13U
#define IOMUX_PB20_ESC_PHY_CLK                    14U
#define IOMUX_PB20_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[53] Bits (Pin name : PB21)*/
#define IOMUX_PB21_GPIO53                         1U
#define IOMUX_PB21_UC1_TX_SDA_PICO                8U
#define IOMUX_PB21_UC4_TX_SDA_PICO                10U
#define IOMUX_PB21_ESC_RX0_CLK                    12U
#define IOMUX_PB21_ESC_RX0_DATA1                  13U
#define IOMUX_PB21_ESC_RX1_CLK                    14U
#define IOMUX_PB21_OUTPUTXBAR7                    16U

/* IOMUX_PINCM[54] Bits (Pin name : PB22)*/
#define IOMUX_PB22_GPIO54                         1U
#define IOMUX_PB22_SD0_C1                         2U
#define IOMUX_PB22_ETPWM4_1B                      3U
#define IOMUX_PB22_ETPWM2_1B                      4U
#define IOMUX_PB22_ETPWM5_1B                      5U
#define IOMUX_PB22_UC1_RX_SCL_SCLK                8U
#define IOMUX_PB22_UC4_RX_SCL_SCLK                10U
#define IOMUX_PB22_ESC_RX0_DV                     12U
#define IOMUX_PB22_ESC_RX0_DATA2                  13U
#define IOMUX_PB22_ESC_RX1_DV                     14U
#define IOMUX_PB22_OUTPUTXBAR8                    16U

/* IOMUX_PINCM[55] Bits (Pin name : PB23)*/
#define IOMUX_PB23_GPIO55                         1U
#define IOMUX_PB23_SD0_D1                         2U
#define IOMUX_PB23_ETPWM4_1A                      3U
#define IOMUX_PB23_ETPWM2_1A                      4U
#define IOMUX_PB23_ETPWM5_1A                      5U
#define IOMUX_PB23_ESC_RX0_DATA0                  12U
#define IOMUX_PB23_ESC_RX0_DATA3                  13U
#define IOMUX_PB23_OUTPUTXBAR1                    16U

/* IOMUX_PINCM[56] Bits (Pin name : PB24)*/
#define IOMUX_PB24_GPIO56                         1U
#define IOMUX_PB24_UC5_RX_SCL                     9U
#define IOMUX_PB24_UC2_RX_SCL                     11U
#define IOMUX_PB24_ESC_TX1_DATA3                  13U
#define IOMUX_PB24_ESC_GPO1                       14U
#define IOMUX_PB24_SD0_D1                         15U
#define IOMUX_PB24_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[57] Bits (Pin name : PB25)*/
#define IOMUX_PB25_GPIO57                         1U
#define IOMUX_PB25_UC5_TX_SDA                     9U
#define IOMUX_PB25_UC2_TX_SDA                     11U
#define IOMUX_PB25_ESC_TX1_DATA2                  13U
#define IOMUX_PB25_ESC_GPO2                       14U
#define IOMUX_PB25_SD0_C1                         15U
#define IOMUX_PB25_OUTPUTXBAR4                    16U

/* IOMUX_PINCM[58] Bits (Pin name : PB26)*/
#define IOMUX_PB26_GPIO58                         1U
#define IOMUX_PB26_TIMG4_0_CCP0                   2U
#define IOMUX_PB26_ESC_TX1_DATA1                  13U
#define IOMUX_PB26_ESC_GPO3                       14U
#define IOMUX_PB26_SD0_C3                         15U
#define IOMUX_PB26_OUTPUTXBAR5                    16U

/* IOMUX_PINCM[59] Bits (Pin name : PB27)*/
#define IOMUX_PB27_GPIO59                         1U
#define IOMUX_PB27_TIMG4_0_CCP1                   2U
#define IOMUX_PB27_UC0_CTS_CS0                    8U
#define IOMUX_PB27_UC5_CTS                        9U
#define IOMUX_PB27_UC2_CTS                        10U
#define IOMUX_PB27_UC3_CTS_CS0                    11U
#define IOMUX_PB27_SD0_D1                         13U
#define IOMUX_PB27_ESC_GPO0                       14U
#define IOMUX_PB27_SD0_D3                         15U
#define IOMUX_PB27_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[60] Bits (Pin name : PB28)*/
#define IOMUX_PB28_GPIO60                         1U
#define IOMUX_PB28_TIMG4_0_CCP0                   2U
#define IOMUX_PB28_MCPWM2_2A                      3U
#define IOMUX_PB28_ETPWM1_1A                      4U
#define IOMUX_PB28_ETPWM4_1A                      5U
#define IOMUX_PB28_UC0_RTS_POCI                   8U
#define IOMUX_PB28_UC5_RTS                        9U
#define IOMUX_PB28_UC2_RTS                        10U
#define IOMUX_PB28_UC3_RTS_POCI                   11U
#define IOMUX_PB28_ESC_PDI_UC_IRQ                 14U
#define IOMUX_PB28_OUTPUTXBAR7                    16U

/* IOMUX_PINCM[61] Bits (Pin name : PB29)*/
#define IOMUX_PB29_GPIO61                         1U
#define IOMUX_PB29_TIMG4_0_CCP1                   2U
#define IOMUX_PB29_MCPWM2_2B                      3U
#define IOMUX_PB29_ETPWM1_1B                      4U
#define IOMUX_PB29_ETPWM4_1B                      5U
#define IOMUX_PB29_UC5_RX_SCL                     6U
#define IOMUX_PB29_UC5_TX_SDA                     8U
#define IOMUX_PB29_UC2_RX_SCL                     10U
#define IOMUX_PB29_UC2_TX_SDA                     11U
#define IOMUX_PB29_ESC_TX1_DATA3                  15U
#define IOMUX_PB29_OUTPUTXBAR8                    16U

/* IOMUX_PINCM[62] Bits (Pin name : PB30)*/
#define IOMUX_PB30_GPIO62                         1U
#define IOMUX_PB30_TIMG4_0_CCP0                   2U
#define IOMUX_PB30_MCPWM2_3A                      3U
#define IOMUX_PB30_ETPWM2_1A                      4U
#define IOMUX_PB30_ETPWM5_1A                      5U
#define IOMUX_PB30_UC5_TX_SDA                     6U
#define IOMUX_PB30_UC5_RX_SCL                     8U
#define IOMUX_PB30_UC2_TX_SDA                     10U
#define IOMUX_PB30_UC2_RX_SCL                     11U
#define IOMUX_PB30_ESC_TX1_DATA2                  15U
#define IOMUX_PB30_OUTPUTXBAR1                    16U

/* IOMUX_PINCM[63] Bits (Pin name : PB31)*/
#define IOMUX_PB31_GPIO63                         1U
#define IOMUX_PB31_TIMG4_0_CCP1                   2U
#define IOMUX_PB31_MCPWM2_3B                      3U
#define IOMUX_PB31_ETPWM2_1B                      4U
#define IOMUX_PB31_ETPWM5_1B                      5U
#define IOMUX_PB31_UC1_RTS_POCI                   7U
#define IOMUX_PB31_UC4_RTS_POCI                   11U
#define IOMUX_PB31_ESC_TX1_DATA1                  15U
#define IOMUX_PB31_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[64] Bits (Pin name : PC0)*/
#define IOMUX_PC0_GPIO64                         1U
#define IOMUX_PC0_ETPWM0_1B                      3U
#define IOMUX_PC0_MCPWM2_1B                      4U
#define IOMUX_PC0_ETPWM0_1A                      5U
#define IOMUX_PC0_ETPWM4_1A                      6U
#define IOMUX_PC0_UC0_TX_SDA_PICO                8U
#define IOMUX_PC0_UC3_TX_SDA_PICO                9U
#define IOMUX_PC0_ESC_PHY_CLK                    14U
#define IOMUX_PC0_OUTPUTXBAR1                    16U

/* IOMUX_PINCM[65] Bits (Pin name : PC1)*/
#define IOMUX_PC1_GPIO65                         1U
#define IOMUX_PC1_TRACE_DATA0                    2U
#define IOMUX_PC1_SD0_C2                         3U
#define IOMUX_PC1_ETPWM3_1A                      4U
#define IOMUX_PC1_ETPWM2_1A                      5U
#define IOMUX_PC1_ETPWM0_1A                      6U
#define IOMUX_PC1_MCPWM2_1A                      7U
#define IOMUX_PC1_UC0_RX_SCL_SCLK                8U
#define IOMUX_PC1_UC3_RX_SCL_SCLK                9U
#define IOMUX_PC1_ESC_LED_LINK1_ACTIVE           12U
#define IOMUX_PC1_FSI0_FSITX_D0                  13U
#define IOMUX_PC1_ESC_RX1_CLK                    14U
#define IOMUX_PC1_ESC_PHY1_LINKSTATUS            15U
#define IOMUX_PC1_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[66] Bits (Pin name : PC2)*/
#define IOMUX_PC2_GPIO66                         1U
#define IOMUX_PC2_TRACE_CLK                      2U
#define IOMUX_PC2_ETPWM5_1A                      3U
#define IOMUX_PC2_UC5_RX_SCL                     5U
#define IOMUX_PC2_UC3_RX_SCL_SCLK                6U
#define IOMUX_PC2_MCPWM2_1A                      7U
#define IOMUX_PC2_SYSCTL_FCC_IN                  8U
#define IOMUX_PC2_ETPWM0_1A                      9U
#define IOMUX_PC2_UC2_RX_SCL                     10U
#define IOMUX_PC2_UC0_RX_SCL_SCLK                11U
#define IOMUX_PC2_ESC_TX1_DATA3                  12U
#define IOMUX_PC2_ESC_I2C_SDA                    14U
#define IOMUX_PC2_SD0_C3                         15U
#define IOMUX_PC2_OUTPUTXBAR1                    16U

/* IOMUX_PINCM[67] Bits (Pin name : PC3)*/
#define IOMUX_PC3_GPIO67                         1U
#define IOMUX_PC3_TRACE_DATA0                    2U
#define IOMUX_PC3_ETPWM5_1B                      3U
#define IOMUX_PC3_ETPWM4_1A                      4U
#define IOMUX_PC3_UC5_TX_SDA                     5U
#define IOMUX_PC3_UC3_RTS_POCI                   6U
#define IOMUX_PC3_MCPWM2_2A                      7U
#define IOMUX_PC3_ETPWM1_1A                      8U
#define IOMUX_PC3_UC2_TX_SDA                     10U
#define IOMUX_PC3_UC0_RTS_POCI                   11U
#define IOMUX_PC3_ESC_TX1_DATA2                  12U
#define IOMUX_PC3_ESC_I2C_SCL                    14U
#define IOMUX_PC3_SD0_D3                         15U
#define IOMUX_PC3_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[68] Bits (Pin name : PC4)*/
#define IOMUX_PC4_GPIO68                         1U
#define IOMUX_PC4_TRACE_DATA1                    2U
#define IOMUX_PC4_ETPWM3_1A                      3U
#define IOMUX_PC4_UC3_RTS_POCI                   6U
#define IOMUX_PC4_MCPWM2_1B                      7U
#define IOMUX_PC4_ETPWM0_1B                      8U
#define IOMUX_PC4_UC0_RTS_POCI                   11U
#define IOMUX_PC4_ESC_TX1_DATA1                  12U
#define IOMUX_PC4_ESC_TX1_DATA3                  14U
#define IOMUX_PC4_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[69] Bits (Pin name : PC5)*/
#define IOMUX_PC5_GPIO69                         1U
#define IOMUX_PC5_TRACE_DATA2                    2U
#define IOMUX_PC5_ETPWM3_1B                      3U
#define IOMUX_PC5_ETPWM4_1B                      4U
#define IOMUX_PC5_UC3_CTS_CS0                    6U
#define IOMUX_PC5_MCPWM2_2B                      7U
#define IOMUX_PC5_ETPWM1_1B                      8U
#define IOMUX_PC5_UC0_CTS_CS0                    11U
#define IOMUX_PC5_ESC_TX1_DATA0                  12U
#define IOMUX_PC5_ESC_TX1_DATA2                  14U
#define IOMUX_PC5_OUTPUTXBAR4                    16U

/* IOMUX_PINCM[70] Bits (Pin name : PC6)*/
#define IOMUX_PC6_GPIO70                         1U
#define IOMUX_PC6_TRACE_DATA3                    2U
#define IOMUX_PC6_ETPWM2_1B                      4U
#define IOMUX_PC6_UC3_TX_SDA_PICO                6U
#define IOMUX_PC6_MCPWM2_3B                      7U
#define IOMUX_PC6_UC0_TX_SDA_PICO                11U
#define IOMUX_PC6_ESC_TX1_CLK                    12U
#define IOMUX_PC6_ESC_TX1_DATA1                  14U
#define IOMUX_PC6_OUTPUTXBAR5                    16U

/* IOMUX_PINCM[71] Bits (Pin name : PC7)*/
#define IOMUX_PC7_GPIO71                         1U
#define IOMUX_PC7_UC0_RTS_POCI                   7U
#define IOMUX_PC7_UC5_RX_SCL                     8U
#define IOMUX_PC7_UC2_RX_SCL                     11U
#define IOMUX_PC7_ESC_LATCH1                     14U
#define IOMUX_PC7_OUTPUTXBAR1                    16U

/* IOMUX_PINCM[72] Bits (Pin name : PC8)*/
#define IOMUX_PC8_GPIO72                         1U
#define IOMUX_PC8_ETPWM1_1A                      2U
#define IOMUX_PC8_MCPWM0_1B                      3U
#define IOMUX_PC8_ETPWM3_1B                      4U
#define IOMUX_PC8_MCPWM0_2B                      7U
#define IOMUX_PC8_UC5_TX_SDA                     8U
#define IOMUX_PC8_UC2_TX_SDA                     11U
#define IOMUX_PC8_ESC_PHY0_LINKSTATUS            14U
#define IOMUX_PC8_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[73] Bits (Pin name : PC9)*/
#define IOMUX_PC9_GPIO73                         1U
#define IOMUX_PC9_ETPWM1_1B                      2U
#define IOMUX_PC9_MCPWM0_1A                      3U
#define IOMUX_PC9_ETPWM3_1A                      4U
#define IOMUX_PC9_MCPWM0_3B                      7U
#define IOMUX_PC9_ESC_PHY1_LINKSTATUS            14U
#define IOMUX_PC9_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[74] Bits (Pin name : PC10)*/
#define IOMUX_PC10_GPIO74                         1U
#define IOMUX_PC10_MCPWM0_2B                      3U
#define IOMUX_PC10_ETPWM4_1B                      4U
#define IOMUX_PC10_ETPWM2_1B                      5U
#define IOMUX_PC10_MCPWM0_1B                      7U
#define IOMUX_PC10_ESC_GPI0                       14U
#define IOMUX_PC10_OUTPUTXBAR4                    16U

/* IOMUX_PINCM[75] Bits (Pin name : PC11)*/
#define IOMUX_PC11_GPIO75                         1U
#define IOMUX_PC11_MCPWM0_2A                      3U
#define IOMUX_PC11_ETPWM4_1A                      4U
#define IOMUX_PC11_ETPWM2_1A                      5U
#define IOMUX_PC11_UC3_RTS_POCI                   6U
#define IOMUX_PC11_UC0_RTS_POCI                   11U
#define IOMUX_PC11_ESC_GPI1                       14U
#define IOMUX_PC11_OUTPUTXBAR5                    16U

/* IOMUX_PINCM[76] Bits (Pin name : PC12)*/
#define IOMUX_PC12_GPIO76                         1U
#define IOMUX_PC12_MCPWM0_3B                      3U
#define IOMUX_PC12_ETPWM5_1B                      4U
#define IOMUX_PC12_UC3_RX_SCL_SCLK                6U
#define IOMUX_PC12_UC0_RX_SCL_SCLK                11U
#define IOMUX_PC12_ESC_GPI2                       14U
#define IOMUX_PC12_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[77] Bits (Pin name : PC13)*/
#define IOMUX_PC13_GPIO77                         1U
#define IOMUX_PC13_MCPWM0_3A                      3U
#define IOMUX_PC13_ETPWM5_1A                      4U
#define IOMUX_PC13_UC3_CTS_CS0                    6U
#define IOMUX_PC13_UC0_CTS_CS0                    11U
#define IOMUX_PC13_ESC_GPI3                       14U
#define IOMUX_PC13_OUTPUTXBAR7                    16U

/* IOMUX_PINCM[78] Bits (Pin name : PC14)*/
#define IOMUX_PC14_GPIO78                         1U
#define IOMUX_PC14_MCPWM0_1A                      3U
#define IOMUX_PC14_ETPWM3_1A                      4U
#define IOMUX_PC14_ETPWM3_1B                      5U
#define IOMUX_PC14_UC3_TX_SDA_PICO                6U
#define IOMUX_PC14_MCPWM0_1B                      7U
#define IOMUX_PC14_UC0_TX_SDA_PICO                11U
#define IOMUX_PC14_ESC_TX0_DATA2                  13U
#define IOMUX_PC14_OUTPUTXBAR8                    16U

/* IOMUX_PINCM[79] Bits (Pin name : PC15)*/
#define IOMUX_PC15_GPIO79                         1U
#define IOMUX_PC15_ETPWM3_1A                      5U
#define IOMUX_PC15_MCPWM0_1A                      7U
#define IOMUX_PC15_UC0_TX_SDA_PICO                8U
#define IOMUX_PC15_UC0_RX_SCL_SCLK                9U
#define IOMUX_PC15_UC3_RX_SCL_SCLK                10U
#define IOMUX_PC15_UC3_TX_SDA_PICO                11U
#define IOMUX_PC15_ESC_GPO0                       14U
#define IOMUX_PC15_OUTPUTXBAR1                    16U

/* IOMUX_PINCM[80] Bits (Pin name : PC16_X1)*/
#define IOMUX_PC16_X1_GPIO80                         1U
#define IOMUX_PC16_X1_UC2_TX_SDA                     2U
#define IOMUX_PC16_X1_ETPWM1_1B                      4U
#define IOMUX_PC16_X1_UC1_TX_SDA_PICO                5U
#define IOMUX_PC16_X1_UC1_RTS_POCI                   6U
#define IOMUX_PC16_X1_MCPWM0_3B                      7U
#define IOMUX_PC16_X1_UC4_RTS_POCI                   8U
#define IOMUX_PC16_X1_ETPWM5_1B                      9U
#define IOMUX_PC16_X1_SD0_C1                         10U
#define IOMUX_PC16_X1_ESC_RX1_DATA1                  14U
#define IOMUX_PC16_X1_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[81] Bits (Pin name : PC17_X2)*/
#define IOMUX_PC17_X2_GPIO81                         1U
#define IOMUX_PC17_X2_UC2_RX_SCL                     2U
#define IOMUX_PC17_X2_UC1_RX_SCL_SCLK                6U
#define IOMUX_PC17_X2_SD0_D1                         10U
#define IOMUX_PC17_X2_ESC_RX1_DATA2                  14U
#define IOMUX_PC17_X2_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[82] Bits (Pin name : PC18)*/
#define IOMUX_PC18_GPIO82                         1U
#define IOMUX_PC18_MCPWM2_3A                      3U
#define IOMUX_PC18_ETPWM2_1A                      4U
#define IOMUX_PC18_ETPWM5_1A                      5U
#define IOMUX_PC18_ESC_LED_LINK0_ACTIVE           14U
#define IOMUX_PC18_OUTPUTXBAR7                    16U

/* IOMUX_PINCM[83] Bits (Pin name : PC19)*/
#define IOMUX_PC19_GPIO83                         1U
#define IOMUX_PC19_MCPWM2_1A                      3U
#define IOMUX_PC19_ETPWM0_1A                      4U
#define IOMUX_PC19_UC0_RX_SCL_SCLK                5U
#define IOMUX_PC19_UC5_RX_SCL                     6U
#define IOMUX_PC19_UC4_TX_SDA_PICO                7U
#define IOMUX_PC19_UC5_CTS                        8U
#define IOMUX_PC19_SYSCTL_FCC_IN                  9U
#define IOMUX_PC19_UC1_TX_SDA_PICO                11U
#define IOMUX_PC19_ESC_RX1_DV                     12U
#define IOMUX_PC19_ESC_MDIO_CLK                   14U
#define IOMUX_PC19_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[84] Bits (Pin name : PC20)*/
#define IOMUX_PC20_GPIO84                         1U
#define IOMUX_PC20_ETPWM0_1B                      3U
#define IOMUX_PC20_MCPWM2_1B                      4U
#define IOMUX_PC20_UC0_TX_SDA_PICO                5U
#define IOMUX_PC20_UC5_TX_SDA                     6U
#define IOMUX_PC20_UC4_RX_SCL_SCLK                7U
#define IOMUX_PC20_UC5_RTS                        8U
#define IOMUX_PC20_UC1_RX_SCL_SCLK                11U
#define IOMUX_PC20_ESC_RX1_DATA0                  12U
#define IOMUX_PC20_ESC_RX1_DATA1                  13U
#define IOMUX_PC20_ESC_MDIO_DATA                  14U
#define IOMUX_PC20_OUTPUTXBAR4                    16U

/* IOMUX_PINCM[85] Bits (Pin name : PC21)*/
#define IOMUX_PC21_GPIO85                         1U
#define IOMUX_PC21_MCPWM2_2B                      3U
#define IOMUX_PC21_ETPWM1_1B                      4U
#define IOMUX_PC21_ETPWM4_1B                      6U
#define IOMUX_PC21_ESC_RX1_DATA1                  12U
#define IOMUX_PC21_ESC_RX1_DATA0                  13U
#define IOMUX_PC21_ESC_PHY_CLK                    14U
#define IOMUX_PC21_OUTPUTXBAR5                    16U

/* IOMUX_PINCM[86] Bits (Pin name : PC22)*/
#define IOMUX_PC22_GPIO86                         1U
#define IOMUX_PC22_ETPWM2_1B                      3U
#define IOMUX_PC22_MCPWM2_3B                      4U
#define IOMUX_PC22_UC1_RX_SCL_SCLK                5U
#define IOMUX_PC22_UC4_RX_SCL_SCLK                6U
#define IOMUX_PC22_ETPWM0_1A                      7U
#define IOMUX_PC22_UC0_RTS_POCI                   8U
#define IOMUX_PC22_ETPWM4_1A                      9U
#define IOMUX_PC22_UC3_RTS_POCI                   10U
#define IOMUX_PC22_ETPWM5_1B                      11U
#define IOMUX_PC22_ESC_TX0_DATA2                  12U
#define IOMUX_PC22_ESC_TX0_DATA1                  14U
#define IOMUX_PC22_ESC_PHY0_LINKSTATUS            15U
#define IOMUX_PC22_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[87] Bits (Pin name : PC23)*/
#define IOMUX_PC23_GPIO87                         1U
#define IOMUX_PC23_UC5_RX_SCL                     2U
#define IOMUX_PC23_MCPWM2_2A                      3U
#define IOMUX_PC23_ETPWM1_1A                      4U
#define IOMUX_PC23_UC4_RTS_POCI                   5U
#define IOMUX_PC23_ETPWM4_1A                      6U
#define IOMUX_PC23_ETPWM0_1B                      7U
#define IOMUX_PC23_UC1_RTS_POCI                   10U
#define IOMUX_PC23_UC2_RX_SCL                     11U
#define IOMUX_PC23_ESC_RX1_DATA2                  12U
#define IOMUX_PC23_ESC_RX1_CLK                    14U
#define IOMUX_PC23_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[88] Bits (Pin name : PC24)*/
#define IOMUX_PC24_GPIO88                         1U
#define IOMUX_PC24_UC5_TX_SDA                     2U
#define IOMUX_PC24_ETPWM0_1B                      4U
#define IOMUX_PC24_UC4_CTS_CS0                    5U
#define IOMUX_PC24_ETPWM1_1A                      7U
#define IOMUX_PC24_UC1_CTS_CS0                    10U
#define IOMUX_PC24_UC2_TX_SDA                     11U
#define IOMUX_PC24_ESC_RX1_DATA3                  12U
#define IOMUX_PC24_ESC_RX1_DV                     14U
#define IOMUX_PC24_OUTPUTXBAR7                    16U

/* IOMUX_PINCM[89] Bits (Pin name : PC25)*/
#define IOMUX_PC25_GPIO89                         1U
#define IOMUX_PC25_UC5_CTS                        2U
#define IOMUX_PC25_UC2_TX_SDA                     3U
#define IOMUX_PC25_ETPWM0_1A                      4U
#define IOMUX_PC25_UC4_TX_SDA_PICO                5U
#define IOMUX_PC25_UC1_RX_SCL_SCLK                6U
#define IOMUX_PC25_ETPWM1_1B                      7U
#define IOMUX_PC25_UC5_RX_SCL                     8U
#define IOMUX_PC25_ETPWM4_1A                      9U
#define IOMUX_PC25_UC1_TX_SDA_PICO                10U
#define IOMUX_PC25_UC2_CTS                        11U
#define IOMUX_PC25_ESC_RX1_ERR                    14U
#define IOMUX_PC25_OUTPUTXBAR8                    16U

/* IOMUX_PINCM[90] Bits (Pin name : PC26)*/
#define IOMUX_PC26_GPIO90                         1U
#define IOMUX_PC26_UC5_RTS                        2U
#define IOMUX_PC26_UC2_RX_SCL                     3U
#define IOMUX_PC26_ETPWM1_1A                      4U
#define IOMUX_PC26_UC4_RX_SCL_SCLK                5U
#define IOMUX_PC26_UC1_RX_SCL_SCLK                6U
#define IOMUX_PC26_SYSCTL_XCLKOUT                 7U
#define IOMUX_PC26_UC5_TX_SDA                     8U
#define IOMUX_PC26_UC2_RTS                        11U
#define IOMUX_PC26_ESC_RX1_DATA0                  14U
#define IOMUX_PC26_OUTPUTXBAR1                    16U

/* IOMUX_PINCM[91] Bits (Pin name : PC27)*/
#define IOMUX_PC27_GPIO91                         1U
#define IOMUX_PC27_ESC_TX0_DATA2                  14U
#define IOMUX_PC27_OUTPUTXBAR4                    16U

/* IOMUX_PINCM[92] Bits (Pin name : PC28)*/
#define IOMUX_PC28_GPIO92                         1U
#define IOMUX_PC28_MCPWM2_1A                      3U
#define IOMUX_PC28_ETPWM0_1A                      4U
#define IOMUX_PC28_MCAN1_TX                       11U
#define IOMUX_PC28_ESC_TX0_DATA3                  14U
#define IOMUX_PC28_OUTPUTXBAR5                    16U

/* IOMUX_PINCM[93] Bits (Pin name : PC29)*/
#define IOMUX_PC29_GPIO93                         1U
#define IOMUX_PC29_MCPWM2_2A                      3U
#define IOMUX_PC29_ETPWM1_1A                      4U
#define IOMUX_PC29_ETPWM4_1A                      5U
#define IOMUX_PC29_UC0_CTS_CS0                    7U
#define IOMUX_PC29_ESC_TX1_ENA                    14U
#define IOMUX_PC29_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[94] Bits (Pin name : PC30)*/
#define IOMUX_PC30_GPIO94                         1U
#define IOMUX_PC30_MCPWM2_3A                      3U
#define IOMUX_PC30_ETPWM2_1A                      4U
#define IOMUX_PC30_UC2_RX_SCL                     5U
#define IOMUX_PC30_ETPWM5_1A                      6U
#define IOMUX_PC30_UC0_RX_SCL_SCLK                7U
#define IOMUX_PC30_UC5_RX_SCL                     8U
#define IOMUX_PC30_ESC_TX1_CLK                    14U
#define IOMUX_PC30_OUTPUTXBAR7                    16U

/* IOMUX_PINCM[95] Bits (Pin name : PC31)*/
#define IOMUX_PC31_GPIO95                         1U
#define IOMUX_PC31_MCPWM2_1A                      3U
#define IOMUX_PC31_ETPWM0_1A                      4U
#define IOMUX_PC31_UC2_TX_SDA                     5U
#define IOMUX_PC31_UC0_TX_SDA_PICO                7U
#define IOMUX_PC31_UC5_TX_SDA                     8U
#define IOMUX_PC31_ESC_LATCH0                     14U
#define IOMUX_PC31_OUTPUTXBAR8                    16U

/* IOMUX_PINCM[96] Bits (Pin name : PD0)*/
#define IOMUX_PD0_GPIO96                         1U
#define IOMUX_PD0_MCPWM2_1B                      3U
#define IOMUX_PD0_ETPWM0_1B                      4U
#define IOMUX_PD0_UC2_RTS                        5U
#define IOMUX_PD0_UC5_RTS                        8U
#define IOMUX_PD0_ETPWM4_1A                      14U
#define IOMUX_PD0_ETPWM0_1A                      15U
#define IOMUX_PD0_OUTPUTXBAR5                    16U

/* IOMUX_PINCM[97] Bits (Pin name : PD1)*/
#define IOMUX_PD1_GPIO97                         1U
#define IOMUX_PD1_MCPWM2_2B                      3U
#define IOMUX_PD1_ETPWM1_1B                      4U
#define IOMUX_PD1_UC2_CTS                        5U
#define IOMUX_PD1_UC5_CTS                        8U
#define IOMUX_PD1_ETPWM4_1B                      14U
#define IOMUX_PD1_ETPWM0_1B                      15U
#define IOMUX_PD1_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[98] Bits (Pin name : PD2)*/
#define IOMUX_PD2_GPIO98                         1U
#define IOMUX_PD2_MCPWM2_3B                      3U
#define IOMUX_PD2_ETPWM2_1B                      4U
#define IOMUX_PD2_ETPWM5_1B                      5U
#define IOMUX_PD2_UC0_RX_SCL_SCLK                6U
#define IOMUX_PD2_UC3_RX_SCL_SCLK                11U
#define IOMUX_PD2_ESC_GPO1                       14U
#define IOMUX_PD2_ETPWM1_1A                      15U
#define IOMUX_PD2_OUTPUTXBAR7                    16U

/* IOMUX_PINCM[99] Bits (Pin name : PD3)*/
#define IOMUX_PD3_GPIO99                         1U
#define IOMUX_PD3_UC2_RX_SCL                     5U
#define IOMUX_PD3_UC0_CTS_CS0                    6U
#define IOMUX_PD3_MCPWM2_1B                      7U
#define IOMUX_PD3_ETPWM0_1B                      8U
#define IOMUX_PD3_UC3_CTS_CS0                    10U
#define IOMUX_PD3_UC5_RX_SCL                     11U
#define IOMUX_PD3_ESC_TX1_DATA1                  13U
#define IOMUX_PD3_ESC_GPO2                       14U
#define IOMUX_PD3_ETPWM1_1B                      15U
#define IOMUX_PD3_OUTPUTXBAR8                    16U

/* IOMUX_PINCM[100] Bits (Pin name : PD4)*/
#define IOMUX_PD4_GPIO100                        1U
#define IOMUX_PD4_UC2_TX_SDA                     5U
#define IOMUX_PD4_UC0_TX_SDA_PICO                6U
#define IOMUX_PD4_UC3_TX_SDA_PICO                10U
#define IOMUX_PD4_UC5_TX_SDA                     11U
#define IOMUX_PD4_FSI0_FSIRX_D0                  12U
#define IOMUX_PD4_ETPWM3_1A                      13U
#define IOMUX_PD4_ETPWM5_1A                      14U
#define IOMUX_PD4_ETPWM2_1A                      15U
#define IOMUX_PD4_OUTPUTXBAR1                    16U

/* IOMUX_PINCM[101] Bits (Pin name : PD5)*/
#define IOMUX_PD5_GPIO101                        1U
#define IOMUX_PD5_UC0_RTS_POCI                   6U
#define IOMUX_PD5_UC1_CTS_CS0                    8U
#define IOMUX_PD5_UC0_CTS_CS0                    9U
#define IOMUX_PD5_ESC_TX0_DATA1                  12U
#define IOMUX_PD5_ESC_SYNC1                      14U
#define IOMUX_PD5_OUTPUTXBAR5                    16U

/* IOMUX_PINCM[102] Bits (Pin name : PD6)*/
#define IOMUX_PD6_GPIO102                        1U
#define IOMUX_PD6_FSI0_FSIRX_D0                  7U
#define IOMUX_PD6_UC1_RTS_POCI                   8U
#define IOMUX_PD6_UC0_RTS_POCI                   9U
#define IOMUX_PD6_ESC_RX0_DATA1                  12U
#define IOMUX_PD6_ESC_TX0_ENA                    13U
#define IOMUX_PD6_ESC_MDIO_CLK                   14U
#define IOMUX_PD6_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[103] Bits (Pin name : PD7)*/
#define IOMUX_PD7_GPIO103                        1U
#define IOMUX_PD7_UC0_RX_SCL_SCLK                5U
#define IOMUX_PD7_FSI0_FSIRX_D1                  7U
#define IOMUX_PD7_UC1_TX_SDA_PICO                8U
#define IOMUX_PD7_UC0_TX_SDA_PICO                9U
#define IOMUX_PD7_UC3_RX_SCL_SCLK                11U
#define IOMUX_PD7_ESC_RX0_DATA2                  12U
#define IOMUX_PD7_ESC_TX0_CLK                    13U
#define IOMUX_PD7_ESC_MDIO_DATA                  14U
#define IOMUX_PD7_ESC_RX1_DATA2                  15U
#define IOMUX_PD7_OUTPUTXBAR7                    16U

/* IOMUX_PINCM[104] Bits (Pin name : PD8)*/
#define IOMUX_PD8_GPIO104                        1U
#define IOMUX_PD8_UC0_TX_SDA_PICO                5U
#define IOMUX_PD8_FSI0_FSIRX_CLK                 7U
#define IOMUX_PD8_UC1_RX_SCL_SCLK                8U
#define IOMUX_PD8_UC0_RX_SCL_SCLK                9U
#define IOMUX_PD8_UC3_TX_SDA_PICO                11U
#define IOMUX_PD8_ESC_RX0_DATA3                  12U
#define IOMUX_PD8_ESC_PDI_UC_IRQ                 13U
#define IOMUX_PD8_ETPWM4_1A                      14U
#define IOMUX_PD8_ETPWM0_1A                      15U
#define IOMUX_PD8_OUTPUTXBAR8                    16U

/* IOMUX_PINCM[105] Bits (Pin name : PD9)*/
#define IOMUX_PD9_GPIO105                        1U
#define IOMUX_PD9_UC2_RX_SCL                     7U
#define IOMUX_PD9_UC0_TX_SDA_PICO                8U
#define IOMUX_PD9_UC5_RX_SCL                     9U
#define IOMUX_PD9_UC3_TX_SDA_PICO                10U
#define IOMUX_PD9_ESC_TX0_DATA0                  12U
#define IOMUX_PD9_ETPWM4_1B                      14U
#define IOMUX_PD9_ETPWM0_1B                      15U
#define IOMUX_PD9_OUTPUTXBAR1                    16U

/* IOMUX_PINCM[106] Bits (Pin name : NRST)*/
#define IOMUX_NRST_SYSCTL                         1U

/* IOMUX_PINCM[107] Bits (Pin name : PD11)*/
#define IOMUX_PD11_GPIO107                        1U
#define IOMUX_PD11_ETPWM0_1A                      2U
#define IOMUX_PD11_ETPWM5_1A                      3U
#define IOMUX_PD11_MCPWM0_1A                      4U
#define IOMUX_PD11_UC0_TX_SDA_PICO                5U
#define IOMUX_PD11_MCPWM2_1A                      6U
#define IOMUX_PD11_UC1_CTS_CS0                    7U
#define IOMUX_PD11_UC3_CTS_CS0                    8U
#define IOMUX_PD11_UC4_RX_SCL_SCLK                9U
#define IOMUX_PD11_MCAN0_RX                       10U
#define IOMUX_PD11_ESC_RX1_CLK                    14U
#define IOMUX_PD11_OUTPUTXBAR1                    16U

/* IOMUX_PINCM[108] Bits (Pin name : PD12)*/
#define IOMUX_PD12_GPIO108                        1U
#define IOMUX_PD12_ETPWM0_1B                      2U
#define IOMUX_PD12_ETPWM5_1B                      3U
#define IOMUX_PD12_MCPWM0_1B                      4U
#define IOMUX_PD12_UC0_RX_SCL_SCLK                5U
#define IOMUX_PD12_MCPWM2_1B                      6U
#define IOMUX_PD12_UC1_RTS_POCI                   7U
#define IOMUX_PD12_UC3_RTS_POCI                   8U
#define IOMUX_PD12_UC4_TX_SDA_PICO                9U
#define IOMUX_PD12_MCAN0_TX                       10U
#define IOMUX_PD12_ESC_RX1_DV                     14U
#define IOMUX_PD12_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[109] Bits (Pin name : PD13)*/
#define IOMUX_PD13_GPIO109                        1U
#define IOMUX_PD13_ETPWM4_1B                      2U
#define IOMUX_PD13_ETPWM0_1B                      3U
#define IOMUX_PD13_MCPWM1_2B                      4U
#define IOMUX_PD13_UC0_RTS_POCI                   5U
#define IOMUX_PD13_MCPWM2_3B                      6U
#define IOMUX_PD13_UC5_TX_SDA                     7U
#define IOMUX_PD13_UC5_RTS                        8U
#define IOMUX_PD13_UC1_TX_SDA_PICO                9U
#define IOMUX_PD13_OUTPUTXBAR2                    16U

/* IOMUX_PINCM[110] Bits (Pin name : PD14)*/
#define IOMUX_PD14_GPIO110                        1U
#define IOMUX_PD14_ETPWM1_1A                      2U
#define IOMUX_PD14_ETPWM2_1A                      3U
#define IOMUX_PD14_MCPWM0_2A                      4U
#define IOMUX_PD14_MCPWM1_1A                      5U
#define IOMUX_PD14_MCPWM0_1A                      6U
#define IOMUX_PD14_UC1_RX_SCL_SCLK                7U
#define IOMUX_PD14_UC3_RX_SCL_SCLK                8U
#define IOMUX_PD14_UC0_TX_SDA_PICO                9U
#define IOMUX_PD14_ESC_RX1_ERR                    14U
#define IOMUX_PD14_OUTPUTXBAR3                    16U

/* IOMUX_PINCM[111] Bits (Pin name : PD15)*/
#define IOMUX_PD15_GPIO111                        1U
#define IOMUX_PD15_ETPWM1_1B                      2U
#define IOMUX_PD15_ETPWM2_1B                      3U
#define IOMUX_PD15_MCPWM0_2B                      4U
#define IOMUX_PD15_MCPWM1_1B                      5U
#define IOMUX_PD15_MCPWM0_1B                      6U
#define IOMUX_PD15_UC1_TX_SDA_PICO                7U
#define IOMUX_PD15_UC3_TX_SDA_PICO                8U
#define IOMUX_PD15_UC0_RX_SCL_SCLK                9U
#define IOMUX_PD15_ESC_RX1_DATA0                  14U
#define IOMUX_PD15_OUTPUTXBAR4                    16U

/* IOMUX_PINCM[112] Bits (Pin name : PD16)*/
#define IOMUX_PD16_GPIO112                        1U
#define IOMUX_PD16_ETPWM3_1A                      2U
#define IOMUX_PD16_ETPWM4_1A                      3U
#define IOMUX_PD16_MCPWM1_1A                      4U
#define IOMUX_PD16_MCPWM1_3A                      5U
#define IOMUX_PD16_MCPWM2_2A                      6U
#define IOMUX_PD16_UC2_RX_SCL                     7U
#define IOMUX_PD16_UC4_RX_SCL_SCLK                8U
#define IOMUX_PD16_UC1_CTS_CS0                    9U
#define IOMUX_PD16_ESC_RX1_DATA3                  14U
#define IOMUX_PD16_OUTPUTXBAR7                    16U

/* IOMUX_PINCM[113] Bits (Pin name : PD17)*/
#define IOMUX_PD17_GPIO113                        1U
#define IOMUX_PD17_ETPWM2_1A                      2U
#define IOMUX_PD17_ETPWM3_1A                      3U
#define IOMUX_PD17_MCPWM0_3A                      4U
#define IOMUX_PD17_MCPWM1_2A                      5U
#define IOMUX_PD17_MCPWM0_2A                      6U
#define IOMUX_PD17_UC2_CTS                        7U
#define IOMUX_PD17_UC4_CTS_CS0                    8U
#define IOMUX_PD17_UC0_CTS_CS0                    9U
#define IOMUX_PD17_MCAN1_RX                       10U
#define IOMUX_PD17_ESC_RX1_DATA1                  14U
#define IOMUX_PD17_OUTPUTXBAR5                    16U

/* IOMUX_PINCM[114] Bits (Pin name : PD18)*/
#define IOMUX_PD18_GPIO114                        1U
#define IOMUX_PD18_ETPWM2_1B                      2U
#define IOMUX_PD18_ETPWM3_1B                      3U
#define IOMUX_PD18_MCPWM0_3B                      4U
#define IOMUX_PD18_MCPWM1_2B                      5U
#define IOMUX_PD18_MCPWM0_2B                      6U
#define IOMUX_PD18_UC2_RTS                        7U
#define IOMUX_PD18_UC4_RTS_POCI                   8U
#define IOMUX_PD18_UC0_RTS_POCI                   9U
#define IOMUX_PD18_MCAN1_TX                       10U
#define IOMUX_PD18_ESC_RX1_DATA2                  14U
#define IOMUX_PD18_OUTPUTXBAR6                    16U

/* IOMUX_PINCM[115] Bits (Pin name : PD19)*/
#define IOMUX_PD19_GPIO115                        1U
#define IOMUX_PD19_ETPWM3_1B                      2U
#define IOMUX_PD19_ETPWM4_1B                      3U
#define IOMUX_PD19_MCPWM1_1B                      4U
#define IOMUX_PD19_MCPWM1_3B                      5U
#define IOMUX_PD19_MCPWM2_2B                      6U
#define IOMUX_PD19_UC2_TX_SDA                     7U
#define IOMUX_PD19_UC4_TX_SDA_PICO                8U
#define IOMUX_PD19_UC1_RTS_POCI                   9U
#define IOMUX_PD19_OUTPUTXBAR8                    16U

/* IOMUX_PINCM[116] Bits (Pin name : PD20)*/
#define IOMUX_PD20_GPIO116                        1U
#define IOMUX_PD20_ETPWM4_1A                      2U
#define IOMUX_PD20_ETPWM0_1A                      3U
#define IOMUX_PD20_MCPWM1_2A                      4U
#define IOMUX_PD20_UC0_CTS_CS0                    5U
#define IOMUX_PD20_MCPWM2_3A                      6U
#define IOMUX_PD20_UC5_RX_SCL                     7U
#define IOMUX_PD20_UC5_CTS                        8U
#define IOMUX_PD20_UC1_RX_SCL_SCLK                9U
#define IOMUX_PD20_OUTPUTXBAR1                    16U




#ifdef __cplusplus
}
#endif

#endif /* hw_pinmap__include */

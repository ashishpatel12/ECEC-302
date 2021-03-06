#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* Rx_1 */
#define Rx_1__0__DM__MASK 0x7000u
#define Rx_1__0__DM__SHIFT 12
#define Rx_1__0__DR CYREG_PRT0_DR
#define Rx_1__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define Rx_1__0__HSIOM_MASK 0x000F0000u
#define Rx_1__0__HSIOM_SHIFT 16u
#define Rx_1__0__INTCFG CYREG_PRT0_INTCFG
#define Rx_1__0__INTSTAT CYREG_PRT0_INTSTAT
#define Rx_1__0__MASK 0x10u
#define Rx_1__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Rx_1__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Rx_1__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Rx_1__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Rx_1__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Rx_1__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Rx_1__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Rx_1__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Rx_1__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Rx_1__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Rx_1__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Rx_1__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Rx_1__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Rx_1__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Rx_1__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Rx_1__0__PC CYREG_PRT0_PC
#define Rx_1__0__PC2 CYREG_PRT0_PC2
#define Rx_1__0__PORT 0u
#define Rx_1__0__PS CYREG_PRT0_PS
#define Rx_1__0__SHIFT 4
#define Rx_1__DR CYREG_PRT0_DR
#define Rx_1__INTCFG CYREG_PRT0_INTCFG
#define Rx_1__INTSTAT CYREG_PRT0_INTSTAT
#define Rx_1__MASK 0x10u
#define Rx_1__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Rx_1__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Rx_1__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Rx_1__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Rx_1__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Rx_1__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Rx_1__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Rx_1__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Rx_1__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Rx_1__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Rx_1__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Rx_1__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Rx_1__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Rx_1__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Rx_1__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Rx_1__PC CYREG_PRT0_PC
#define Rx_1__PC2 CYREG_PRT0_PC2
#define Rx_1__PORT 0u
#define Rx_1__PS CYREG_PRT0_PS
#define Rx_1__SHIFT 4

/* Tx_1 */
#define Tx_1__0__DM__MASK 0x38000u
#define Tx_1__0__DM__SHIFT 15
#define Tx_1__0__DR CYREG_PRT0_DR
#define Tx_1__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define Tx_1__0__HSIOM_MASK 0x00F00000u
#define Tx_1__0__HSIOM_SHIFT 20u
#define Tx_1__0__INTCFG CYREG_PRT0_INTCFG
#define Tx_1__0__INTSTAT CYREG_PRT0_INTSTAT
#define Tx_1__0__MASK 0x20u
#define Tx_1__0__OUT_SEL CYREG_UDB_PA0_CFG10
#define Tx_1__0__OUT_SEL_SHIFT 10u
#define Tx_1__0__OUT_SEL_VAL 1u
#define Tx_1__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Tx_1__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Tx_1__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Tx_1__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Tx_1__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Tx_1__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Tx_1__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Tx_1__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Tx_1__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Tx_1__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Tx_1__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Tx_1__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Tx_1__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Tx_1__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Tx_1__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Tx_1__0__PC CYREG_PRT0_PC
#define Tx_1__0__PC2 CYREG_PRT0_PC2
#define Tx_1__0__PORT 0u
#define Tx_1__0__PS CYREG_PRT0_PS
#define Tx_1__0__SHIFT 5
#define Tx_1__DR CYREG_PRT0_DR
#define Tx_1__INTCFG CYREG_PRT0_INTCFG
#define Tx_1__INTSTAT CYREG_PRT0_INTSTAT
#define Tx_1__MASK 0x20u
#define Tx_1__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Tx_1__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Tx_1__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Tx_1__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Tx_1__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Tx_1__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Tx_1__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Tx_1__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Tx_1__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Tx_1__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Tx_1__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Tx_1__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Tx_1__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Tx_1__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Tx_1__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Tx_1__PC CYREG_PRT0_PC
#define Tx_1__PC2 CYREG_PRT0_PC2
#define Tx_1__PORT 0u
#define Tx_1__PS CYREG_PRT0_PS
#define Tx_1__SHIFT 5

/* UART_1_BUART */
#define UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_UDB_W16_ACTL_00
#define UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_UDB_W16_CTL_00
#define UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_UDB_W16_CTL_00
#define UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_UDB_W16_CTL_00
#define UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_UDB_W16_CTL_00
#define UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_UDB_W16_MSK_00
#define UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_UDB_W16_MSK_00
#define UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_UDB_W16_MSK_00
#define UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_UDB_W16_MSK_00
#define UART_1_BUART_sRX_RxBitCounter__32BIT_CONTROL_AUX_CTL_REG CYREG_UDB_W32_ACTL_00
#define UART_1_BUART_sRX_RxBitCounter__32BIT_CONTROL_REG CYREG_UDB_W32_CTL_00
#define UART_1_BUART_sRX_RxBitCounter__32BIT_COUNT_REG CYREG_UDB_W32_CTL_00
#define UART_1_BUART_sRX_RxBitCounter__32BIT_PERIOD_REG CYREG_UDB_W32_MSK_00
#define UART_1_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL_00
#define UART_1_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_UDB_W8_CTL_00
#define UART_1_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST_00
#define UART_1_BUART_sRX_RxBitCounter__COUNT_REG CYREG_UDB_W8_CTL_00
#define UART_1_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST_00
#define UART_1_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define UART_1_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define UART_1_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_UDB_W8_MSK_00
#define UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_UDB_W16_ACTL_00
#define UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_UDB_W16_ST_00
#define UART_1_BUART_sRX_RxBitCounter_ST__32BIT_MASK_REG CYREG_UDB_W32_MSK_00
#define UART_1_BUART_sRX_RxBitCounter_ST__32BIT_STATUS_AUX_CTL_REG CYREG_UDB_W32_ACTL_00
#define UART_1_BUART_sRX_RxBitCounter_ST__32BIT_STATUS_REG CYREG_UDB_W32_ST_00
#define UART_1_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_UDB_W8_MSK_00
#define UART_1_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define UART_1_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL_00
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_UDB_CAT16_CTL_ST_00
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_UDB_CAT16_CTL_ST_00
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_UDB_W8_ST_00
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_UDB_W16_A0_00
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_UDB_W16_A1_00
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_UDB_W16_D0_00
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_UDB_W16_D1_00
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_UDB_W16_ACTL_00
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_UDB_W16_F0_00
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_UDB_W16_F1_00
#define UART_1_BUART_sRX_RxShifter_u0__32BIT_A0_REG CYREG_UDB_W32_A0_00
#define UART_1_BUART_sRX_RxShifter_u0__32BIT_A1_REG CYREG_UDB_W32_A1_00
#define UART_1_BUART_sRX_RxShifter_u0__32BIT_D0_REG CYREG_UDB_W32_D0_00
#define UART_1_BUART_sRX_RxShifter_u0__32BIT_D1_REG CYREG_UDB_W32_D1_00
#define UART_1_BUART_sRX_RxShifter_u0__32BIT_DP_AUX_CTL_REG CYREG_UDB_W32_ACTL_00
#define UART_1_BUART_sRX_RxShifter_u0__32BIT_F0_REG CYREG_UDB_W32_F0_00
#define UART_1_BUART_sRX_RxShifter_u0__32BIT_F1_REG CYREG_UDB_W32_F1_00
#define UART_1_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_UDB_CAT16_A_00
#define UART_1_BUART_sRX_RxShifter_u0__A0_REG CYREG_UDB_W8_A0_00
#define UART_1_BUART_sRX_RxShifter_u0__A1_REG CYREG_UDB_W8_A1_00
#define UART_1_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_UDB_CAT16_D_00
#define UART_1_BUART_sRX_RxShifter_u0__D0_REG CYREG_UDB_W8_D0_00
#define UART_1_BUART_sRX_RxShifter_u0__D1_REG CYREG_UDB_W8_D1_00
#define UART_1_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_00
#define UART_1_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_UDB_CAT16_F_00
#define UART_1_BUART_sRX_RxShifter_u0__F0_REG CYREG_UDB_W8_F0_00
#define UART_1_BUART_sRX_RxShifter_u0__F1_REG CYREG_UDB_W8_F1_00
#define UART_1_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define UART_1_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define UART_1_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_UDB_W16_ACTL_01
#define UART_1_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_UDB_W16_ST_01
#define UART_1_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_1_BUART_sRX_RxSts__3__POS 3
#define UART_1_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_1_BUART_sRX_RxSts__4__POS 4
#define UART_1_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_1_BUART_sRX_RxSts__5__POS 5
#define UART_1_BUART_sRX_RxSts__MASK 0x38u
#define UART_1_BUART_sRX_RxSts__MASK_REG CYREG_UDB_W8_MSK_01
#define UART_1_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL_01
#define UART_1_BUART_sRX_RxSts__STATUS_REG CYREG_UDB_W8_ST_01
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_UDB_W16_A0_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_UDB_W16_A1_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_UDB_W16_D0_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_UDB_W16_D1_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_UDB_W16_ACTL_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_UDB_W16_F0_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_UDB_W16_F1_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_UDB_CAT16_A_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_UDB_W8_A0_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_UDB_W8_A1_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_UDB_CAT16_D_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_UDB_W8_D0_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_UDB_W8_D1_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_UDB_CAT16_F_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_UDB_W8_F0_02
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_UDB_W8_F1_02
#define UART_1_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_UDB_CAT16_A_03
#define UART_1_BUART_sTX_TxShifter_u0__A0_REG CYREG_UDB_W8_A0_03
#define UART_1_BUART_sTX_TxShifter_u0__A1_REG CYREG_UDB_W8_A1_03
#define UART_1_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_UDB_CAT16_D_03
#define UART_1_BUART_sTX_TxShifter_u0__D0_REG CYREG_UDB_W8_D0_03
#define UART_1_BUART_sTX_TxShifter_u0__D1_REG CYREG_UDB_W8_D1_03
#define UART_1_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define UART_1_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_UDB_CAT16_F_03
#define UART_1_BUART_sTX_TxShifter_u0__F0_REG CYREG_UDB_W8_F0_03
#define UART_1_BUART_sTX_TxShifter_u0__F1_REG CYREG_UDB_W8_F1_03
#define UART_1_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_1_BUART_sTX_TxSts__0__POS 0
#define UART_1_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_1_BUART_sTX_TxSts__1__POS 1
#define UART_1_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_1_BUART_sTX_TxSts__2__POS 2
#define UART_1_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_1_BUART_sTX_TxSts__3__POS 3
#define UART_1_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_1_BUART_sTX_TxSts__MASK_REG CYREG_UDB_W8_MSK_03
#define UART_1_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define UART_1_BUART_sTX_TxSts__STATUS_REG CYREG_UDB_W8_ST_03

/* UART_1_IntClock */
#define UART_1_IntClock__DIVIDER_MASK 0x0000FFFFu
#define UART_1_IntClock__ENABLE CYREG_CLK_DIVIDER_A00
#define UART_1_IntClock__ENABLE_MASK 0x80000000u
#define UART_1_IntClock__MASK 0x80000000u
#define UART_1_IntClock__REGISTER CYREG_CLK_DIVIDER_A00

/* Miscellaneous */
#define CY_PROJECT_NAME "Lab 3b"
#define CY_VERSION "PSoC Creator  3.3 CP1"
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 18u
#define CYDEV_CHIP_DIE_PSOC4A 10u
#define CYDEV_CHIP_DIE_PSOC5LP 17u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04C81193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 10u
#define CYDEV_CHIP_MEMBER_4C 15u
#define CYDEV_CHIP_MEMBER_4D 6u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 11u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 9u
#define CYDEV_CHIP_MEMBER_4I 14u
#define CYDEV_CHIP_MEMBER_4J 7u
#define CYDEV_CHIP_MEMBER_4K 8u
#define CYDEV_CHIP_MEMBER_4L 13u
#define CYDEV_CHIP_MEMBER_4M 12u
#define CYDEV_CHIP_MEMBER_4N 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 17u
#define CYDEV_CHIP_MEMBER_5B 16u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 1u
#define CYDEV_DFT_SELECT_CLK1 2u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_M0S8_CTBM_VERSION 0
#define CYIPBLOCK_m0s8cpuss_VERSION 0
#define CYIPBLOCK_m0s8csd_VERSION 0
#define CYIPBLOCK_m0s8gpio2_VERSION 0
#define CYIPBLOCK_m0s8hsiom4a_VERSION 0
#define CYIPBLOCK_m0s8lcd_VERSION 0
#define CYIPBLOCK_m0s8lpcomp_VERSION 0
#define CYIPBLOCK_m0s8pclk_VERSION 0
#define CYIPBLOCK_m0s8sar_VERSION 0
#define CYIPBLOCK_m0s8scb_VERSION 0
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 0
#define CYIPBLOCK_m0s8udbif_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 2
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */

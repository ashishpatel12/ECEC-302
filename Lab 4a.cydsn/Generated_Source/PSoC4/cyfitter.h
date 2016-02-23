#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* SW */
#define SW__0__DM__MASK 0xE00000u
#define SW__0__DM__SHIFT 21
#define SW__0__DR CYREG_PRT0_DR
#define SW__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define SW__0__HSIOM_MASK 0xF0000000u
#define SW__0__HSIOM_SHIFT 28u
#define SW__0__INTCFG CYREG_PRT0_INTCFG
#define SW__0__INTSTAT CYREG_PRT0_INTSTAT
#define SW__0__MASK 0x80u
#define SW__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define SW__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define SW__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define SW__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define SW__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define SW__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define SW__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define SW__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define SW__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define SW__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define SW__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define SW__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define SW__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define SW__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define SW__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define SW__0__PC CYREG_PRT0_PC
#define SW__0__PC2 CYREG_PRT0_PC2
#define SW__0__PORT 0u
#define SW__0__PS CYREG_PRT0_PS
#define SW__0__SHIFT 7
#define SW__DR CYREG_PRT0_DR
#define SW__INTCFG CYREG_PRT0_INTCFG
#define SW__INTSTAT CYREG_PRT0_INTSTAT
#define SW__MASK 0x80u
#define SW__PA__CFG0 CYREG_UDB_PA0_CFG0
#define SW__PA__CFG1 CYREG_UDB_PA0_CFG1
#define SW__PA__CFG10 CYREG_UDB_PA0_CFG10
#define SW__PA__CFG11 CYREG_UDB_PA0_CFG11
#define SW__PA__CFG12 CYREG_UDB_PA0_CFG12
#define SW__PA__CFG13 CYREG_UDB_PA0_CFG13
#define SW__PA__CFG14 CYREG_UDB_PA0_CFG14
#define SW__PA__CFG2 CYREG_UDB_PA0_CFG2
#define SW__PA__CFG3 CYREG_UDB_PA0_CFG3
#define SW__PA__CFG4 CYREG_UDB_PA0_CFG4
#define SW__PA__CFG5 CYREG_UDB_PA0_CFG5
#define SW__PA__CFG6 CYREG_UDB_PA0_CFG6
#define SW__PA__CFG7 CYREG_UDB_PA0_CFG7
#define SW__PA__CFG8 CYREG_UDB_PA0_CFG8
#define SW__PA__CFG9 CYREG_UDB_PA0_CFG9
#define SW__PC CYREG_PRT0_PC
#define SW__PC2 CYREG_PRT0_PC2
#define SW__PORT 0u
#define SW__PS CYREG_PRT0_PS
#define SW__SHIFT 7
#define SW__SNAP CYREG_PRT0_INTSTAT

/* SW_int */
#define SW_int__INTC_CLR_EN_REG CYREG_CM0_ICER
#define SW_int__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define SW_int__INTC_MASK 0x01u
#define SW_int__INTC_NUMBER 0u
#define SW_int__INTC_PRIOR_MASK 0xC0u
#define SW_int__INTC_PRIOR_NUM 3u
#define SW_int__INTC_PRIOR_REG CYREG_CM0_IPR0
#define SW_int__INTC_SET_EN_REG CYREG_CM0_ISER
#define SW_int__INTC_SET_PD_REG CYREG_CM0_ISPR

/* LED */
#define LED__0__DM__MASK 0x1C0000u
#define LED__0__DM__SHIFT 18
#define LED__0__DR CYREG_PRT1_DR
#define LED__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define LED__0__HSIOM_MASK 0x0F000000u
#define LED__0__HSIOM_SHIFT 24u
#define LED__0__INTCFG CYREG_PRT1_INTCFG
#define LED__0__INTSTAT CYREG_PRT1_INTSTAT
#define LED__0__MASK 0x40u
#define LED__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LED__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LED__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LED__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LED__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LED__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LED__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LED__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LED__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LED__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LED__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LED__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LED__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LED__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LED__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LED__0__PC CYREG_PRT1_PC
#define LED__0__PC2 CYREG_PRT1_PC2
#define LED__0__PORT 1u
#define LED__0__PS CYREG_PRT1_PS
#define LED__0__SHIFT 6
#define LED__DR CYREG_PRT1_DR
#define LED__INTCFG CYREG_PRT1_INTCFG
#define LED__INTSTAT CYREG_PRT1_INTSTAT
#define LED__MASK 0x40u
#define LED__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LED__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LED__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LED__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LED__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LED__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LED__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LED__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LED__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LED__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LED__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LED__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LED__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LED__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LED__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LED__PC CYREG_PRT1_PC
#define LED__PC2 CYREG_PRT1_PC2
#define LED__PORT 1u
#define LED__PS CYREG_PRT1_PS
#define LED__SHIFT 6

/* Miscellaneous */
#define CY_PROJECT_NAME "Lab 4a"
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

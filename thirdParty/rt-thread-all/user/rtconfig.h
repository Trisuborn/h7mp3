#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Configuration */


#define USER_USE_ARTPI				1
#define USER_USE_MiniSTM32H7xx		2
#define USER_USE_BOARD	            USER_USE_MiniSTM32H7xx


/* RT-Thread Kernel */

#define RT_NAME_MAX 16
#define RT_ALIGN_SIZE 4
#define RT_THREAD_PRIORITY_32
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 1000
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_USING_IDLE_HOOK
#define RT_IDLE_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 512
#define RT_DEBUG
#define RT_DEBUG_COLOR

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE

/* Memory Management */

// #define RT_USING_MEMPOOL
// #define RT_USING_SMALL_MEM
#define RT_USING_HEAP
#define RT_USING_MEMHEAP
#define RT_USING_MEMHEAP_AS_HEAP

/* Kernel Device Object */
#define RT_USING_DEVICE
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 256

#if USER_USE_BOARD == USER_USE_ARTPI
#define RT_CONSOLE_DEVICE_NAME "uart4"
#elif USER_USE_BOARD == USER_USE_MiniSTM32H7xx
#define RT_CONSOLE_DEVICE_NAME "lpuart1"
#endif

#define RT_VER_NUM 0x40002
#define ARCH_ARM
#define RT_USING_CPU_FFS
#define ARCH_ARM_CORTEX_M
#define ARCH_ARM_CORTEX_M7

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE (32*1024)
#define RT_MAIN_THREAD_PRIORITY 10

// #define RT_USING_ULOG
#define ULOG_USING_SYSLOG
#define ULOG_OUTPUT_FLOAT
//#define ULOG_TIME_USING_TIMESTAMP
#define ULOG_USING_COLOR
#define ULOG_USING_FILTER
//#define ULOG_USING_ASYNC_OUTPUT
#define ULOG_ASYNC_OUTPUT_STORE_LINES       32
#define ULOG_ASYNC_OUTPUT_BUF_SIZE          1024
#define ULOG_ASYNC_OUTPUT_THREAD_STACK      2048
#define ULOG_ASYNC_OUTPUT_THREAD_PRIORITY   20
#define ULOG_OUTPUT_LVL 7
#define ULOG_ASSERT_ENABLE
#define ULOG_LINE_BUF_SIZE 256
//#define ULOG_OUTPUT_TIME
//#define ULOG_OUTPUT_LEVEL
#define ULOG_OUTPUT_TAG
#define ULOG_BACKEND_USING_CONSOLE

// #define DRV_DEBUG

/* C++ features */


/* Command shell */

#define RT_USING_FINSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 32
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION
#define FINSH_THREAD_PRIORITY 20
#define FINSH_THREAD_STACK_SIZE (32*1024)
#define FINSH_CMD_SIZE 128
#define FINSH_USING_MSH
#define FINSH_USING_MSH_DEFAULT
#define FINSH_USING_MSH_ONLY
#define FINSH_ARG_MAX 10


/* Device virtual file system */


/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_PIPE_BUFSZ 512
#define RT_USING_SERIAL
#define RT_SERIAL_RB_BUFSZ 64
#define RT_USING_PIN
// #define RT_USING_HWCRYPTO
// #define RT_HWCRYPTO_DEFAULT_NAME "hwcryto"
// #define RT_HWCRYPTO_IV_MAX_SIZE 16
// #define RT_HWCRYPTO_KEYBIT_MAX_SIZE 256
// #define RT_HWCRYPTO_USING_RNG
// #define RT_HWCRYPTO_USING_CRC

/* Using USB */


/* POSIX layer and C standard library */
// #define RT_USING_LIBC
// #define RT_USING_POSIX
// #define RT_LIBC_USING_TIME

/* Network */

/* Socket abstraction layer */


/* Network interface device */


/* light weight TCP/IP stack */


/* AT commands */


/* VBUS(Virtual Software BUS) */


/* Utilities */


/* RT-Thread online packages */

/* IoT - internet of things */


/* Wi-Fi */

/* Marvell WiFi */


/* Wiced WiFi */


/* IoT Cloud */


/* security packages */


/* language packages */


/* multimedia packages */


/* tools packages */


/* system packages */
#define RT_USING_DFS
// #define RT_USING_DFS_MNTTABLE
#define RT_USING_DFS_DEVFS
#define DFS_USING_WORKDIR
#define DFS_FILESYSTEMS_MAX 10
#define DFS_FILESYSTEM_TYPES_MAX 10
#define DFS_FD_MAX 16

#define RT_USING_DFS_ELMFAT
#define RT_DFS_ELM_REENTRANT

/* peripheral libraries and drivers */
#define RT_USING_SFUD
#define RT_SFUD_USING_SFDP
#define RT_SFUD_USING_QSPI
#define RT_SFUD_USING_FLASH_INFO_TABLE
#define RT_SFUD_SPI_MAX_HZ  (120 * 1000000)
/* miscellaneous packages */


/* samples: kernel and components samples */

#define SOC_FAMILY_STM32
#define SOC_SERIES_STM32H7

/* Hardware Drivers Config */

#define SOC_STM32H750IB

/* Onboard Peripheral Drivers */
#if USER_USE_BOARD == USER_USE_ARTPI
#define BSP_USING_SDRAM
#endif

/* On-chip Peripheral Drivers */

// #define BSP_USING_ON_CHIP_FLASH

#define BSP_USING_DCMI
#define BSP_USING_OV2640

#define RT_USING_PWM
#define BSP_USING_PWM1
#define BSP_USING_PWM1_CH2

#define BSP_USING_GPIO

#define BSP_USING_LCD
#define LCD_BACKLIGHT_USING_GPIO

#define RT_USING_SDIO
#define BSP_USING_SDMMC
#define BSP_USING_SDIO


#define RT_USING_SPI
#define BSP_USING_SPI1
#define BSP_USING_SPI4
// #define BSP_SPI4_TX_USING_DMA


#define RT_USING_QSPI
#define BSP_USING_QSPI
#define BSP_USING_QSPI_FLASH

#define RT_USING_I2C
// #define RT_I2C_BITOPS_DEBUG
// #define RT_I2C_DEBUG
#define BSP_USING_I2C1

#define BSP_USING_UART
#define BSP_USING_UART4
#define BSP_USING_LPUART1

#define RT_USING_RTC
#define BSP_USING_ONCHIP_RTC

#define BSP_USING_CRC
#define BSP_USING_RNG
#define BSP_USING_UDID

/* Board extended module Drivers */

#endif

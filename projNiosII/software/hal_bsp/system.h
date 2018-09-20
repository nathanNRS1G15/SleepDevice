/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_qsys_0' in SOPC Builder design 'projNiosII'
 * SOPC Builder design path: C:/Users/natha/Desktop/My Github/SleepDevice/projNiosII/projNiosII.sopcinfo
 *
 * Generated: Thu Sep 20 11:48:54 BST 2018
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x01020820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x19
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00800020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x19
#define ALT_CPU_NAME "nios2_qsys_0"
#define ALT_CPU_RESET_ADDR 0x00800000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x01020820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x19
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00800020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x19
#define NIOS2_RESET_ADDR 0x00800000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SPI
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_QSYS
#define __ALTPLL


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone III"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x10210b0
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x10210b0
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x10210b0
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "projNiosII"


/*
 * altpll_0 configuration
 *
 */

#define ALTPLL_0_BASE 0x1021080
#define ALTPLL_0_IRQ -1
#define ALTPLL_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ALTPLL_0_NAME "/dev/altpll_0"
#define ALTPLL_0_SPAN 16
#define ALTPLL_0_TYPE "altpll"
#define ALT_MODULE_CLASS_altpll_0 altpll


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 4
#define ALT_SYS_CLK TIMER_0
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x10210b0
#define JTAG_UART_0_IRQ 1
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * new_sdram_controller_0 configuration
 *
 */

#define ALT_MODULE_CLASS_new_sdram_controller_0 altera_avalon_new_sdram_controller
#define NEW_SDRAM_CONTROLLER_0_BASE 0x800000
#define NEW_SDRAM_CONTROLLER_0_CAS_LATENCY 2
#define NEW_SDRAM_CONTROLLER_0_CONTENTS_INFO
#define NEW_SDRAM_CONTROLLER_0_INIT_NOP_DELAY 0.0
#define NEW_SDRAM_CONTROLLER_0_INIT_REFRESH_COMMANDS 2
#define NEW_SDRAM_CONTROLLER_0_IRQ -1
#define NEW_SDRAM_CONTROLLER_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define NEW_SDRAM_CONTROLLER_0_IS_INITIALIZED 1
#define NEW_SDRAM_CONTROLLER_0_NAME "/dev/new_sdram_controller_0"
#define NEW_SDRAM_CONTROLLER_0_POWERUP_DELAY 100.0
#define NEW_SDRAM_CONTROLLER_0_REFRESH_PERIOD 31.25
#define NEW_SDRAM_CONTROLLER_0_REGISTER_DATA_IN 1
#define NEW_SDRAM_CONTROLLER_0_SDRAM_ADDR_WIDTH 0x16
#define NEW_SDRAM_CONTROLLER_0_SDRAM_BANK_WIDTH 2
#define NEW_SDRAM_CONTROLLER_0_SDRAM_COL_WIDTH 8
#define NEW_SDRAM_CONTROLLER_0_SDRAM_DATA_WIDTH 16
#define NEW_SDRAM_CONTROLLER_0_SDRAM_NUM_BANKS 4
#define NEW_SDRAM_CONTROLLER_0_SDRAM_NUM_CHIPSELECTS 1
#define NEW_SDRAM_CONTROLLER_0_SDRAM_ROW_WIDTH 12
#define NEW_SDRAM_CONTROLLER_0_SHARED_DATA 0
#define NEW_SDRAM_CONTROLLER_0_SIM_MODEL_BASE 0
#define NEW_SDRAM_CONTROLLER_0_SPAN 8388608
#define NEW_SDRAM_CONTROLLER_0_STARVATION_INDICATOR 0
#define NEW_SDRAM_CONTROLLER_0_TRISTATE_BRIDGE_SLAVE ""
#define NEW_SDRAM_CONTROLLER_0_TYPE "altera_avalon_new_sdram_controller"
#define NEW_SDRAM_CONTROLLER_0_T_AC 5.4
#define NEW_SDRAM_CONTROLLER_0_T_MRD 3
#define NEW_SDRAM_CONTROLLER_0_T_RCD 20.0
#define NEW_SDRAM_CONTROLLER_0_T_RFC 70.0
#define NEW_SDRAM_CONTROLLER_0_T_RP 20.0
#define NEW_SDRAM_CONTROLLER_0_T_WR 14.0


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x1010000
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "projNiosII_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 51200
#define ONCHIP_MEMORY2_0_SPAN 51200
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * pio_LCD_control configuration
 *
 */

#define ALT_MODULE_CLASS_pio_LCD_control altera_avalon_pio
#define PIO_LCD_CONTROL_BASE 0x1021060
#define PIO_LCD_CONTROL_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_LCD_CONTROL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_LCD_CONTROL_CAPTURE 0
#define PIO_LCD_CONTROL_DATA_WIDTH 8
#define PIO_LCD_CONTROL_DO_TEST_BENCH_WIRING 0
#define PIO_LCD_CONTROL_DRIVEN_SIM_VALUE 0
#define PIO_LCD_CONTROL_EDGE_TYPE "NONE"
#define PIO_LCD_CONTROL_FREQ 50000000
#define PIO_LCD_CONTROL_HAS_IN 0
#define PIO_LCD_CONTROL_HAS_OUT 1
#define PIO_LCD_CONTROL_HAS_TRI 0
#define PIO_LCD_CONTROL_IRQ -1
#define PIO_LCD_CONTROL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_LCD_CONTROL_IRQ_TYPE "NONE"
#define PIO_LCD_CONTROL_NAME "/dev/pio_LCD_control"
#define PIO_LCD_CONTROL_RESET_VALUE 0
#define PIO_LCD_CONTROL_SPAN 16
#define PIO_LCD_CONTROL_TYPE "altera_avalon_pio"


/*
 * pio_LCD_data configuration
 *
 */

#define ALT_MODULE_CLASS_pio_LCD_data altera_avalon_pio
#define PIO_LCD_DATA_BASE 0x1021070
#define PIO_LCD_DATA_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_LCD_DATA_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_LCD_DATA_CAPTURE 0
#define PIO_LCD_DATA_DATA_WIDTH 8
#define PIO_LCD_DATA_DO_TEST_BENCH_WIRING 0
#define PIO_LCD_DATA_DRIVEN_SIM_VALUE 0
#define PIO_LCD_DATA_EDGE_TYPE "NONE"
#define PIO_LCD_DATA_FREQ 50000000
#define PIO_LCD_DATA_HAS_IN 0
#define PIO_LCD_DATA_HAS_OUT 1
#define PIO_LCD_DATA_HAS_TRI 0
#define PIO_LCD_DATA_IRQ -1
#define PIO_LCD_DATA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_LCD_DATA_IRQ_TYPE "NONE"
#define PIO_LCD_DATA_NAME "/dev/pio_LCD_data"
#define PIO_LCD_DATA_RESET_VALUE 0
#define PIO_LCD_DATA_SPAN 16
#define PIO_LCD_DATA_TYPE "altera_avalon_pio"


/*
 * pio_LED configuration
 *
 */

#define ALT_MODULE_CLASS_pio_LED altera_avalon_pio
#define PIO_LED_BASE 0x10210a0
#define PIO_LED_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_LED_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_LED_CAPTURE 0
#define PIO_LED_DATA_WIDTH 8
#define PIO_LED_DO_TEST_BENCH_WIRING 0
#define PIO_LED_DRIVEN_SIM_VALUE 0
#define PIO_LED_EDGE_TYPE "NONE"
#define PIO_LED_FREQ 50000000
#define PIO_LED_HAS_IN 0
#define PIO_LED_HAS_OUT 1
#define PIO_LED_HAS_TRI 0
#define PIO_LED_IRQ -1
#define PIO_LED_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_LED_IRQ_TYPE "NONE"
#define PIO_LED_NAME "/dev/pio_LED"
#define PIO_LED_RESET_VALUE 0
#define PIO_LED_SPAN 16
#define PIO_LED_TYPE "altera_avalon_pio"


/*
 * pio_Switches configuration
 *
 */

#define ALT_MODULE_CLASS_pio_Switches altera_avalon_pio
#define PIO_SWITCHES_BASE 0x1021090
#define PIO_SWITCHES_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_SWITCHES_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_SWITCHES_CAPTURE 0
#define PIO_SWITCHES_DATA_WIDTH 8
#define PIO_SWITCHES_DO_TEST_BENCH_WIRING 0
#define PIO_SWITCHES_DRIVEN_SIM_VALUE 0
#define PIO_SWITCHES_EDGE_TYPE "NONE"
#define PIO_SWITCHES_FREQ 50000000
#define PIO_SWITCHES_HAS_IN 1
#define PIO_SWITCHES_HAS_OUT 0
#define PIO_SWITCHES_HAS_TRI 0
#define PIO_SWITCHES_IRQ -1
#define PIO_SWITCHES_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_SWITCHES_IRQ_TYPE "NONE"
#define PIO_SWITCHES_NAME "/dev/pio_Switches"
#define PIO_SWITCHES_RESET_VALUE 0
#define PIO_SWITCHES_SPAN 16
#define PIO_SWITCHES_TYPE "altera_avalon_pio"


/*
 * spi_master configuration
 *
 */

#define ALT_MODULE_CLASS_spi_master altera_avalon_spi
#define SPI_MASTER_BASE 0x1021020
#define SPI_MASTER_CLOCKMULT 1
#define SPI_MASTER_CLOCKPHASE 0
#define SPI_MASTER_CLOCKPOLARITY 0
#define SPI_MASTER_CLOCKUNITS "Hz"
#define SPI_MASTER_DATABITS 8
#define SPI_MASTER_DATAWIDTH 16
#define SPI_MASTER_DELAYMULT "1.0E-9"
#define SPI_MASTER_DELAYUNITS "ns"
#define SPI_MASTER_EXTRADELAY 0
#define SPI_MASTER_INSERT_SYNC 0
#define SPI_MASTER_IRQ 2
#define SPI_MASTER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SPI_MASTER_ISMASTER 1
#define SPI_MASTER_LSBFIRST 0
#define SPI_MASTER_NAME "/dev/spi_master"
#define SPI_MASTER_NUMSLAVES 1
#define SPI_MASTER_PREFIX "spi_"
#define SPI_MASTER_SPAN 32
#define SPI_MASTER_SYNC_REG_DEPTH 2
#define SPI_MASTER_TARGETCLOCK 128000u
#define SPI_MASTER_TARGETSSDELAY "0.0"
#define SPI_MASTER_TYPE "altera_avalon_spi"


/*
 * spi_slave configuration
 *
 */

#define ALT_MODULE_CLASS_spi_slave altera_avalon_spi
#define SPI_SLAVE_BASE 0x1021000
#define SPI_SLAVE_CLOCKMULT 1
#define SPI_SLAVE_CLOCKPHASE 0
#define SPI_SLAVE_CLOCKPOLARITY 0
#define SPI_SLAVE_CLOCKUNITS "Hz"
#define SPI_SLAVE_DATABITS 8
#define SPI_SLAVE_DATAWIDTH 16
#define SPI_SLAVE_DELAYMULT "1.0E-9"
#define SPI_SLAVE_DELAYUNITS "ns"
#define SPI_SLAVE_EXTRADELAY 0
#define SPI_SLAVE_INSERT_SYNC 0
#define SPI_SLAVE_IRQ 3
#define SPI_SLAVE_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SPI_SLAVE_ISMASTER 0
#define SPI_SLAVE_LSBFIRST 0
#define SPI_SLAVE_NAME "/dev/spi_slave"
#define SPI_SLAVE_NUMSLAVES 1
#define SPI_SLAVE_PREFIX "spi_"
#define SPI_SLAVE_SPAN 32
#define SPI_SLAVE_SYNC_REG_DEPTH 2
#define SPI_SLAVE_TARGETCLOCK 128000u
#define SPI_SLAVE_TARGETSSDELAY "0.0"
#define SPI_SLAVE_TYPE "altera_avalon_spi"


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 1
#define TIMER_0_BASE 0x1021040
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 1
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 0
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 499999
#define TIMER_0_MULT 0.001
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 10
#define TIMER_0_PERIOD_UNITS "ms"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 0
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 100.0
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */

/**
 * @file sys_init.h
 * @author Neeraj Singhal
 * @brief 01262019_spfp_dft_matrix_512s
 * @version 1.0
 * @date 2019-01-26
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef SYS_INIT_H_
#define SYS_INIT_H_

#include <msp430fr5969.h>
#include <stdint.h>

#include "Complex.h"
#include "uart_func.h"
#include "twiddle_table.h"
#include "ppg_data.h"

/**
 * @brief Initialize the clock system to generate 16 MHz DCO clock.
 *
 */
inline void config_clocks(void)
{
    CSCTL0_H    = CSKEY_H;              // Unlock CS registers.
    CSCTL1      = DCOFSEL_4 |           // Set DCO to 16 MHz, DCORSEL for
                  DCORSEL;              //   high speed mode enabled.
    CSCTL2      = SELA__VLOCLK |        // Set ACLK = VLOCLK = 10 kHz.
                  SELS__DCOCLK |        //   Set SMCLK = DCOCLK.
                  SELM__DCOCLK;         //   Set MCLK = DCOCLK.
                                        // SMCLK = MCLK = DCOCLK = 16 MHz.
    CSCTL3      = DIVA__1 |             //   Set ACLK divider to 1.
                  DIVS__1 |             //   Set SMCLK divider to 1.
                  DIVM__1;              //   Set MCLK divider to 1.
                                        // Set all dividers to 1.
    CSCTL0_H    = 0;                    // Lock CS registers.
}



/**
 * @brief Configure unused GPIOs to minimize energy-consumption
 *
 */
inline void config_GPIO(void)
{
    // Configure unused GPIOs to minimize energy-consumption:
    // Port 1:
    P1DIR = 0xFF;
    P1OUT = 0x00;
    // Port 2:
    P2DIR = 0xFF;
    P2OUT = 0x00;
    // Port 3:
    P3DIR = 0xFF;
    P3OUT = 0x00;
    // Port 4:
    P4DIR = 0xFF;
    P4OUT = 0x00;
    // Port J:
    PJDIR = 0xFFFF;
    PJOUT = 0x0000;
}
#endif

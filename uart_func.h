/**
 * @file uart_func.h
 * @author Neeraj Singhal
 * @brief 01262019_spfp_dft_matrix_512s
 * @version 1.0
 * @date 2019-01-26
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef UART_FUNC_H_
#define UART_FUNC_H_

#include <msp430fr5969.h>   //For using registers

/**
 * @brief Initialization of the serial UART interface
 * Baud Rate 115200 baud and 16MHz Clk
 *
 */
inline void uart_init(void)
{
    UCA0CTLW0 |= UCSSEL__SMCLK |        // Select clock source SMCLK = 1 MHz.
                 UCSWRST;               // Enable software reset.

    // Set Baud rate of 115200 Bd rate and 16Mhz clk.
    // Recommended settings available in table 30-5, p. 779 of the User's Guide.
    UCA0BRW = 8;                      // Clock prescaler of the
                                        //   Baud rate generator.
    UCA0MCTLW_L = UCBRF_10 |             // First modulations stage.
                  UCOS16;               // Enable oversampling mode.
    UCA0MCTLW_H = 0xF7;                 // Second modulation stage.

    UCA0CTLW0 &= ~UCSWRST;              // Disable software reset and start
                                        //   eUSCI state machine.
}


void print_string(char *string);
void print_number(int num);
void print_fnumber(float num);

#endif

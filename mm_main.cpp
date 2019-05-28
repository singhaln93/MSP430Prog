/**
 * @file mm_main.cpp
 * @author Neeraj Singhal
 * @brief 01262019_spfp_dft_matrix-mul_(128/512)s
 * @version 1.0
 * @date 2019-01-26
 *
 * @copyright Copyright (c) 2019
 *
 */

/*Sample Sizes for Local(4-64)/PPG(128-512) Input data and Twiddle Matrix*/
//#define Samp_4
//#define Samp_8
//#define Samp_16
//#define Samp_32
//#define Samp_64
//#define Samp_128
#define Samp_256
//#define Samp_512
//#define Samp_128_ch1
//#define Samp_128_ch2
//#define Samp_256_ch1
//#define Samp_256_ch2
//#define Samp_512_ch1
//#define Samp_512_ch2


#define PERSISTENT __attribute__((section(".sysmem")))
#include "Header_files/sys_init.h"


/*Loop Variables*/
unsigned int i PERSISTENT, k PERSISTENT, n PERSISTENT;
unsigned int q PERSISTENT, R PERSISTENT;

Complex Arr_in[SAMPLES] PERSISTENT, Arr_out[SAMPLES] PERSISTENT;
Complex Twiddle[SAMPLES] PERSISTENT;

/*Function Declarations*/
inline void array_assign(void);
void serial_communication(void);
inline void fft(void);


/**
 * @brief main func runs the application
 * WDT, FRAM CTL, config_clocks(),config_GPIO(),uart_init(),
 * array_assign(), fft(), serial_communication()
 *
 * @return int zero
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;
    // Configure one FRAM wait state as required by the device datasheet for MCLK
    // operation beyond 8MHz before configuring the clock system.
    FRCTL0 = FRCTLPW | NWAITS_1;

    config_clocks();
    config_GPIO();

    // Initialize port 2:
    // Select Tx and Rx functionality of eUSCI0 for hardware UART.
    // P2.0 - UART Tx (UCA0TXD).
    // P2.1 - UART Rx (UCA0RXD).
    P2SEL0 &= ~(BIT1 | BIT0);       //P2SEL1-1 P2SEL0-0 Secondary Module Function p.366 User's guide
    P2SEL1 |= BIT1 | BIT0;

    // Initialize port 1:
    P1DIR |= BIT0;                      // P1.0 - output for LED2, off.
    P1OUT &= ~BIT0;
    // Initialize port 4:
    P4DIR |= BIT6;                      // P4.6 - output for LED1, off.
    P1OUT &= ~BIT6;

    // Disable the GPIO power-on default high-impedance mode to activate the
    // previously configured port settings.
    PM5CTL0 &= ~LOCKLPM5;

    uart_init();
    P4OUT |= BIT6;                  // Turn LED1 on.
    array_assign();
    fft();
    P4OUT &= ~BIT6;                 // Turn LED1 off.

    P1OUT |= BIT0;                  // Turn LED2 on.
    serial_communication();
    P1OUT &= ~BIT0;                 // Turn LED2 off.

    __bis_SR_register(LPM4_bits);
    return 0;
}


/**
 * @brief Array Assignment function
 *
 */
inline void array_assign()
{

    for(i=0;i<SAMPLES;i++)
    {
        Arr_in[i].real=Arr_in_real[i];
        Arr_in[i].imag=0;
    }

    for(i=0;i<SAMPLES;i++)
    {
        Twiddle[i].real=Twiddle_in_real[i];
        Twiddle[i].imag=Twiddle_in_imag[i];
    }
}


//const float SAMPLES_INV = 1/SAMPLES
//#define SAMPLES_INV 0.12345f

/**
 * @brief FFT function
 *
 */
inline void fft(void)
{
    for (k = 0; k < SAMPLES; k++)
     {
         for (n = 0; n < SAMPLES; n++)
         {
             R = k*n;//samples/2*samples
             if(R>=SAMPLES)
             {
               q=R*SAMPLES_INV;//q=1
               R-=q*SAMPLES;//k=0 reset
             }
             Arr_out[k] = Arr_out[k] + (Twiddle[R]*Arr_in[n]);
         }
     }
}


/**
 * @brief Serial Communication Function
 *
 */
void serial_communication(void)
{
    for (k = 0; k < SAMPLES; k++)
    {
       print_string("(");
       print_fnumber(Arr_out[k].real/1000);

       if(Arr_out[k].imag>=0)
       {
         print_string("+");
       }

       print_fnumber(Arr_out[k].imag/1000);
       print_string("j),");
    }
}

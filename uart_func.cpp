/**
 * @file uart_func.cpp
 * @author Neeraj Singhal
 * @brief 01262019_spfp_dft_matrix_512s
 * @version 1.0
 * @date 2019-01-26
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "uart_func.h"

/**
 * @brief Function used to print string on UART
 *
 * @param string
 */
void print_string(char *string)
{
    // Iterate through array, look for null pointer at end of string.
    unsigned int i = 0;
    while (string[i]!='\0')
    {
        while ((UCA0STATW & UCBUSY));    // Wait while module is busy with data.
        UCA0TXBUF = string[i];            // Transmit element i of data array.
        i++;                            // Increment variable for array address.
    }
}


/**
 * @brief Function used to print integer value on UART
 *
 * @param num
 */
void print_number(int num)
{
    char buf[20];
    char *str = &buf[19];
    *str = '\0';
    int count=0;

    if(num>=0)
    {
        do
        {
            unsigned long m = num;
            num /= 10;
            char c = (m - 10 * num) + 48;
            *--str = c;
        } while(num);
        print_string(str);
    }

    else
    {
        do
        {
            if(count==0){ num= -1*num;}
            else {num=num;}
             unsigned long m = num;
             num /= 10;
             char c = (m - 10 * num) + 48;
             *--str = c;
             count++;
        } while(num);
        *--str ='-';
        print_string(str);
    }
}


/**
 * @brief Function used to print float value on UART
 *
 * @param num
 */
void print_fnumber(float num)
{
    int int_num,dec_num;
    int_num=(int)num;
    dec_num=(num-int_num)*1000;

    if(dec_num<0)
    {
     dec_num=dec_num*(-1);
    }

    print_number(int_num);
    print_string(".");
    print_number(dec_num);
}

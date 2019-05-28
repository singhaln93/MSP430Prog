/**
 * @file twiddle_table.h
 * @author Neeraj Singhal
 * @brief 01262019_spfp_dft_matrix_512s
 * @version 1.0
 * @date 2019-01-26
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef TWIDDLE_TABLE_H_
#define TWIDDLE_TABLE_H_

#define PERSISTENT __attribute__((section(".sysmem")))

#ifdef Samp_4
#define SAMPLES 4
#define SAMPLES_INV 0.25
/*Initialization of Look Up table(for 4 Samples)*/
signed short const Twiddle_in_real[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\4_twiddle_real.txt>
};

signed short const Twiddle_in_imag[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\4_twiddle_imag.txt>
};

#endif

#ifdef Samp_8
#define SAMPLES 8
#define SAMPLES_INV 0.125
/*Initialization of Look Up table(for 8 Samples)*/
float const Twiddle_in_real[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\8_twiddle_real.txt>
};

float const Twiddle_in_imag[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\8_twiddle_imag.txt>
};

#endif

#ifdef Samp_16
#define SAMPLES 16
#define SAMPLES_INV 0.0625
/*Initialization of Look Up table(for 8 Samples)*/
float const Twiddle_in_real[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\16_twiddle_real.txt>
};

float const Twiddle_in_imag[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\16_twiddle_imag.txt>
};

#endif

#ifdef Samp_32
#define SAMPLES 32
#define SAMPLES_INV 0.03125
/*Initialization of Look Up table(for 32 Samples)*/
float const Twiddle_in_real[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\32_twiddle_real.txt>
};

float const Twiddle_in_imag[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\32_twiddle_imag.txt>
};

#endif

#ifdef Samp_64
#define SAMPLES 64
#define SAMPLES_INV 0.015625
/*Initialization of Look Up table(for 64 Samples)*/
float const Twiddle_in_real[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\64_twiddle_real.txt>
};

float const Twiddle_in_imag[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\64_twiddle_imag.txt>
};

#endif

#ifdef Samp_128
#define SAMPLES 128
#define SAMPLES_INV 0.0078125
/*Initialization of Look Up table(for 128 Samples)*/
float const Twiddle_in_real[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\128_twiddle_real.txt>
};

float const Twiddle_in_imag[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\128_twiddle_imag.txt>
};

#endif

#ifdef Samp_256
#define SAMPLES 256
#define SAMPLES_INV 0.00390625
/*Initialization of Look Up table(for 256 Samples)*/
float const Twiddle_in_real[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\256_twiddle_real.txt>
};

float const Twiddle_in_imag[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\256_twiddle_imag.txt>
};

#endif

#ifdef Samp_512
#define SAMPLES 512
#define SAMPLES_INV 0.001953125
/*Initialization of Look Up table(for 512 Samples)*/
float const Twiddle_in_real[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\512_twiddle_real.txt>
};

float const Twiddle_in_imag[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\512_twiddle_imag.txt>
};

#endif


#ifdef Samp_128_ch1
#define SAMPLES 128
#define SAMPLES_INV 0.0078125
/*Initialization of Look Up table(for 128 Samples)*/
float const Twiddle_in_real[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\128_twiddle_real.txt>
};

float const Twiddle_in_imag[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\128_twiddle_imag.txt>
};

#endif

#ifdef Samp_256_ch1
#define SAMPLES 256
#define SAMPLES_INV 0.00390625
/*Initialization of Look Up table(for 256 Samples)*/
float const Twiddle_in_real[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\256_twiddle_real.txt>
};

float const Twiddle_in_imag[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\256_twiddle_imag.txt>
};

#endif

#ifdef Samp_512_ch1
#define SAMPLES 512
#define SAMPLES_INV 0.001953125
/*Initialization of Look Up table(for 512 Samples)*/
float const Twiddle_in_real[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\512_twiddle_real.txt>
};

float const Twiddle_in_imag[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\512_twiddle_imag.txt>
};

#endif


#ifdef Samp_1024
#define SAMPLES 1024
#define SAMPLES_INV 0.0009765625
/*Initialization of Look Up table(for 1024 Samples)*/
float const Twiddle_in_real[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\1024_twiddle_real.txt>
};

float const Twiddle_in_imag[SAMPLES] PERSISTENT={
#include<C:\Users\NEERAJ\Desktop\MT\5_Data\3__twiddle_table\1024_twiddle_imag.txt>
};

#endif


#endif

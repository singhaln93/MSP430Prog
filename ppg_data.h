/**
 * @file ppg_data.h
 * @author Neeraj Singhal
 * @brief 01262019_spfp_dft_matrix_512s
 * @version 1.0
 * @date 2019-01-26
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef PPG_DATA_H_
#define PPG_DATA_H_
#include "twiddle_table.h"

#define PERSISTENT __attribute__((section(".sysmem")))

#ifdef Samp_4
/*Initialization of Look Up table(for 4 Samples)*/
signed short const Arr_in_real[SAMPLES] PERSISTENT={1,2,3,4};
#endif


#ifdef Samp_8
/*Initialization of Look Up table(for 8 Samples)*/
signed short const Arr_in_real[SAMPLES] PERSISTENT={1,2,3,4,5,6,7,8};
#endif


#ifdef Samp_16
/*Initialization of Look Up table(for 8 Samples)*/
signed short const Arr_in_real[SAMPLES] PERSISTENT={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
#endif


#ifdef Samp_32
/*Initialization of Look Up table(for 8 Samples)*/
signed short const Arr_in_real[SAMPLES] PERSISTENT={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,
19,20,21,22,23,24,25,26,27,28,29,30,31,32};
#endif


#ifdef Samp_64
/*Initialization of Look Up table(for 8 Samples)*/
signed short const Arr_in_real[SAMPLES] PERSISTENT={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,
19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,3,38,39,40,41,42,43,44,45,46,47,48,49,50,51,
52,53,54,55,56,57,58,59,60,61,62,63,64};
#endif


#ifdef Samp_128
/*Initialization of Look Up table(for 8 Samples)*/
signed short const Arr_in_real[SAMPLES] PERSISTENT={

#include<C:\Users\NEERAJ\Desktop\MT\5_Data\2__downsampled_reduced_data\128_123xx128_arr_mcu.txt>
};
#endif


#ifdef Samp_256
/*Initialization of Look Up table(for 8 Samples)*/
signed short const Arr_in_real[SAMPLES] PERSISTENT={

#include<C:\Users\NEERAJ\Desktop\MT\5_Data\2__downsampled_reduced_data\256_123xx256_arr_mcu.txt>
};
#endif


#ifdef Samp_512
/*Initialization of Look Up table(for 8 Samples)*/
signed short const Arr_in_real[SAMPLES] PERSISTENT={

#include<C:\Users\NEERAJ\Desktop\MT\5_Data\2__downsampled_reduced_data\512_123xx512_arr_mcu.txt>
};
#endif


/*DATA_8Hz_15_ch1*/
#ifdef Samp_128_ch1
/*Sample Data Initialization(8Hz for 15 sec)[ch1]*/
unsigned int Arr_in_real[SAMPLES] PERSISTENT={

#include<C:\Users\NEERAJ\Desktop\MT\5_Data\2__downsampled_reduced_data\128_ppg_ch1_downsampled_arr_mcu.txt>
};
#endif

/*DATA_8Hz_15_ch2*/
#ifdef Samp_128_ch2
/*Sample Data Initialization(8Hz for 30 sec)[ch2]*/
unsigned int Arr_in_real[SAMPLES] PERSISTENT={

#include<C:\Users\NEERAJ\Desktop\MT\5_Data\2__downsampled_reduced_data\128_ppg_ch2_downsampled_arr_mcu.txt>
};
#endif

/*DATA_8Hz_30_ch1*/
#ifdef Samp_256_ch1
/*Sample Data Initialization(8Hz for 30 sec)[ch1]*/
unsigned int Arr_in_real[SAMPLES] PERSISTENT={

#include<C:\Users\NEERAJ\Desktop\MT\5_Data\2__downsampled_reduced_data\256_ppg_ch1_downsampled_arr_mcu.txt>
};
#endif

/*DATA_8Hz_30_ch2*/
#ifdef Samp_256_ch2
/*Sample Data Initialization(8Hz for 30 sec)[ch2]*/
unsigned int Arr_in_real[SAMPLES] PERSISTENT={

#include<C:\Users\NEERAJ\Desktop\MT\5_Data\2__downsampled_reduced_data\256_ppg_ch2_downsampled_arr_mcu.txt>
};
#endif


/*DATA_8Hz_60_ch1*/
#ifdef Samp_512_ch1
/*Sample Data Initialization(8Hz for 60 sec)[ch1]*/
unsigned int Arr_in_real[SAMPLES] PERSISTENT={

#include<C:\Users\NEERAJ\Desktop\MT\5_Data\2__downsampled_reduced_data\512_ppg_ch1_downsampled_arr_mcu.txt>
};
#endif

/*DATA_8Hz_60_ch2*/
#ifdef Samp_512_ch2
/*Sample Data Initialization(8Hz for 60 sec) [ch2]*/
unsigned int Arr_in_real[SAMPLES] PERSISTENT={

#include<C:\Users\NEERAJ\Desktop\MT\5_Data\2__downsampled_reduced_data\512_ppg_ch2_downsampled_arr_mcu.txt>
};
#endif

#endif

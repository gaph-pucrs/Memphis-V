/*
 * cnn_std.h
 *
 *  Created on: 05/11/2024
 *      Author: Willian
 */

#ifndef CNN_STD_H_
#define CNN_STD_H_

/******* Layer Conv 1 ********/
#define FILTER_HEIGHT_1 11
#define FILTER_WIDTH_1 11
#define IN_HEIGHT_1 227
#define IN_WIDTH_1 227
#define IN_DEPTH_1 3
#define OUT_CONV_HEIGHT_1 55
#define OUT_CONV_WIDTH_1 55
#define OUT_HEIGHT_1 27
#define OUT_WIDTH_1 27
#define OUT_DEPTH_1 96
#define STRIDE_CONV_1 4
#define STRIDE_MAX_1 2
#define POOL_SIZE_1 3
/*****************************/

/******* Layer Conv 2 ********/
#define PAD_IN_2 2
#define FILTER_HEIGHT_2 5
#define FILTER_WIDTH_2 5
#define IN_HEIGHT_2 31
#define IN_WIDTH_2 31
#define IN_DEPTH_2 96
#define OUT_CONV_HEIGHT_2 27
#define OUT_CONV_WIDTH_2 27
#define OUT_HEIGHT_2 13
#define OUT_WIDTH_2 13
#define OUT_DEPTH_2 256
#define STRIDE_CONV_2 1
#define STRIDE_MAX_2 2
#define POOL_SIZE_2 3
/*****************************/

#ifndef P1_MSG_SIZE
    #define P1_MSG_SIZE OUT_CONV_HEIGHT_1*OUT_CONV_WIDTH_1
#endif

#ifndef INFERENCES
    #define INFERENCES	 1
#endif

#ifndef P1_AMONT_OF_PES
    #define P1_AMONT_OF_PES	 3
#endif

#endif /* PROD_CONS_STD_H_ */

#ifndef __ALEXNET_SPLIT_H__
#define __ALEXNET_SPLIT_H__

// How AlexNet is split over the PEs. Conv layer L runs on CONV<L>_PES conv PEs (cL_0, cL_1, ..),
// each with a contiguous block of CONV<L>_IN_C/CONV<L>_PES input channels, and one join task (jL)
// that sums their partial sums, applies conv_join and the following maxpool, if any.
// The task templates (conv_pe.h, join_pe.h) read the layer's numbers with L_(name), which
// expands to CONV<LAYER>_name; the conv shapes themselves are in cnn_std.h.
//
// CONV<L>_PES must match gen_slices.py --pes (alexnet-utils): conv_pe.h checks the slice sizes.

#include "./cnn_std.h"

#define CAT_(a, b)  a##b
#define CAT(a, b)   CAT_(a, b)
#define STR_(a)     #a
#define STR(a)      STR_(a)

#define L_(name)    CAT(CAT(CONV, LAYER), _##name)  // L_(KERNEL) -> CONV<LAYER>_KERNEL

#define CONV1_PES   3
#define CONV2_PES   8
#define CONV3_PES   4
#define CONV4_PES   6
#define CONV5_PES   4

// join output: the maxpool output for the layers followed by one, else the conv output
#define CONV1_POOL  1
#define CONV1_OUT_H POOL1_HEIGHT
#define CONV1_OUT_W POOL1_WIDTH

#define CONV2_POOL  1
#define CONV2_OUT_H POOL2_HEIGHT
#define CONV2_OUT_W POOL2_WIDTH

#define CONV3_POOL  0
#define CONV3_OUT_H CONV3_HEIGHT
#define CONV3_OUT_W CONV3_WIDTH

#define CONV4_POOL  0
#define CONV4_OUT_H CONV4_HEIGHT
#define CONV4_OUT_W CONV4_WIDTH

#define CONV5_POOL  1
#define CONV5_OUT_H POOL5_HEIGHT
#define CONV5_OUT_W POOL5_WIDTH

// conv input: the image for conv1, else the previous join's output, received from that join
#define CONV1_IN_H  IMAGE_HEIGHT
#define CONV1_IN_W  IMAGE_WIDTH
#define CONV1_IN_C  IMAGE_CHANNELS

#define CONV2_IN_H  CONV1_OUT_H
#define CONV2_IN_W  CONV1_OUT_W
#define CONV2_IN_C  CONV1_CHANNELS
#define CONV2_FROM  j1

#define CONV3_IN_H  CONV2_OUT_H
#define CONV3_IN_W  CONV2_OUT_W
#define CONV3_IN_C  CONV2_CHANNELS
#define CONV3_FROM  j2

#define CONV4_IN_H  CONV3_OUT_H
#define CONV4_IN_W  CONV3_OUT_W
#define CONV4_IN_C  CONV3_CHANNELS
#define CONV4_FROM  j3

#define CONV5_IN_H  CONV4_OUT_H
#define CONV5_IN_W  CONV4_OUT_W
#define CONV5_IN_C  CONV4_CHANNELS
#define CONV5_FROM  j4

// PEs the join's output is split over: the next layer's conv PEs, or the classifier task
// (fc6, fc7 and fc8, unsplit) after conv5
#define CONV1_NEXT_PES  CONV2_PES
#define CONV2_NEXT_PES  CONV3_PES
#define CONV3_NEXT_PES  CONV4_PES
#define CONV4_NEXT_PES  CONV5_PES
#define CONV5_NEXT_PES  1

#endif

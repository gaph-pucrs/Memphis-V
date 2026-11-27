#ifndef __ALEXNET_SPLIT_H__
#define __ALEXNET_SPLIT_H__

// How AlexNet is split over the PEs. Conv layer L runs on CONV<L>_PES conv PEs (cL_0, cL_1, ..),
// each with a contiguous block of CONV<L>_IN_C/CONV<L>_PES input channels, and one join task (jL)
// that sums their partial sums, applies the shift, bias and relu and the following maxpool, if
// any. Both work one row at a time, so every layer runs at once: a conv PE computes output row y
// as soon as it has the input rows under it, and the join finishes row y and sends each next-layer
// conv PE its block of channels of that row (after a maxpool: of each pooled row, once the join
// has its 3 conv rows).
// fc layer L runs on FC<L>_PES fc tasks (fL_0, fL_1, ..), each with a contiguous block of
// FC<L>_OUT/FC<L>_PES output neurons. Each needs the layer's whole input: j5 sends pool5 whole to
// every f6, every f6 sends its block to every f7, and every f7 its block to every f8.
// The task templates (conv_pe.h, join_pe.h, fc_pe.h) read the layer's numbers with L_(name),
// which expands to CONV<LAYER>_name, and F_(name), FC<FC_LAYER>_name; the shapes themselves are
// in cnn_std.h.
//
// `make headers` passes CONV<L>_PES to gen_slices.py --pes and FC<L>_PES to --fc-pes
// (alexnet-utils), so rerun it after changing them: conv_pe.h and fc_pe.h check the slice sizes.

#include "./cnn_std.h"

#define CAT_(a, b)  a##b
#define CAT(a, b)   CAT_(a, b)
#define STR_(a)     #a
#define STR(a)      STR_(a)

#define L_(name)    CAT(CAT(CONV, LAYER), _##name)  // L_(KERNEL) -> CONV<LAYER>_KERNEL
#define F_(name)    CAT(CAT(FC, FC_LAYER), _##name) // F_(OUT) -> FC<FC_LAYER>_OUT

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

// PEs the join's output goes to: the next layer's conv PEs (PE t gets the channels
// t*C/CONV<L>_NEXT_PES and on, row by row), or, after conv5, the fc6 tasks (each gets pool5 whole)
#define CONV1_NEXT_PES  CONV2_PES
#define CONV2_NEXT_PES  CONV3_PES
#define CONV3_NEXT_PES  CONV4_PES
#define CONV4_NEXT_PES  CONV5_PES
#define CONV5_NEXT_PES  FC6_PES

#define FC6_PES     8
#define FC7_PES     4
#define FC8_PES     4

// fc input: pool5 for fc6, else the previous fc layer's output (FC<L>_OUT is in cnn_std.h)
#define FC7_IN      FC6_OUT
#define FC8_IN      FC7_OUT

// the last task: f8_0 gathers fc8, takes the class and then tells every other task that the app
// is done, so that they print their tables (debug.h)
#define LAST        f8_0

#endif

#ifndef __CONV_PE_H__
#define __CONV_PE_H__

// Body of a conv PE task (cL_i.c). The task file defines LAYER and PE and includes its
// weight slice (params/cL_i_weight.h), plus its image channel for conv1. The PE convolves
// its contiguous block of input channels and sends the partial sums of every output
// channel to the layer's join task (jL), which adds the partials of all PEs.

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "./alexnet_common.h"
#include "./debug.h"

#define CAT_(a, b)  a##b
#define CAT(a, b)   CAT_(a, b)
#define STR_(a)     #a
#define STR(a)      STR_(a)

// input shape (whole layer) and #PEs, the rest of the layer is CONV<LAYER>_* in cnn_std.h
#if LAYER == 1
    #define L_IN    IMAGE_HEIGHT, IMAGE_WIDTH, IMAGE_CHANNELS
    #define L_PES   3
#elif LAYER == 2
    #define L_IN    POOL1_HEIGHT, POOL1_WIDTH, CONV1_CHANNELS
    #define L_PES   8
#elif LAYER == 3
    #define L_IN    POOL2_HEIGHT, POOL2_WIDTH, CONV2_CHANNELS
    #define L_PES   4
#elif LAYER == 4
    #define L_IN    CONV3_HEIGHT, CONV3_WIDTH, CONV3_CHANNELS
    #define L_PES   6
#elif LAYER == 5
    #define L_IN    CONV4_HEIGHT, CONV4_WIDTH, CONV4_CHANNELS
    #define L_PES   4
#else
    #error "LAYER must be 1..5"
#endif

#define L_(name)    CAT(CAT(CONV, LAYER), _##name)  // L_(KERNEL) -> CONV<LAYER>_KERNEL
#define TAG         "[c" STR(LAYER) "_" STR(PE) "]"
#define WEIGHTS     CAT(CAT(CAT(c, LAYER), _), CAT(PE, _weight))
#define JOIN        CAT(j, LAYER)

static const TensorShape layer_shape = {
    L_IN, L_(HEIGHT), L_(WIDTH), L_(CHANNELS)
};

static const ConvParams pe_params = {
    WEIGHTS, NULL, L_(KERNEL), L_(STRIDE), L_(PAD)
};

int main()
{
    puts(TAG " starting application");

    static time data[NUM_INFERENCES][1] = {0};
    static time comm[NUM_INFERENCES][1] = {0};

    static type out[L_(CHANNELS)*L_(HEIGHT)*L_(WIDTH)];

    // this PE's share of the layer: same output, C_in/L_PES input channels
    TensorShape pe_shape = layer_shape;
    pe_shape.C_in /= L_PES;

#if LAYER == 1
    // conv1 input: this PE's image channel, compiled in
    const type *in = CAT(image1_c, PE);
#else
    #error "only conv1 is wired up for now: conv2..conv5 need to receive from the previous join"
#endif

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        TIMED(data[i][0], conv_partial(&pe_shape, &pe_params, in, out));
        SEND(comm[i][0], out, JOIN);
    }

    puts(TAG " finishing application");

    puts(TAG " compute:");
    PRINT_STATS(data);

    puts(TAG " comm:");
    PRINT_STATS(comm);

    return 0;
}

#endif

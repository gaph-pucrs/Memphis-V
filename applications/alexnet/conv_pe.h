#ifndef __CONV_PE_H__
#define __CONV_PE_H__

// Body of a conv PE task (cL_i.c). The task file defines LAYER and PE and includes its
// weight slice (params/cL_i_weight.h), plus its image channel for conv1. The PE gets its
// contiguous block of input channels (compiled in for conv1, else from the previous join),
// convolves it, and sends the partial sums of every output channel to the layer's join
// task (jL), which adds the partials of all PEs.

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "./alexnet_common.h"
#include "./alexnet_split.h"
#include "./debug.h"

#define TAG         "[c" STR(LAYER) "_" STR(PE) "]"
#define WEIGHTS     CAT(CAT(CAT(c, LAYER), _), CAT(PE, _weight))
#define JOIN        CAT(j, LAYER)

#define PE_IN_C     (L_(IN_C)/L_(PES))
#define IN_SIZE     (PE_IN_C*L_(IN_H)*L_(IN_W))
#define OUT_SIZE    (L_(CHANNELS)*L_(HEIGHT)*L_(WIDTH))

static_assert(L_(IN_C) % L_(PES) == 0, "the input channels must split evenly over the PEs");
static_assert(sizeof(WEIGHTS) == sizeof(type)*L_(CHANNELS)*PE_IN_C*L_(KERNEL)*L_(KERNEL),
              "weight slice does not match CONV<LAYER>_PES: regenerate it with gen_slices.py --pes");

// this PE's share of the layer: same output, PE_IN_C input channels
static const TensorShape pe_shape = {
    L_(IN_H), L_(IN_W), PE_IN_C, L_(HEIGHT), L_(WIDTH), L_(CHANNELS)
};

static const ConvParams pe_params = {
    WEIGHTS, NULL, L_(KERNEL), L_(STRIDE), L_(PAD)
};

int main()
{
    puts(TAG " starting application");

    static time data[NUM_INFERENCES][1] = {0};
    static time send[NUM_INFERENCES][1] = {0};
    static time recv[NUM_INFERENCES][1] = {0};

    static type out[OUT_SIZE];

    #if LAYER == 1
        // conv1 input: this PE's image channels, compiled in
        const type *in = CAT(image1_c, PE);
        static_assert(sizeof(CAT(image1_c, PE)) == sizeof(type)*IN_SIZE,
                      "image slice does not match CONV1_PES: regenerate it with gen_dataset.py --split-channels");
    #else
        static type in[IN_SIZE];
    #endif

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        #if LAYER != 1
            RECEIVE(recv[i][0], in, L_(FROM));
        #endif

        TIMED(data[i][0], conv_partial(&pe_shape, &pe_params, in, out));
        SEND(send[i][0], out, JOIN);
    }

    puts(TAG " finishing application");

    puts(TAG " compute:");
    PRINT_STATS(data);

    puts(TAG " send:");
    PRINT_STATS(send);

    puts(TAG " recv:");
    PRINT_STATS(recv);

    puts(TAG " comm:");
    PRINT_COMM_SUM(send, recv);

    puts(TAG " messages:");
    PRINT_MSGS();

    return 0;
}

#endif

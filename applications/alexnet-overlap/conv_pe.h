#ifndef __CONV_PE_H__
#define __CONV_PE_H__

// Body of a conv PE task (cL_i.c). The task file defines LAYER and PE and includes its
// weight slice (params/cL_i_weight.h), plus its image channel for conv1. PE i of a layer with
// P conv PEs gets the input channels i, i+P, i+2P, .. (round robin): compiled in for conv1, else
// sent one at a time by the previous join. Once it has them all, it goes over the output
// channels: it computes the partial sum of channel oc over its input channels and sends it to
// the layer's join task (jL), which adds the partials of all PEs for oc while this PE computes
// oc+1.

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "./alexnet_common.h"
#include "./alexnet_split.h"
#include "./debug.h"

#define NAME        "c" STR(LAYER) "_" STR(PE)
#define TAG         "[" NAME "]"
#define WEIGHTS     CAT(CAT(CAT(c, LAYER), _), CAT(PE, _weight))
#define JOIN        CAT(j, LAYER)

#define PE_IN_C     (L_(IN_C)/L_(PES))
#define IN_HW       (L_(IN_H)*L_(IN_W))
#define IN_SIZE     (PE_IN_C*IN_HW)
#define OUT_HW      (L_(HEIGHT)*L_(WIDTH))
#define HP          (L_(IN_H) + 2*L_(PAD))  // padded input channel
#define WP          (L_(IN_W) + 2*L_(PAD))

static_assert(L_(IN_C) % L_(PES) == 0, "the input channels must split evenly over the PEs");
static_assert(sizeof(WEIGHTS) == sizeof(type)*L_(CHANNELS)*PE_IN_C*L_(KERNEL)*L_(KERNEL),
              "weight slice does not match CONV<LAYER>_PES: regenerate it with gen_slices.py --pes");

// this PE's share of the layer: same output, PE_IN_C input channels
static const TensorShape pe_shape = {
    L_(IN_H), L_(IN_W), PE_IN_C, L_(HEIGHT), L_(WIDTH), L_(CHANNELS)
};

static const ConvParams pe_params = {
    WEIGHTS, L_(KERNEL), L_(STRIDE), L_(PAD)
};

int main()
{
    puts(TAG " starting application");

    // this PE's input channels, padded; the borders are zeroed once and pad() only writes the inside
    static type in_pd[PE_IN_C*HP*WP];
    zero(PE_IN_C*HP*WP, in_pd);

    // the partial sum of one output channel
    static type out[OUT_HW];

    #if LAYER == 1
        // conv1 input: this PE's image channels, compiled in
        const type *in = CAT(image1_c, PE);
        static_assert(sizeof(CAT(image1_c, PE)) == sizeof(type)*IN_SIZE,
                      "image slice does not match CONV1_PES: regenerate it with gen_dataset.py --split-channels");
    #else
        // one input channel, as the join sends it
        static type channel[IN_HW];
    #endif

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        INFERENCE(i);

        #if LAYER == 1
            TIMED("pad", pad(L_(IN_H), L_(IN_W), PE_IN_C, L_(PAD), in, in_pd));
        #else
            // local channel j is the join's output channel PE + j*CONV<LAYER>_PES
            for (int j = 0; j < PE_IN_C; j++)
            {
                RECEIVE(channel, L_(FROM));

                TIMED("pad", pad(L_(IN_H), L_(IN_W), 1, L_(PAD), channel, in_pd + j*HP*WP));
            }
        #endif

        for (int oc = 0; oc < L_(CHANNELS); oc++)
        {
            TIMED("conv", conv_partial(&pe_shape, &pe_params, in_pd, out, oc));
            SEND(out, JOIN);
        }
    }

    puts(TAG " finishing application");

    PRINT_TABLE(NAME);

    return 0;
}

#endif

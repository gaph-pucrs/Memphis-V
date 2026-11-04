#ifndef __JOIN_PE_H__
#define __JOIN_PE_H__

// Body of a join task (jL.c). The task file defines LAYER, SOURCES (the layer's conv PEs, in
// channel-block order) and, if the next layer is wired up, TARGETS (the next layer's conv PEs,
// in the same order, or the classifier task after conv5), and includes its bias
// (params/biasL.h). The join adds up the PEs' partial sums, applies the shift, bias and
// relu and the following maxpool, if any, records the checksums, then sends each target its
// contiguous block of channels. Each step is timed as its own compute row.

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <memphis.h>

#include "./alexnet_common.h"
#include "./alexnet_split.h"
#include "./debug.h"

#define NAME        "j" STR(LAYER)
#define TAG         "[" NAME "]"
#define BIAS        CAT(bias, LAYER)

#define CONV_HW     (L_(HEIGHT)*L_(WIDTH))
#define CONV_SIZE   (L_(CHANNELS)*CONV_HW)
#define OUT_SIZE    (L_(CHANNELS)*L_(OUT_H)*L_(OUT_W))

static const int sources[] = { SOURCES };
#define N_SOURCES   (sizeof(sources)/sizeof(sources[0]))
static_assert(N_SOURCES == L_(PES), "SOURCES must list the CONV<LAYER>_PES conv PEs");

#ifdef TARGETS
    static const int targets[] = { TARGETS };
    #define N_TARGETS   (sizeof(targets)/sizeof(targets[0]))
    #define SLICE       (OUT_SIZE/N_TARGETS)
    static_assert(N_TARGETS == L_(NEXT_PES), "TARGETS must list the next layer's conv PEs");
    static_assert(OUT_SIZE % N_TARGETS == 0, "the output channels must split evenly over TARGETS");
#endif

#if L_(POOL)
    static const TensorShape pool_shape = {
        L_(HEIGHT), L_(WIDTH), L_(CHANNELS), L_(OUT_H), L_(OUT_W), L_(CHANNELS)
    };
#endif

// KERNEL: keeps GCC from vectorizing the checksum loops
KERNEL
int main()
{
    puts(TAG " starting application");

    static type fmap[CONV_SIZE];
    static type partial[CONV_SIZE];

    #if L_(POOL)
        static type pool[OUT_SIZE];
        type *out = pool;
    #else
        type *out = fmap;
    #endif

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        INFERENCE(i);

        // the first partial is received straight into the sum
        RECEIVE(fmap, sources[0]);

        for (unsigned pe = 1; pe < N_SOURCES; pe++)
        {
            RECEIVE(partial, sources[pe]);

            TIMED("psum", add(CONV_SIZE, fmap, partial));
        }

        // shift and bias, timed apart from the relu
        TIMED("bias", {
            int_handler(CONV_SIZE, fmap);
            bias(L_(CHANNELS), CONV_HW, fmap, BIAS);
        });

        TIMED("relu", relu(CONV_SIZE, fmap));
        CHECK("conv" STR(LAYER), checksum(CONV_SIZE, fmap));

        #if L_(POOL)
            TIMED("pool", maxpool(&pool_shape, fmap, pool));
            CHECK("pool" STR(LAYER), checksum(OUT_SIZE, pool));
        #endif

        #ifdef TARGETS
            // CHW: next-layer PE t gets the contiguous block of channels t
            for (unsigned t = 0; t < N_TARGETS; t++)
                SEND_N(out + t*SLICE, SLICE*sizeof(type), targets[t]);
        #else
            (void)out;
        #endif
    }

    puts(TAG " finishing application");

    PRINT_TABLE(NAME);

    return 0;
}

#endif

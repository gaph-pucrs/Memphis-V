#ifndef __JOIN_PE_H__
#define __JOIN_PE_H__

// Body of a join task (jL.c). The task file defines LAYER, SOURCES (the layer's conv PEs) and,
// if the next layer is wired up, TARGETS (the next layer's conv PEs, in order, or the classifier
// task after conv5), and includes its bias (params/biasL.h). The join runs once per output
// channel c, as the conv PEs send it: it adds the PEs' partial sums of c, applies the shift, bias
// and relu and the following maxpool, if any, and sends c to the next layer's conv PE
// c % CONV<L>_NEXT_PES (round robin). Meanwhile the conv PEs compute channel c+1.
// The classifier gets the whole output in one message at the end. The checksums are taken
// after the last channel. Each step is timed as its own compute row, one per channel.

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
#define OUT_HW      (L_(OUT_H)*L_(OUT_W))
#define OUT_SIZE    (L_(CHANNELS)*OUT_HW)
#define STREAM      (L_(NEXT_PES) > 1)  // channel by channel to the next conv PEs, not to the classifier

static const int sources[] = { SOURCES };
#define N_SOURCES   (sizeof(sources)/sizeof(sources[0]))
static_assert(N_SOURCES == L_(PES), "SOURCES must list the CONV<LAYER>_PES conv PEs");

#ifdef TARGETS
    static const int targets[] = { TARGETS };
    #define N_TARGETS   (sizeof(targets)/sizeof(targets[0]))
    static_assert(N_TARGETS == L_(NEXT_PES), "TARGETS must list the next layer's conv PEs");
    static_assert(L_(CHANNELS) % N_TARGETS == 0, "the output channels must split evenly over TARGETS");
#endif

#if L_(POOL)
    // one channel at a time
    static const TensorShape pool_shape = {
        L_(HEIGHT), L_(WIDTH), 1, L_(OUT_H), L_(OUT_W), 1
    };
#endif

// KERNEL: keeps GCC from vectorizing the checksum loops
KERNEL
int main()
{
    puts(TAG " starting application");

    static type fmap[CONV_SIZE];
    static type partial[CONV_HW];   // one PE's partial sum of one channel

    #if L_(POOL)
        static type pool[OUT_SIZE];
        type *out = pool;
    #else
        type *out = fmap;
    #endif

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        INFERENCE(i);

        for (unsigned c = 0; c < L_(CHANNELS); c++)
        {
            type *conv_c = fmap + c*CONV_HW;
            type *out_c  = out  + c*OUT_HW;

            // the first partial is received straight into the sum
            RECEIVE_N(conv_c, CONV_HW*sizeof(type), sources[0]);

            for (unsigned pe = 1; pe < N_SOURCES; pe++)
            {
                RECEIVE(partial, sources[pe]);

                TIMED("psum", add(CONV_HW, conv_c, partial));
            }

            // shift and bias, timed apart from the relu
            TIMED("bias", {
                int_handler(CONV_HW, conv_c);
                bias(1, CONV_HW, conv_c, BIAS + c);
            });

            TIMED("relu", relu(CONV_HW, conv_c));

            #if L_(POOL)
                TIMED("pool", maxpool(&pool_shape, conv_c, out_c));
            #endif

            #if defined(TARGETS) && STREAM
                // round robin: next-layer PE t gets the channels t, t+N_TARGETS, ..
                SEND_N(out_c, OUT_HW*sizeof(type), targets[c % N_TARGETS]);
            #else
                (void)out_c;
            #endif
        }

        CHECK("conv" STR(LAYER), checksum(CONV_SIZE, fmap));

        #if L_(POOL)
            CHECK("pool" STR(LAYER), checksum(OUT_SIZE, pool));
        #endif

        #if defined(TARGETS) && !STREAM
            // the classifier takes the whole output
            SEND_N(out, OUT_SIZE*sizeof(type), targets[0]);
        #endif
    }

    puts(TAG " finishing application");

    PRINT_TABLE(NAME);

    return 0;
}

#endif

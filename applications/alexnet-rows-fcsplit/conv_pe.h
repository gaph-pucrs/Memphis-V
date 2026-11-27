#ifndef __CONV_PE_H__
#define __CONV_PE_H__

// Body of a conv PE task (cL_i.c). The task file defines LAYER and PE and includes its
// weight slice (params/cL_i_weight.h), plus its image channel for conv1. PE i of a layer with
// P conv PEs gets a contiguous block of input channels: compiled in for conv1, else received
// from the previous join one row at a time (the block's channels of that row). The PE goes over
// the output rows in order: as soon as it has the input rows under output row y, it computes the
// partial sum of row y over its input channels, for every output channel, and sends it to the
// layer's join task (jL). Meanwhile the previous layer is still producing the rows below.

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
#define IN_SIZE     (PE_IN_C*L_(IN_H)*L_(IN_W))
#define IN_ROW      (PE_IN_C*L_(IN_W))      // one input row as the join sends it, [PE_IN_C][IN_W]
#define OUT_ROW     (L_(CHANNELS)*L_(WIDTH))  // partial sums of one output row, [C_out][W_out]
#define HP          (L_(IN_H) + 2*L_(PAD))  // padded input channel
#define WP          (L_(IN_W) + 2*L_(PAD))

static_assert(L_(IN_C) % L_(PES) == 0, "the input channels must split evenly over the PEs");
static_assert(sizeof(WEIGHTS) == sizeof(type)*L_(CHANNELS)*PE_IN_C*L_(KERNEL)*L_(KERNEL),
              "weight slice does not match CONV<LAYER>_PES: regenerate it with gen_slices.py --pes");

// output row y reads the padded rows y*s .. y*s+K-1, so it needs the input rows 0 .. y*s+K-1-p
#define ROWS_FOR(y) ((y)*L_(STRIDE) + L_(KERNEL) - L_(PAD))
static_assert(ROWS_FOR(L_(HEIGHT) - 1) >= L_(IN_H),
              "the last output row must need every input row, else the join's last rows are never received");

// one output row of this PE's share of the layer: H_out = 1, with the input pointer moved to the
// row's first padded row. H_in stays the layer's, so that conv_channel steps over the padded
// channels of in_pd
static const TensorShape row_shape = {
    L_(IN_H), L_(IN_W), PE_IN_C, 1, L_(WIDTH), L_(CHANNELS)
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

    static type out[OUT_ROW];

    #if LAYER == 1
        // conv1 input: this PE's image channels, compiled in
        const type *in = CAT(image1_c, PE);
        static_assert(sizeof(CAT(image1_c, PE)) == sizeof(type)*IN_SIZE,
                      "image slice does not match CONV1_PES: regenerate it with gen_dataset.py --split-channels");
    #else
        // one input row, as the join sends it
        static type row[IN_ROW];
    #endif

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        INFERENCE(i);

        #if LAYER == 1
            TIMED("pad", pad(L_(IN_H), L_(IN_W), PE_IN_C, L_(PAD), in, in_pd));
        #else
            int have = 0;   // input rows received
        #endif

        for (int y = 0; y < L_(HEIGHT); y++)
        {
            #if LAYER != 1
                int need = ROWS_FOR(y) < L_(IN_H) ? ROWS_FOR(y) : L_(IN_H);

                for (; have < need; have++)
                {
                    RECEIVE(row, L_(FROM));

                    // row `have` of each channel, inside its padding
                    TIMED("pad", {
                        for (int c = 0; c < PE_IN_C; c++)
                            pad(1, L_(IN_W), 1, 0, row + c*L_(IN_W), in_pd + (c*HP + have + L_(PAD))*WP + L_(PAD));
                    });
                }
            #endif

            const type *in_y = in_pd + y*L_(STRIDE)*WP;

            TIMED("conv", {
                for (int oc = 0; oc < L_(CHANNELS); oc++)
                    conv_partial(&row_shape, &pe_params, in_y, out + oc*L_(WIDTH), oc);
            });

            SEND(out, JOIN);
        }
    }

    puts(TAG " finishing application");

    // print only once the app is done (debug.h)
    static int done;
    memphis_receive(&done, sizeof(done), LAST);

    PRINT_TABLE(NAME);

    return 0;
}

#endif

#ifndef __JOIN_PE_H__
#define __JOIN_PE_H__

// Body of a join task (jL.c). The task file defines LAYER, SOURCES (the layer's conv PEs) and,
// if the next layer is wired up, TARGETS (the next layer's conv PEs, in order, or the fc6 tasks
// after conv5), and includes its bias (params/biasL.h). The join runs once per conv row y,
// as the conv PEs send it: it adds the PEs' partial sums of row y and applies the shift, bias and
// relu. Then it sends each next-layer conv PE its block of channels of every output row that is
// now complete: conv row y itself, or, after a maxpool, each pooled row whose 3x3 window ends at
// row y. After conv5, every fc6 task gets the whole output in one message at the end. The checksums are
// taken after the last row. Each step is timed as its own compute row, one per row.

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

#define CONV_ROW    (L_(CHANNELS)*L_(WIDTH))    // one conv row, [C][W]
#define CONV_SIZE   (L_(HEIGHT)*CONV_ROW)
#define OUT_SIZE    (L_(CHANNELS)*L_(OUT_H)*L_(OUT_W))
#define STREAM      (LAYER < 5)     // row by row to the next conv PEs; j5 sends pool5 whole to the fc6s

// The conv output is kept row by row, [H][C][W]: a row's channel blocks are contiguous, so each
// next-layer PE's block is sent straight from it. So is the join's output when it is streamed;
// fc6 takes CHW (the flattened pool5), so j5's output is [C][H][W]
#if STREAM
    #define OUT_AT(y, c)    (((y)*L_(CHANNELS) + (c))*L_(OUT_W))
#else
    #define OUT_AT(y, c)    (((c)*L_(OUT_H) + (y))*L_(OUT_W))
#endif

static_assert(STREAM || L_(POOL), "a join that is not streamed must pool: its [H][C][W] conv output is not CHW");

static const int sources[] = { SOURCES };
#define N_SOURCES   (sizeof(sources)/sizeof(sources[0]))
static_assert(N_SOURCES == L_(PES), "SOURCES must list the CONV<LAYER>_PES conv PEs");

#ifdef TARGETS
    static const int targets[] = { TARGETS };
    #define N_TARGETS   (sizeof(targets)/sizeof(targets[0]))
    static_assert(N_TARGETS == L_(NEXT_PES), "TARGETS must list the next layer's conv PEs or the fc6 tasks");
    static_assert(!STREAM || L_(CHANNELS) % N_TARGETS == 0, "the output channels must split evenly over TARGETS");
#endif

#if defined(TARGETS) && STREAM
    #define BLOCK   (L_(CHANNELS)/N_TARGETS)   // channels per next-layer PE

    // output row y to the next layer: PE t gets the channels t*BLOCK .. (t+1)*BLOCK-1 of it
    static void send_row(type *out, int y)
    {
        for (unsigned t = 0; t < N_TARGETS; t++)
            SEND_N(out + OUT_AT(y, t*BLOCK), BLOCK*L_(OUT_W)*sizeof(type), targets[t]);
    }
#else
    static void send_row(type *out, int y)
    {
        (void)out;
        (void)y;
    }
#endif

// KERNEL: keeps GCC from vectorizing the checksum loops
KERNEL
int main()
{
    puts(TAG " starting application");

    static type fmap[CONV_SIZE];
    static type partial[CONV_ROW];  // one PE's partial sums of one row

    #if L_(POOL)
        static type pool[OUT_SIZE];
        type *out = pool;
    #else
        type *out = fmap;
    #endif

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        INFERENCE(i);

        #if L_(POOL)
            int py = 0; // next pooled row
        #endif

        for (int y = 0; y < L_(HEIGHT); y++)
        {
            type *row = fmap + y*CONV_ROW;

            // the first partial is received straight into the sum
            RECEIVE_N(row, CONV_ROW*sizeof(type), sources[0]);

            for (unsigned pe = 1; pe < N_SOURCES; pe++)
            {
                RECEIVE(partial, sources[pe]);

                TIMED("psum", add(CONV_ROW, row, partial));
            }

            // shift and bias, timed apart from the relu
            TIMED("bias", {
                int_handler(CONV_ROW, row);
                bias(L_(CHANNELS), L_(WIDTH), row, BIAS);
            });

            TIMED("relu", relu(CONV_ROW, row));

            #if L_(POOL)
                // pooled row py reads the conv rows 2*py .. 2*py+2 (3x3, stride 2). In [H][C][W]
                // the next row of a channel is CONV_ROW further, so that is maxpool_chunk's row stride
                for (; py < L_(OUT_H) && 2*py + 2 <= y; py++)
                {
                    TIMED("pool", {
                        for (int c = 0; c < L_(CHANNELS); c++)
                            maxpool_chunk(fmap + 2*py*CONV_ROW + c*L_(WIDTH), CONV_ROW, L_(OUT_W), out + OUT_AT(py, c));
                    });

                    send_row(out, py);
                }
            #else
                send_row(out, y);
            #endif
        }

        CHECK("conv" STR(LAYER), checksum(CONV_SIZE, fmap));

        #if L_(POOL)
            CHECK("pool" STR(LAYER), checksum(OUT_SIZE, pool));
        #endif

        #if defined(TARGETS) && !STREAM
            // every fc6 task takes the whole output
            for (unsigned t = 0; t < N_TARGETS; t++)
                SEND_N(out, OUT_SIZE*sizeof(type), targets[t]);
        #endif
    }

    puts(TAG " finishing application");

    // print only once the app is done (debug.h)
    static int done;
    memphis_receive(&done, sizeof(done), LAST);

    PRINT_TABLE(NAME);

    return 0;
}

#endif

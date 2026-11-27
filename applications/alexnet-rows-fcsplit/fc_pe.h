#ifndef __FC_PE_H__
#define __FC_PE_H__

// Body of an fc task (fL_i.c). The task file defines FC_LAYER and PE, SOURCES (the tasks that
// send it the layer's input, one block each, in order: j5 for fc6, else the previous layer's fc
// tasks) and, except for f8_0, TARGETS (the tasks it sends its output block to), and includes its
// weights and bias (params/fcL_i_weight.h, params/fcL_i_bias.h). PE i of an fc layer with P fc
// tasks computes the output neurons i*OUT/P .. (i+1)*OUT/P-1 over the layer's whole input: the
// fc, then the shift and bias, then the relu (none after fc8).
// f7_0 and f8_0 hold the whole fc6 and fc7 outputs as their input, so they take those checksums.
// f8_1..3 send their blocks to f8_0 (TARGETS), which receives them from GATHER, takes the fc8
// checksum and the class, and then tells every other task that the app is done.

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "./alexnet_common.h"
#include "./alexnet_split.h"
#include "./debug.h"

#define NAME        "f" STR(FC_LAYER) "_" STR(PE)
#define TAG         "[" NAME "]"
#define WEIGHTS     CAT(CAT(CAT(fc, FC_LAYER), _), CAT(PE, _weight))
#define BIAS        CAT(CAT(CAT(fc, FC_LAYER), _), CAT(PE, _bias))

#define BLOCK       (F_(OUT)/F_(PES))   // output neurons of this task

static_assert(F_(OUT) % F_(PES) == 0, "the output neurons must split evenly over the fc tasks");
static_assert(sizeof(WEIGHTS) == sizeof(type)*BLOCK*F_(IN),
              "weight slice does not match FC<FC_LAYER>_PES: regenerate it with gen_slices.py --fc-pes");
static_assert(sizeof(BIAS) == sizeof(type)*BLOCK,
              "bias slice does not match FC<FC_LAYER>_PES: regenerate it with gen_slices.py --fc-pes");

static const int sources[] = { SOURCES };
#define N_SOURCES   (sizeof(sources)/sizeof(sources[0]))
static_assert(F_(IN) % N_SOURCES == 0, "the input must split evenly over SOURCES");

#define IS_LAST     (FC_LAYER == 8 && PE == 0)

#ifdef TARGETS
    static const int targets[] = { TARGETS };
    #define N_TARGETS   (sizeof(targets)/sizeof(targets[0]))
#elif !IS_LAST
    #error "every fc task but f8_0 sends its block on: define TARGETS"
#endif

#if IS_LAST
    static const int gather[] = { GATHER };
    #define N_GATHER    (sizeof(gather)/sizeof(gather[0]))
    static_assert(N_GATHER == FC8_PES - 1, "GATHER must list the other f8 tasks, in order");
#endif

// TensorShape: { H_in, W_in, C_in, H_out, W_out, C_out }; ConvParams: { w, K, s, p }
static const TensorShape pe_shape  = { 1, 1, F_(IN), 1, 1, BLOCK };
static const ConvParams  pe_params = { WEIGHTS, 0, 0, 0 };  // K, s, p unused by fc()

// KERNEL: keeps GCC from vectorizing the argmax loop
KERNEL
int main()
{
    puts(TAG " starting application");

    static type in[F_(IN)];

    #if IS_LAST
        static type fc8[FC8_OUT];   // every f8's block, in order; this task's is the first
        type *out = fc8;
    #else
        static type block[BLOCK];
        type *out = block;
    #endif

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        INFERENCE(i);

        // the layer's whole input, one block per source
        for (unsigned s = 0; s < N_SOURCES; s++)
            RECEIVE_N(in + s*(F_(IN)/N_SOURCES), (F_(IN)/N_SOURCES)*sizeof(type), sources[s]);

        TIMED("fc" STR(FC_LAYER), fc(&pe_shape, &pe_params, in, out));

        TIMED("bias" STR(FC_LAYER), {
            int_handler(BLOCK, out);
            add(BLOCK, out, BIAS);  // bias
        });

        #if FC_LAYER < 8
            TIMED("relu" STR(FC_LAYER), relu(BLOCK, out));
        #endif

        #ifdef TARGETS
            for (unsigned t = 0; t < N_TARGETS; t++)
                SEND_N(out, BLOCK*sizeof(type), targets[t]);
        #endif

        // the input of f7_0 and f8_0 is the whole fc6 and fc7 output (after the relu)
        #if FC_LAYER == 7 && PE == 0
            CHECK("fc6", checksum(FC7_IN, in));
        #endif

        #if IS_LAST
            CHECK("fc7", checksum(FC8_IN, in));

            // the other f8s' blocks, after this one's
            for (unsigned g = 0; g < N_GATHER; g++)
                RECEIVE_N(fc8 + (g + 1)*BLOCK, BLOCK*sizeof(type), gather[g]);

            int class = 0;
            for (int c = 1; c < FC8_OUT; c++)
                if (fc8[class] < fc8[c])
                    class = c;

            CHECK("fc8",   checksum(FC8_OUT, fc8));
            CHECK("class", class);
            CHECK("val",   fc8[class]);  // signed: printed with %u, converted back by the reader
        #endif
    }

    puts(TAG " finishing application");

    #if IS_LAST
        // the app is done: let every other task print its table (debug.h). mint numbers the tasks
        // 0, 1, .. in name order (id_tasks.h): c*, f*, then j*, so j5 is the last one
        static int done = 1;
        for (int t = 0; t <= j5; t++)
            if (t != LAST)
                memphis_send(&done, sizeof(done), t);
    #else
        // print only once the app is done (debug.h)
        static int done;
        memphis_receive(&done, sizeof(done), LAST);
    #endif

    PRINT_TABLE(NAME);

    return 0;
}

#endif

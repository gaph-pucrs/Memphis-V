// classifier: fc6 + fc7 + fc8, unsplit, on pool5 from j5; prints the checksums and the class
// (not named fc: id_tasks.h would turn the fc() kernel into a task ID)

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "./alexnet_common.h"
#include "./alexnet_split.h"
#include "./debug.h"

#include "./params/fc6_weight.h"
#include "./params/fc6_bias.h"
#include "./params/fc7_weight.h"
#include "./params/fc7_bias.h"
#include "./params/fc8_weight.h"
#include "./params/fc8_bias.h"

#define TAG     "[classifier]"

static_assert(sizeof(fc6_weight) == sizeof(type)*FC6_OUT*FC6_IN,  "fc6_weight: regenerate it with gen_slices.py");
static_assert(sizeof(fc7_weight) == sizeof(type)*FC7_OUT*FC6_OUT, "fc7_weight: regenerate it with gen_slices.py");
static_assert(sizeof(fc8_weight) == sizeof(type)*FC8_OUT*FC7_OUT, "fc8_weight: regenerate it with gen_slices.py");

// TensorShape: { H_in, W_in, C_in, H_out, W_out, C_out }; ConvParams: { w, b, K, s, p }
static const TensorShape fc6_shape  = { 1, 1, FC6_IN,  1, 1, FC6_OUT };
static const TensorShape fc7_shape  = { 1, 1, FC6_OUT, 1, 1, FC7_OUT };
static const TensorShape fc8_shape  = { 1, 1, FC7_OUT, 1, 1, FC8_OUT };

static const ConvParams  fc6_params = { fc6_weight, fc6_bias, 0, 0, 0 };   // K, s, p unused by fc()
static const ConvParams  fc7_params = { fc7_weight, fc7_bias, 0, 0, 0 };
static const ConvParams  fc8_params = { fc8_weight, fc8_bias, 0, 0, 0 };

// KERNEL: keeps GCC from vectorizing the argmax loop
KERNEL
int main()
{
    puts(TAG " starting application");

    static time data[NUM_INFERENCES][5] = {0};  // fc6, relu6, fc7, relu7, fc8
    static time send[NUM_INFERENCES][1] = {0};  // nothing is sent: kept for the comm: sum
    static time recv[NUM_INFERENCES][1] = {0};

    static type in[FC6_IN];
    static type fc6_out[FC6_OUT];
    static type fc7_out[FC7_OUT];
    static type fc8_out[FC8_OUT];

    static_assert(sizeof(in) == sizeof(type)*CONV5_CHANNELS*CONV5_OUT_H*CONV5_OUT_W,
                  "the classifier input must be j5's whole output");

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        RECEIVE(recv[i][0], in, j5);

        // fc_relu, split to time the relu apart
        TIMED(data[i][0], fc  (&fc6_shape, &fc6_params, in,      fc6_out));
        TIMED(data[i][1], relu(FC6_OUT, fc6_out));
        TIMED(data[i][2], fc  (&fc7_shape, &fc7_params, fc6_out, fc7_out));
        TIMED(data[i][3], relu(FC7_OUT, fc7_out));
        TIMED(data[i][4], fc  (&fc8_shape, &fc8_params, fc7_out, fc8_out));

        int class = 0;
        for (int c = 1; c < FC8_OUT; c++)
            if (fc8_out[class] < fc8_out[c])
                class = c;

        printf(TAG " inference %d checksums: fc6,%u fc7,%u fc8,%u class,%d val,%d\n", i + 1,
               (unsigned)checksum(FC6_OUT, fc6_out), (unsigned)checksum(FC7_OUT, fc7_out),
               (unsigned)checksum(FC8_OUT, fc8_out), class, (int)fc8_out[class]);
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

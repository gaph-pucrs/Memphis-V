// join1: conv1 partials (c1_0..c1_2) + conv_join + pool1

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <memphis.h>

#include "./alexnet_common.h"
#include "./params/bias1.h"

#include "./debug.h"

#define CONV1_SIZE  (CONV1_CHANNELS*CONV1_HEIGHT*CONV1_WIDTH)
#define POOL1_SIZE  (CONV1_CHANNELS*POOL1_HEIGHT*POOL1_WIDTH)

static const TensorShape pool1_shape = {
    CONV1_HEIGHT, CONV1_WIDTH, CONV1_CHANNELS, POOL1_HEIGHT, POOL1_WIDTH, CONV1_CHANNELS
};

// wrapping sum of a layer's outputs, the same checksum RS5's alexnet-refactor prints
static uint32_t checksum (const int n, const type buf[])
{
    uint32_t sum = 0;
    for (int i = 0; i < n; i++)
        sum += (uint32_t)buf[i];
    return sum;
}

// KERNEL: keeps GCC from vectorizing the accumulation loop
KERNEL
int main()
{
    puts("[j1] starting application");

    static time data[NUM_INFERENCES][1] = {0};
    static time comm[NUM_INFERENCES][1] = {0};

    static type out_conv1[CONV1_SIZE];
    static type partial[CONV1_SIZE];
    static type out_pool1[POOL1_SIZE];

    const int conv1_pes[] = { c1_0, c1_1, c1_2 };
    const int n_pes = sizeof(conv1_pes)/sizeof(conv1_pes[0]);

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        // the first partial is received straight into the sum
        RECEIVE(comm[i][0], out_conv1, conv1_pes[0]);

        for (int pe = 1; pe < n_pes; pe++)
        {
            RECEIVE(comm[i][0], partial, conv1_pes[pe]);
            TIMED(data[i][0],
                for (int n = 0; n < CONV1_SIZE; n++)
                    out_conv1[n] += partial[n]
            );
        }

        TIMED(data[i][0],
            for (int oc = 0; oc < CONV1_CHANNELS; oc++)
                conv_join(CONV1_HEIGHT*CONV1_WIDTH, out_conv1 + oc*CONV1_HEIGHT*CONV1_WIDTH, bias1[oc]);
            maxpool(&pool1_shape, out_conv1, out_pool1)
        );

        printf("[j1] inference %d checksums: conv1,%u pool1,%u\n", i + 1,
               (unsigned)checksum(CONV1_SIZE, out_conv1), (unsigned)checksum(POOL1_SIZE, out_pool1));
    }

    puts("[j1] finishing application");

    puts("[j1] compute:");
    PRINT_STATS(data);

    puts("[j1] comm:");
    PRINT_STATS(comm);

    return 0;
}

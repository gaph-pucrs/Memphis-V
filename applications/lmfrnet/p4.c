// tran_conv1 + avg_pool1

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_4
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./dataset/image1.h"

#include "./debug.h"

int main()
{
    puts("[p4] starting application");

    static time data[NUM_INFERENCES][1] = {0};

    static type out_mf3[32*32*104] = {0};
    static type out_tran1[32*32*104] = {0};
    static type out_pool1[16*16*104] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        memphis_receive(out_mf3, sizeof(out_mf3), p3);

        zero_fill(32*32*104, out_tran1);

        data[i][0].to = memphis_get_tick();
            tran_conv(&tran_ConvNormRelu1_shape, &tran_ConvNormRelu1_params, out_mf3, out_tran1);
            avg_pool(&pool1_shape, out_tran1, out_pool1);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        memphis_send(out_pool1, sizeof(out_pool1), p5);
    }

    puts("[p4] finishing application");

    PRINT_STATS(data);

    return 0;
}
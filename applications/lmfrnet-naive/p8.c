// mfblock7 + tran_conv2 + avg_pool2

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_8
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./debug.h"

int main()
{
    puts("[p8] starting application");

    static time data[NUM_INFERENCES][2] = {0};

    static type out_mf6[16*16*176] = {0};
    static type out_mf7[16*16*200] = {0};
    static type out_tran2[16*16*200] = {0};
    static type out_pool2[8*8*200] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        memphis_receive(out_mf6, sizeof(out_mf6), p7);

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock2_mmLayer4_shapes, &MMCBlock2_mmLayer4_params, out_mf6, out_mf7);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        zero_fill(16*16*200, out_tran2);

        data[i][1].to = memphis_get_tick();
            tran_conv(&tran_ConvNormRelu2_shape, &tran_ConvNormRelu2_params, out_mf7, out_tran2);
            avg_pool(&pool2_shape, out_tran2, out_pool2);
        data[i][1].tf = memphis_get_tick();
        data[i][1].lapsed = data[i][1].tf - data[i][1].to;

        memphis_send(out_pool2, sizeof(out_pool2), p9);
    }

    puts("[p8] finishing application");

    PRINT_STATS(data);

    return 0;
}

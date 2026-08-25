// mfblock16 + ... + mfblock18 + tran_conv4 + gap + fc

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_9
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./dataset/image1.h"

#include "./debug.h"

int main()
{
    puts("[p9] starting application");

    static time data[NUM_INFERENCES][5] = {0};
    static time comm[NUM_INFERENCES][1] = {0};

    static type out_pool3[4*4*392] = {0};
    static type out_mf16[4*4*416] = {0};
    static type out_mf17[4*4*440] = {0};
    static type out_mf18[4*4*464] = {0};
    static type out_tran4[4*4*464] = {0};
    static type out_gap[464] = {0};
    static type out_fc[10] = {0};

    unsigned prev_tick = memphis_get_tick();

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        comm[i][0].to = memphis_get_tick();
            memphis_receive(out_pool3, sizeof(out_pool3), p8);
        comm[i][0].tf = memphis_get_tick();
        comm[i][0].lapsed = comm[i][0].tf - comm[i][0].to;

        data[i][0].to = memphis_get_tick();
            MFBlock(&MMCBlock4_mmLayer1_shapes, &MMCBlock4_mmLayer1_params, out_pool3, out_mf16);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        data[i][1].to = memphis_get_tick();
            MFBlock(&MMCBlock4_mmLayer2_shapes, &MMCBlock4_mmLayer2_params, out_mf16, out_mf17);
        data[i][1].tf = memphis_get_tick();
        data[i][1].lapsed = data[i][1].tf - data[i][1].to;

        data[i][2].to = memphis_get_tick();
            MFBlock(&MMCBlock4_mmLayer3_shapes, &MMCBlock4_mmLayer3_params, out_mf17, out_mf18);
        data[i][2].tf = memphis_get_tick();
        data[i][2].lapsed = data[i][2].tf - data[i][2].to;

        zero_fill(4*4*464, out_tran4);

        data[i][3].to = memphis_get_tick();
            tran_conv(&tran_ConvNormRelu4_shape, &tran_ConvNormRelu4_params, out_mf18, out_tran4);
            gap(&gap_shape, out_tran4, out_gap);
        data[i][3].tf = memphis_get_tick();
        data[i][3].lapsed = data[i][3].tf - data[i][3].to;

        zero_fill(10, out_fc);

        data[i][4].to = memphis_get_tick();
            fc(&fc_shape, &fc_params, out_gap, out_fc);
        data[i][4].tf = memphis_get_tick();
        data[i][4].lapsed = data[i][4].tf - data[i][4].to;

        type argmax = out_fc[0];
        int class = 0;
        for (int n = 0; n < 10; n++)
        {
            if (argmax < out_fc[n])
            {
                argmax = out_fc[n];
                class = n;
            }
        }

        printf("[%d] predicted class: %d (val = %d)\n", i+1, class, argmax);

        unsigned now_tick = memphis_get_tick();
        printf("[%d] THROUGHPUT: %u\n", i+1, now_tick - prev_tick);
        prev_tick = now_tick;
    }

    puts("[p9] finishing application");

    puts("[p9] compute:");
    PRINT_STATS(data);

    puts("[p9] comm:");
    PRINT_STATS(comm);

    return 0;
}
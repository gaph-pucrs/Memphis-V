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

    static time data[5] = {0};

    static type out_pool3[4*4*392] = {0};
    static type out_mf16[4*4*416] = {0};
    static type out_mf17[4*4*440] = {0};
    static type out_mf18[4*4*464] = {0};
    static type out_tran4[4*4*464] = {0};
    static type out_gap[464] = {0};
    static type out_fc[10] = {0};

    memphis_receive(out_pool3, sizeof(out_pool3), p8);

    data[0].to = memphis_get_tick();
        MFBlock(&MMCBlock4_mmLayer1_shapes, &MMCBlock4_mmLayer1_params, out_pool3, out_mf16);
    data[0].tf = memphis_get_tick();
    data[0].lapsed = data[0].tf - data[0].to;

    data[1].to = memphis_get_tick();
        MFBlock(&MMCBlock4_mmLayer2_shapes, &MMCBlock4_mmLayer2_params, out_mf16, out_mf17);
    data[1].tf = memphis_get_tick();
    data[1].lapsed = data[1].tf - data[1].to;

    data[2].to = memphis_get_tick();
        MFBlock(&MMCBlock4_mmLayer3_shapes, &MMCBlock4_mmLayer3_params, out_mf17, out_mf18);
    data[2].tf = memphis_get_tick();
    data[2].lapsed = data[2].tf - data[2].to;

    data[3].to = memphis_get_tick();
        tran_conv(&tran_ConvNormRelu4_shape, &tran_ConvNormRelu4_params, out_mf18, out_tran4);
        gap(&gap_shape, out_tran4, out_gap);
    data[3].tf = memphis_get_tick();
    data[3].lapsed = data[3].tf - data[3].to;

    data[4].to = memphis_get_tick();
        fc(&fc_shape, &fc_params, out_gap, out_fc);
    data[4].tf = memphis_get_tick();
    data[4].lapsed = data[4].tf - data[4].to;

    type argmax = out_fc[0];
    int class = 0;
    for (int i = 0; i < 10; i++)
    {
        if (argmax < out_fc[i])
        {
            argmax = out_fc[i];
            class = i;
        }
    }

    printf("predicted class: %d (val = %d)\n", class, argmax);

    puts("[p9] finishing application");

    PRINT_STATS(data);

    return 0;
}
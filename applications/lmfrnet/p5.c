// mfblock4 + ... + mfblock7

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_5
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./dataset/image1.h"

#include "./debug.h"

int main()
{
    puts("[p5] starting application");

    static time data[4] = {0};

    static type out_pool1[16*16*104] = {0};
    static type out_mf4[16*16*128] = {0};
    static type out_mf5[16*16*152] = {0};
    static type out_mf6[16*16*176] = {0};
    static type out_mf7[16*16*200] = {0};

    memphis_receive(out_pool1, sizeof(out_pool1), p4);

    data[0].to = memphis_get_tick();
        MFBlock(&MMCBlock2_mmLayer1_shapes, &MMCBlock2_mmLayer1_params, out_pool1, out_mf4);
    data[0].tf = memphis_get_tick();
    data[0].lapsed = data[0].tf - data[0].to;

    data[1].to = memphis_get_tick();
        MFBlock(&MMCBlock2_mmLayer2_shapes, &MMCBlock2_mmLayer2_params, out_mf4, out_mf5);
    data[1].tf = memphis_get_tick();
    data[1].lapsed = data[1].tf - data[1].to;

    data[2].to = memphis_get_tick();
        MFBlock(&MMCBlock2_mmLayer3_shapes, &MMCBlock2_mmLayer3_params, out_mf5, out_mf6);
    data[2].tf = memphis_get_tick();
    data[2].lapsed = data[2].tf - data[2].to;

    data[3].to = memphis_get_tick();
        MFBlock(&MMCBlock2_mmLayer4_shapes, &MMCBlock2_mmLayer4_params, out_mf6, out_mf7);
    data[3].tf = memphis_get_tick();
    data[3].lapsed = data[3].tf - data[3].to;

    memphis_send(out_mf7, sizeof(out_mf7), p6);

    puts("[p5] finishing application");

    PRINT_STATS(data);

    return 0;
}
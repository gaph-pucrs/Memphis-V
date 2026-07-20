// mfblock8 + ... + mfblock15

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_7
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./dataset/image1.h"

#include "./debug.h"

int main()
{
    puts("[p7] starting application");

    static time data[8] = {0};

    static type out_pool2[8*8*200] = {0};
    static type out_mf8[8*8*224] = {0};
    static type out_mf9[8*8*248] = {0};
    static type out_mf10[8*8*272] = {0};
    static type out_mf11[8*8*296] = {0};
    static type out_mf12[8*8*320] = {0};
    static type out_mf13[8*8*344] = {0};
    static type out_mf14[8*8*368] = {0};
    static type out_mf15[8*8*392] = {0};

    memphis_receive(out_pool2, sizeof(out_pool2), p6);

    data[0].to = memphis_get_tick();
        MFBlock(&MMCBlock3_mmLayer1_shapes, &MMCBlock3_mmLayer1_params, out_pool2, out_mf8);
    data[0].tf = memphis_get_tick();
    data[0].lapsed = data[0].tf - data[0].to;

    data[1].to = memphis_get_tick();
        MFBlock(&MMCBlock3_mmLayer2_shapes, &MMCBlock3_mmLayer2_params, out_mf8, out_mf9);
    data[1].tf = memphis_get_tick();
    data[1].lapsed = data[1].tf - data[1].to;

    data[2].to = memphis_get_tick();
        MFBlock(&MMCBlock3_mmLayer3_shapes, &MMCBlock3_mmLayer3_params, out_mf9, out_mf10);
    data[2].tf = memphis_get_tick();
    data[2].lapsed = data[2].tf - data[2].to;

    data[3].to = memphis_get_tick();
        MFBlock(&MMCBlock3_mmLayer4_shapes, &MMCBlock3_mmLayer4_params, out_mf10, out_mf11);
    data[3].tf = memphis_get_tick();
    data[3].lapsed = data[3].tf - data[3].to;

    data[4].to = memphis_get_tick();
        MFBlock(&MMCBlock3_mmLayer5_shapes, &MMCBlock3_mmLayer5_params, out_mf11, out_mf12);
    data[4].tf = memphis_get_tick();
    data[4].lapsed = data[4].tf - data[4].to;

    data[5].to = memphis_get_tick();
        MFBlock(&MMCBlock3_mmLayer6_shapes, &MMCBlock3_mmLayer6_params, out_mf12, out_mf13);
    data[5].tf = memphis_get_tick();
    data[5].lapsed = data[5].tf - data[5].to;

    data[6].to = memphis_get_tick();
        MFBlock(&MMCBlock3_mmLayer7_shapes, &MMCBlock3_mmLayer7_params, out_mf13, out_mf14);
    data[6].tf = memphis_get_tick();
    data[6].lapsed = data[6].tf - data[6].to;

    data[7].to = memphis_get_tick();
        MFBlock(&MMCBlock3_mmLayer8_shapes, &MMCBlock3_mmLayer8_params, out_mf14, out_mf15);
    data[7].tf = memphis_get_tick();
    data[7].lapsed = data[7].tf - data[7].to;

    memphis_send(out_mf15, sizeof(out_mf15), p8);

    puts("[p7] finishing application");

    PRINT_STATS(data);

    return 0;
}
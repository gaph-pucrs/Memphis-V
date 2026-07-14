// mfblock3

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./dataset/image1.h"

#include "./debug.h"

int main()
{
    puts("[p3] starting application");

    static time data[1] = {0};

    static type out_mf2[32*32*80] = {0};
    static type out_mf3[32*32*104] = {0};

    memphis_receive(out_mf2, sizeof(out_mf2), p2);

    data[0].to = memphis_get_tick();
        MFBlock(&MMCBlock1_mmLayer3_shapes, &MMCBlock1_mmLayer3_params, out_mf2, out_mf3);
    data[0].tf = memphis_get_tick();
    data[0].lapsed = data[0].tf - data[0].to;

    memphis_send(out_mf3, sizeof(out_mf3), p4);

    puts("[p3] finishing application");

    PRINT_STATS(data);

    return 0;
}
// stemBlock + mfblock1

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <memphis.h>

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./dataset/image1.h"

#include "./debug.h"

int main()
{
    puts("[p1] starting application");

    static time data[2] = {0};

    static type out_stemBlock[32*32*32] = {0};
    static type out_mf1[32*32*56] = {0};

    data[0].to = memphis_get_tick();
        stemBlock(&stemBlock_shape, &stemBlock_params, image1, out_stemBlock);
    data[0].tf = memphis_get_tick();
    data[0].lapsed = data[0].tf - data[0].to;

    data[1].to = memphis_get_tick();
        MFBlock(&MMCBlock1_mmLayer1_shapes, &MMCBlock1_mmLayer1_params, out_stemBlock, out_mf1);
    data[1].tf = memphis_get_tick();
    data[1].lapsed = data[1].tf - data[1].to;

    memphis_send(out_mf1, sizeof(out_mf1), p2);

    puts("[p1] finishing application");

    PRINT_STATS(data);

    return 0;
}
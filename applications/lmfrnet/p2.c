// mfblock2

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_2
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./dataset/image1.h"

#include "./debug.h"

int main()
{
    puts("[p2] starting application");

    static time data[1] = {0};

    static type out_mf1[32*32*56] = {0};
    static type out_mf2[32*32*80] = {0};

    memphis_receive(out_mf1, sizeof(out_mf1), p1);

    data[0].to = memphis_get_tick();
        MFBlock(&MMCBlock1_mmLayer2_shapes, &MMCBlock1_mmLayer2_params, out_mf1, out_mf2);
    data[0].tf = memphis_get_tick();
    data[0].lapsed = data[0].tf - data[0].to;

    memphis_send(out_mf2, sizeof(out_mf2), p3);

    puts("[p2] finishing application");

    PRINT_STATS(data);

    return 0;
}
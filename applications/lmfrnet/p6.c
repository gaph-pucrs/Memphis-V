// tran_conv2 + avg_pool2

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#define VECTOR

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./dataset/image1.h"

#include "./debug.h"

int main()
{
    puts("[p6] starting application");

    static time data[1] = {0};

    static type out_mf7[16*16*200] = {0};
    static type out_tran2[16*16*200] = {0};
    static type out_pool2[8*8*200] = {0};

    memphis_receive(out_mf7, sizeof(out_mf7), p5);

    data[0].to = memphis_get_tick();
        tran_conv(&tran_ConvNormRelu2_shape, &tran_ConvNormRelu2_params, out_mf7, out_tran2);
        avg_pool(&pool2_shape, out_tran2, out_pool2);
    data[0].tf = memphis_get_tick();
    data[0].lapsed = data[0].tf - data[0].to;

    memphis_send(out_pool2, sizeof(out_pool2), p7);

    puts("[p6] finishing application");

    PRINT_STATS(data);

    return 0;
}
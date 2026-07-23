// tran_conv3 + avg_pool3

#include <stdio.h>
#include <stdlib.h>
#include <memphis.h>

#if VECTOR_8
    #define VECTOR
#endif

#include "./lmfrnet_common.h"
#include "./lmfrnet_params.h"

#include "./dataset/image1.h"

#include "./debug.h"

int main()
{
    puts("[p8] starting application");

    static time data[NUM_INFERENCES][1] = {0};

    static type out_mf15[8*8*392] = {0};
    static type out_tran3[8*8*392] = {0};
    static type out_pool3[4*4*392] = {0};

    for (int i = 0; i < NUM_INFERENCES; i++)
    {
        memphis_receive(out_mf15, sizeof(out_mf15), p7);

        zero_fill(8*8*392, out_tran3);

        data[i][0].to = memphis_get_tick();
            tran_conv(&tran_ConvNormRelu3_shape, &tran_ConvNormRelu3_params, out_mf15, out_tran3);
            avg_pool(&pool3_shape, out_tran3, out_pool3);
        data[i][0].tf = memphis_get_tick();
        data[i][0].lapsed = data[i][0].tf - data[i][0].to;

        memphis_send(out_pool3, sizeof(out_pool3), p9);
    }

    puts("[p8] finishing application");

    PRINT_STATS(data);

    return 0;
}
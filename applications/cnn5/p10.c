/**
 * MA-Memphis
 * @file p10.c
 *
 * @author Willian Nunes (willian.nunes@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 *
 * @date November 2024
 *
 * @brief Layer 5 (AlexNet Conv5) accumulator: receives partial results from
 *        p9_x workers, accumulates, applies bias, relu and maxpool (3x3, stride 2).
 *        Terminal task — no further dispatch.
 */

#include <stdlib.h>
#include <stdio.h>

#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "p10_bias.h"

int main()
{
	puts("Inicio da aplicacao p10");

	unsigned long long *time_rec  = malloc(OUT_DEPTH_5*sizeof(unsigned long long));
    unsigned long long *time_recd = malloc(OUT_DEPTH_5*sizeof(unsigned long long));
    unsigned long long *time_end  = malloc(OUT_DEPTH_5*sizeof(unsigned long long));

	int *msg_0 = malloc(P9_MSG_SIZE*sizeof(int));
	int *msg_1 = malloc(P9_MSG_SIZE*sizeof(int));
	int *msg_2 = malloc(P9_MSG_SIZE*sizeof(int));
	int *msg_3 = malloc(P9_MSG_SIZE*sizeof(int));

    printf("Starting P10 - Ticks = %s\n\n", memphis_u64_str(memphis_get_tick()));

	int *out_5 = malloc(OUT_CONV_WIDTH_5 * OUT_CONV_HEIGHT_5 * OUT_DEPTH_5*sizeof(int));
	/* Inicializa out_5 */
    for (int i = 0; i < OUT_CONV_WIDTH_5 * OUT_CONV_HEIGHT_5 * OUT_DEPTH_5; i++)
    {
        out_5[i] = 0;
    }

	for(int o_channel = 0; o_channel < OUT_DEPTH_5; o_channel++){
        int *out_slice = &out_5[o_channel * P9_MSG_SIZE];

        time_rec[o_channel] = memphis_get_tick();
        printf("Receiving channel %d - Ticks = %s\n", o_channel, memphis_u64_str(time_rec[o_channel]));

		int received_0 = memphis_receive(msg_0, P9_MSG_SIZE*sizeof(int), p9_0);
		int received_1 = memphis_receive(msg_1, P9_MSG_SIZE*sizeof(int), p9_1);
		int received_2 = memphis_receive(msg_2, P9_MSG_SIZE*sizeof(int), p9_2);
		int received_3 = memphis_receive(msg_3, P9_MSG_SIZE*sizeof(int), p9_3);

        time_recd[o_channel] = memphis_get_tick();
		printf("Received channel %d - Ticks = %s\n", o_channel, memphis_u64_str(time_recd[o_channel]));

		for (int j = 1; j < (received_0 >> 2); j++){
			out_slice[j] += msg_0[j];
			out_slice[j] += msg_1[j];
			out_slice[j] += msg_2[j];
			out_slice[j] += msg_3[j];
		}

        conv_sum_bias(OUT_CONV_HEIGHT_5, OUT_CONV_WIDTH_5, out_slice, bias_5, o_channel);

		/* RELU */
		relu(out_slice, OUT_CONV_HEIGHT_5, OUT_CONV_WIDTH_5, 1);

		/* MAX POOL */
		int *out_pool_5 = malloc(OUT_HEIGHT_5 * OUT_WIDTH_5 * sizeof(int));
		maxpool(out_5, out_pool_5, OUT_CONV_HEIGHT_5, OUT_CONV_WIDTH_5, 1,
            OUT_HEIGHT_5, OUT_WIDTH_5, 1,
            STRIDE_MAX_5, POOL_SIZE_5);

        time_end[o_channel] = memphis_get_tick();
		printf("Finished channel %d - Ticks = %s\n\n", o_channel, memphis_u64_str(time_end[o_channel]));

		/* Terminal — no further dispatch */
		free(out_pool_5);
	}


    printf("Finished P10 - Ticks = %s\n\n", memphis_u64_str(memphis_get_tick()));

	printf("[(receiving, received, finished)]\n\n");
    printf("[\n");
	for (int o_channel = 0; o_channel < OUT_DEPTH_5; o_channel++)
    {
        printf("(%s, %s, %s)", memphis_u64_str(time_rec[o_channel]), memphis_u64_str(time_recd[o_channel]), memphis_u64_str(time_end[o_channel]));
        if (o_channel+1 != OUT_DEPTH_5) {
            printf(",");
        }
        printf("\n");
    }
    printf("]\n\n");

	puts("Fim da aplicacao p10");

	return 0;
}

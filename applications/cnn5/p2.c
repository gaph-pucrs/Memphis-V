/**
 * MA-Memphis
 * @file p2.c
 *
 * @author Willian Nunes (willian.nunes@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 *
 * @date November 2024
 *
 * @brief
 */

#include <stdlib.h>
#include <stdio.h>

#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "p2_bias.h"

int main()
{
	puts("Inicio da aplicacao p2");

	unsigned long long *time_rec  = malloc(OUT_DEPTH_1*sizeof(unsigned long long));
    unsigned long long *time_recd = malloc(OUT_DEPTH_1*sizeof(unsigned long long));
    unsigned long long *time_end  = malloc(OUT_DEPTH_1*sizeof(unsigned long long));
	unsigned long long *time_sent = malloc(OUT_DEPTH_1*sizeof(unsigned long long));

	int *msg_0 = malloc(P1_MSG_SIZE*sizeof(int));
	int *msg_1 = malloc(P1_MSG_SIZE*sizeof(int));
	int *msg_2 = malloc(P1_MSG_SIZE*sizeof(int));

    printf("Starting P2 - Ticks = %s\n\n", memphis_u64_str(memphis_get_tick()));

	int *out_1 = malloc(OUT_CONV_WIDTH_1 * OUT_CONV_HEIGHT_1 * OUT_DEPTH_1*sizeof(int));
	// Inicializa out_1
    for (int i = 0; i < OUT_CONV_WIDTH_1 * OUT_CONV_HEIGHT_1 * OUT_DEPTH_1; i++)
    {
        out_1[i] = 0;
    }

	for(int o_channel = 0; o_channel < OUT_DEPTH_1; o_channel++){
        int *out_slice = &out_1[o_channel * P1_MSG_SIZE];

        time_rec[o_channel] = memphis_get_tick();
        printf("Receiving channel %d - Ticks = %s\n", o_channel, memphis_u64_str(time_rec[o_channel]));

		int received_0 = memphis_receive(msg_0, P1_MSG_SIZE*sizeof(int), p1_0);
		int received_1 = memphis_receive(msg_1, P1_MSG_SIZE*sizeof(int), p1_1);
		int received_2 = memphis_receive(msg_2, P1_MSG_SIZE*sizeof(int), p1_2);

        time_recd[o_channel] = memphis_get_tick();
		printf("Received channel %d - Ticks = %s\n", o_channel, memphis_u64_str(time_recd[o_channel]));

		for (int j = 1; j < (received_0 >> 2); j++){
			out_slice[j] += msg_0[j];
			out_slice[j] += msg_1[j];
			out_slice[j] += msg_2[j];

			//print("%d\n", out_slice[j]);
		}

        conv_sum_bias(OUT_CONV_HEIGHT_1, OUT_CONV_WIDTH_1, out_slice, bias_1, o_channel);

		// RELU
		relu(out_slice, OUT_CONV_HEIGHT_1, OUT_CONV_WIDTH_1, 1);

		// MAX POOL
		int *out_pool_1 = malloc(OUT_HEIGHT_1 * OUT_WIDTH_1 * sizeof(int));
		maxpool(out_1, out_pool_1, OUT_CONV_HEIGHT_1, OUT_CONV_WIDTH_1, 1,
            OUT_HEIGHT_1, OUT_WIDTH_1, 1,
            STRIDE_MAX_1, POOL_SIZE_1);

        time_end[o_channel] = memphis_get_tick();
		printf("Finished channel %d - Ticks = %s\n", o_channel, memphis_u64_str(time_end[o_channel]));

		// SEND
		switch (o_channel % P3_AMONT_OF_PES) {
			case 1:
				memphis_send(out_pool_1, P2_MSG_SIZE*sizeof(int), p3_1);
				break;
			case 2:
				memphis_send(out_pool_1, P2_MSG_SIZE*sizeof(int), p3_2);
				break;
			case 3:
				memphis_send(out_pool_1, P2_MSG_SIZE*sizeof(int), p3_3);
				break;
			default:
				memphis_send(out_pool_1, P2_MSG_SIZE*sizeof(int), p3_0);
		}

		time_sent[o_channel] = memphis_get_tick();
		printf("Sent channel %d - Ticks = %s\n\n", o_channel, memphis_u64_str(time_sent[o_channel]));

		free(out_pool_1);
	}


    printf("Finished P2 - Ticks = %s\n\n", memphis_u64_str(memphis_get_tick()));

	printf("[(receiving, received, finished, sent)]\n\n");
    printf("[\n");
	for (int o_channel = 0; o_channel < OUT_DEPTH_1; o_channel++)
    {
        printf("(%s, %s, %s, %s)", memphis_u64_str(time_rec[o_channel]), memphis_u64_str(time_recd[o_channel]), memphis_u64_str(time_end[o_channel]), memphis_u64_str(time_sent[o_channel]));
        if (o_channel+1 != OUT_DEPTH_1) {
            printf(",");
        }
        printf("\n");
    }
    printf("]\n\n");

	puts("Fim da aplicacao p2");

	return 0;
}

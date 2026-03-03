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

#include "p4_bias.h"

int main()
{
	puts("Inicio da aplicacao p4");

	unsigned *time_rec  = malloc(OUT_DEPTH_2*sizeof(unsigned));
    unsigned *time_recd = malloc(OUT_DEPTH_2*sizeof(unsigned));
    unsigned *time_end  = malloc(OUT_DEPTH_2*sizeof(unsigned));

	int *msg_0 = malloc(P3_MSG_SIZE*sizeof(int));
	int *msg_1 = malloc(P3_MSG_SIZE*sizeof(int));
	int *msg_2 = malloc(P3_MSG_SIZE*sizeof(int));
	int *msg_3 = malloc(P3_MSG_SIZE*sizeof(int));
	int *msg_4 = malloc(P3_MSG_SIZE*sizeof(int));
	int *msg_5 = malloc(P3_MSG_SIZE*sizeof(int));
	int *msg_6 = malloc(P3_MSG_SIZE*sizeof(int));
	int *msg_7 = malloc(P3_MSG_SIZE*sizeof(int));

    printf("Starting P4 - Ticks = %d\n\n", memphis_get_tick());

	int *out_2 = malloc(OUT_CONV_WIDTH_2 * OUT_CONV_HEIGHT_2 * OUT_DEPTH_2*sizeof(int));
	// Inicializa out_2
    for (int i = 0; i < OUT_CONV_WIDTH_2 * OUT_CONV_HEIGHT_2 * OUT_DEPTH_2; i++)
    {
        out_2[i] = 0;
    }

	for(int o_channel = 0; o_channel < OUT_DEPTH_2; o_channel++){
        int *out_slice = &out_2[o_channel * P3_MSG_SIZE];

        time_rec[o_channel] = memphis_get_tick();
        printf("Receiving channel %d - Ticks = %d\n", o_channel, time_rec[o_channel]);

		int received_0 = memphis_receive(msg_0, P3_MSG_SIZE*sizeof(int), p3_0);
		int received_1 = memphis_receive(msg_1, P3_MSG_SIZE*sizeof(int), p3_1);
		int received_2 = memphis_receive(msg_2, P3_MSG_SIZE*sizeof(int), p3_2);
		int received_3 = memphis_receive(msg_3, P3_MSG_SIZE*sizeof(int), p3_3);
		int received_4 = memphis_receive(msg_4, P3_MSG_SIZE*sizeof(int), p3_4);
		int received_5 = memphis_receive(msg_5, P3_MSG_SIZE*sizeof(int), p3_5);
		int received_6 = memphis_receive(msg_6, P3_MSG_SIZE*sizeof(int), p3_6);
		int received_7 = memphis_receive(msg_7, P3_MSG_SIZE*sizeof(int), p3_7);

        time_recd[o_channel] = memphis_get_tick();
		printf("Received channel %d - Ticks = %d\n", o_channel, time_recd[o_channel]);

		for (int j = 1; j < (received_0 >> 2); j++){
			out_slice[j] += msg_0[j];
			out_slice[j] += msg_1[j];
			out_slice[j] += msg_2[j];
			out_slice[j] += msg_3[j];
			out_slice[j] += msg_4[j];
			out_slice[j] += msg_5[j];
			out_slice[j] += msg_6[j];
			out_slice[j] += msg_7[j];

			//print("%d\n", out_slice[j]);
		}

        conv_sum_bias(OUT_CONV_HEIGHT_2, OUT_CONV_WIDTH_2, out_slice, bias_2, o_channel);

		// RELU
		relu(out_slice, OUT_CONV_HEIGHT_2, OUT_CONV_WIDTH_2, 1);

		// MAX POOL
		int *out_pool_2 = malloc(OUT_HEIGHT_2 * OUT_WIDTH_2 * sizeof(int));
		maxpool(out_2, out_pool_2, OUT_CONV_HEIGHT_2, OUT_CONV_WIDTH_2, 1,
            OUT_HEIGHT_2, OUT_WIDTH_2, 1,
            STRIDE_MAX_2, POOL_SIZE_2);

        time_end[o_channel] = memphis_get_tick();
		printf("Finished channel %d - Ticks = %d\n", o_channel, time_end[o_channel]);
	}


    printf("Finished P4 - Ticks = %d\n\n", memphis_get_tick());

	printf("[(receiving, received, finished)]\n\n");
    printf("[\n");
	for (int o_channel = 0; o_channel < OUT_DEPTH_2; o_channel++)
    {
        printf("(%d, %d, %d, %d)", time_rec[o_channel], time_recd[o_channel], time_end[o_channel]);
        if (o_channel+1 != OUT_DEPTH_2) {
            printf(",");
        }
        printf("\n");
    }
    printf("]\n\n");

	puts("Fim da aplicacao p2");

	return 0;
}

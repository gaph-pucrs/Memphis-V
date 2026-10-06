/**
 * MA-Memphis
 * @file p4.c
 *
 * @author Willian Nunes (willian.nunes@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 *
 * @date November 2024
 *
 * @brief Layer 2 accumulator: receives from p3_x, applies bias+relu+maxpool,
 *        then forwards each channel to p5_x workers (round-robin).
 */

#include <stdlib.h>
#include <stdio.h>

#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "p4_bias.h"

int main()
{
	puts("[P4] Inicio da aplicacao p4");

	unsigned int *time_rec  = malloc(OUT_DEPTH_2*sizeof(unsigned int));
    unsigned int *time_recd = malloc(OUT_DEPTH_2*sizeof(unsigned int));
    unsigned int *time_end  = malloc(OUT_DEPTH_2*sizeof(unsigned int));
	unsigned int *time_sent = malloc(OUT_DEPTH_2*sizeof(unsigned int));

	int *msg_0 = malloc(P3_MSG_SIZE*sizeof(int));
	int *msg_1 = malloc(P3_MSG_SIZE*sizeof(int));
	int *msg_2 = malloc(P3_MSG_SIZE*sizeof(int));
	int *msg_3 = malloc(P3_MSG_SIZE*sizeof(int));
	int *msg_4 = malloc(P3_MSG_SIZE*sizeof(int));
	int *msg_5 = malloc(P3_MSG_SIZE*sizeof(int));
	int *msg_6 = malloc(P3_MSG_SIZE*sizeof(int));
	int *msg_7 = malloc(P3_MSG_SIZE*sizeof(int));

    printf("[P4] Starting P4 - Ticks = %u\n\n", memphis_get_tick());

	int *out_2 = malloc(OUT_CONV_WIDTH_2 * OUT_CONV_HEIGHT_2 * OUT_DEPTH_2*sizeof(int));
	/* Inicializa out_2 */
    for (int i = 0; i < OUT_CONV_WIDTH_2 * OUT_CONV_HEIGHT_2 * OUT_DEPTH_2; i++)
    {
        out_2[i] = 0;
    }

	for(int o_channel = 0; o_channel < OUT_DEPTH_2; o_channel++){
        int *out_slice = &out_2[o_channel * P3_MSG_SIZE];

        time_rec[o_channel] = memphis_get_tick();
        printf("[P4] Receiving channel %d - Ticks = %u\n", o_channel, time_rec[o_channel]);

		int received_0 = memphis_receive(msg_0, P3_MSG_SIZE*sizeof(int), p3_0);
		int received_1 = memphis_receive(msg_1, P3_MSG_SIZE*sizeof(int), p3_1);
		int received_2 = memphis_receive(msg_2, P3_MSG_SIZE*sizeof(int), p3_2);
		int received_3 = memphis_receive(msg_3, P3_MSG_SIZE*sizeof(int), p3_3);
		int received_4 = memphis_receive(msg_4, P3_MSG_SIZE*sizeof(int), p3_4);
		int received_5 = memphis_receive(msg_5, P3_MSG_SIZE*sizeof(int), p3_5);
		int received_6 = memphis_receive(msg_6, P3_MSG_SIZE*sizeof(int), p3_6);
		int received_7 = memphis_receive(msg_7, P3_MSG_SIZE*sizeof(int), p3_7);

        time_recd[o_channel] = memphis_get_tick();
		printf("[P4] Received channel %d - Ticks = %u\n", o_channel, time_recd[o_channel]);

		for (int j = 1; j < (received_0 >> 2); j++){
			out_slice[j] += msg_0[j];
			out_slice[j] += msg_1[j];
			out_slice[j] += msg_2[j];
			out_slice[j] += msg_3[j];
			out_slice[j] += msg_4[j];
			out_slice[j] += msg_5[j];
			out_slice[j] += msg_6[j];
			out_slice[j] += msg_7[j];
		}

        conv_sum_bias(OUT_CONV_HEIGHT_2, OUT_CONV_WIDTH_2, out_slice, bias_2, o_channel);

		/* RELU */
		relu(out_slice, OUT_CONV_HEIGHT_2, OUT_CONV_WIDTH_2, 1);

		/* MAX POOL */
		int *out_pool_2 = malloc(OUT_HEIGHT_2 * OUT_WIDTH_2 * sizeof(int));
		maxpool(out_2, out_pool_2, OUT_CONV_HEIGHT_2, OUT_CONV_WIDTH_2, 1,
            OUT_HEIGHT_2, OUT_WIDTH_2, 1,
            STRIDE_MAX_2, POOL_SIZE_2);

        time_end[o_channel] = memphis_get_tick();
		printf("[P4] Finished channel %d - Ticks = %u\n", o_channel, time_end[o_channel]);

		/* Send to p5 workers round-robin by output channel */
		switch (o_channel % P5_AMONT_OF_PES) {
			case 1:
				memphis_send(out_pool_2, P4_MSG_SIZE*sizeof(int), p5_1);
				break;
			case 2:
				memphis_send(out_pool_2, P4_MSG_SIZE*sizeof(int), p5_2);
				break;
			case 3:
				memphis_send(out_pool_2, P4_MSG_SIZE*sizeof(int), p5_3);
				break;
			default:
				memphis_send(out_pool_2, P4_MSG_SIZE*sizeof(int), p5_0);
		}

		time_sent[o_channel] = memphis_get_tick();
		printf("[P4] Sent channel %d - Ticks = %u\n\n", o_channel, time_sent[o_channel]);

		free(out_pool_2);
	}


    printf("[P4] Finished P4 - Ticks = %u\n\n", memphis_get_tick());

	printf("[(receiving, received, finished, sent)]\n\n");
    printf("[\n");
	for (int o_channel = 0; o_channel < OUT_DEPTH_2; o_channel++)
    {
        printf("(%u, %u, %u, %u)", time_rec[o_channel], time_recd[o_channel], time_end[o_channel], time_sent[o_channel]);
        if (o_channel+1 != OUT_DEPTH_2) {
            printf(",");
        }
        printf("\n");
    }
    printf("]\n\n");

	puts("[P4] Fim da aplicacao p4");

	return 0;
}

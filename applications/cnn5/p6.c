/**
 * MA-Memphis
 * @file p6.c
 *
 * @author Willian Nunes (willian.nunes@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 *
 * @date November 2024
 *
 * @brief Layer 3 (AlexNet Conv3) accumulator: receives partial results from
 *        p5_x workers, accumulates, applies bias and relu. No max pooling
 *        after Conv3 in AlexNet. Then dispatches each channel to p7_x workers
 *        round-robin for Conv4.
 */

#include <stdlib.h>
#include <stdio.h>

#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "p6_bias.h"

int main()
{
	puts("Inicio da aplicacao p6");

	unsigned long long *time_rec  = malloc(OUT_DEPTH_3*sizeof(unsigned long long));
    unsigned long long *time_recd = malloc(OUT_DEPTH_3*sizeof(unsigned long long));
    unsigned long long *time_end  = malloc(OUT_DEPTH_3*sizeof(unsigned long long));
	unsigned long long *time_sent = malloc(OUT_DEPTH_3*sizeof(unsigned long long));

	int *msg_0 = malloc(P5_MSG_SIZE*sizeof(int));
	int *msg_1 = malloc(P5_MSG_SIZE*sizeof(int));
	int *msg_2 = malloc(P5_MSG_SIZE*sizeof(int));
	int *msg_3 = malloc(P5_MSG_SIZE*sizeof(int));
	int *msg_4 = malloc(P5_MSG_SIZE*sizeof(int));
	int *msg_5 = malloc(P5_MSG_SIZE*sizeof(int));

    printf("Starting P6 - Ticks = %s\n\n", memphis_u64_str(memphis_get_tick()));

	int *out_3 = malloc(OUT_CONV_WIDTH_3 * OUT_CONV_HEIGHT_3 * OUT_DEPTH_3*sizeof(int));
	/* Inicializa out_3 */
    for (int i = 0; i < OUT_CONV_WIDTH_3 * OUT_CONV_HEIGHT_3 * OUT_DEPTH_3; i++)
    {
        out_3[i] = 0;
    }

	for(int o_channel = 0; o_channel < OUT_DEPTH_3; o_channel++){
        int *out_slice = &out_3[o_channel * P5_MSG_SIZE];

        time_rec[o_channel] = memphis_get_tick();
        printf("Receiving channel %d - Ticks = %s\n", o_channel, memphis_u64_str(time_rec[o_channel]));

		int received_0 = memphis_receive(msg_0, P5_MSG_SIZE*sizeof(int), p5_0);
		int received_1 = memphis_receive(msg_1, P5_MSG_SIZE*sizeof(int), p5_1);
		int received_2 = memphis_receive(msg_2, P5_MSG_SIZE*sizeof(int), p5_2);
		int received_3 = memphis_receive(msg_3, P5_MSG_SIZE*sizeof(int), p5_3);
		int received_4 = memphis_receive(msg_4, P5_MSG_SIZE*sizeof(int), p5_4);
		int received_5 = memphis_receive(msg_5, P5_MSG_SIZE*sizeof(int), p5_5);

        time_recd[o_channel] = memphis_get_tick();
		printf("Received channel %d - Ticks = %s\n", o_channel, memphis_u64_str(time_recd[o_channel]));

		for (int j = 1; j < (received_0 >> 2); j++){
			out_slice[j] += msg_0[j];
			out_slice[j] += msg_1[j];
			out_slice[j] += msg_2[j];
			out_slice[j] += msg_3[j];
			out_slice[j] += msg_4[j];
			out_slice[j] += msg_5[j];
		}

        conv_sum_bias(OUT_CONV_HEIGHT_3, OUT_CONV_WIDTH_3, out_slice, bias_3, o_channel);

		/* RELU */
		relu(out_slice, OUT_CONV_HEIGHT_3, OUT_CONV_WIDTH_3, 1);

		/* No max pooling after Conv3 in AlexNet */

		/* Dispatch to p7_x workers round-robin by output channel */
		switch (o_channel % P7_AMONT_OF_PES) {
			case 1:
				memphis_send(out_slice, P6_MSG_SIZE*sizeof(int), p7_1);
				break;
			case 2:
				memphis_send(out_slice, P6_MSG_SIZE*sizeof(int), p7_2);
				break;
			case 3:
				memphis_send(out_slice, P6_MSG_SIZE*sizeof(int), p7_3);
				break;
			case 4:
				memphis_send(out_slice, P6_MSG_SIZE*sizeof(int), p7_4);
				break;
			case 5:
				memphis_send(out_slice, P6_MSG_SIZE*sizeof(int), p7_5);
				break;
			default:
				memphis_send(out_slice, P6_MSG_SIZE*sizeof(int), p7_0);
		}

        time_end[o_channel] = memphis_get_tick();
		printf("Finished channel %d - Ticks = %s\n\n", o_channel, memphis_u64_str(time_end[o_channel]));

		time_sent[o_channel] = memphis_get_tick();
		printf("Sent channel %d - Ticks = %s\n\n", o_channel, memphis_u64_str(time_sent[o_channel]));
	}


    printf("Finished P6 - Ticks = %s\n\n", memphis_u64_str(memphis_get_tick()));

	printf("[(receiving, received, finished, sent)]\n\n");
    printf("[\n");
	for (int o_channel = 0; o_channel < OUT_DEPTH_3; o_channel++)
    {
        printf("(%s, %s, %s, %s)", memphis_u64_str(time_rec[o_channel]), memphis_u64_str(time_recd[o_channel]), memphis_u64_str(time_end[o_channel]), memphis_u64_str(time_sent[o_channel]));
        if (o_channel+1 != OUT_DEPTH_3) {
            printf(",");
        }
        printf("\n");
    }
    printf("]\n\n");

	puts("Fim da aplicacao p6");

	return 0;
}

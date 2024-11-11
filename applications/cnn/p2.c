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

	unsigned *time = malloc(OUT_DEPTH_1*sizeof(unsigned));
	int *msg_0 = malloc(P1_MSG_SIZE*sizeof(int));
	int *msg_1 = malloc(P1_MSG_SIZE*sizeof(int));
	int *msg_2 = malloc(P1_MSG_SIZE*sizeof(int));

	int *out_1 = malloc(OUT_CONV_WIDTH_1 * OUT_CONV_HEIGHT_1 * OUT_DEPTH_1*sizeof(int));
	// Inicializa out_1
    for (int i = 0; i < OUT_CONV_WIDTH_1 * OUT_CONV_HEIGHT_1 * OUT_DEPTH_1; i++)
    {
        out_1[i] = 0;
    }


	for(int o_channel = 0; o_channel < OUT_DEPTH_1; o_channel++){
        int *out_slice = &out_1[o_channel * P1_MSG_SIZE];

		int received_0 = memphis_receive(msg_0, P1_MSG_SIZE*sizeof(int), p1_0);
		int received_1 = memphis_receive(msg_1, P1_MSG_SIZE*sizeof(int), p1_1);
		int received_2 = memphis_receive(msg_2, P1_MSG_SIZE*sizeof(int), p1_2);

		time[o_channel] = memphis_get_tick();

		for (int j = 1; j < (received_0 >> 2); j++){
			out_slice[j] += msg_0[j];
			out_slice[j] += msg_1[j];
			out_slice[j] += msg_2[j];

			//print("%d\n", out_slice[j]);
		}

        conv_sum_bias(OUT_CONV_HEIGHT_1, OUT_CONV_WIDTH_1, out_slice, bias_1, o_channel);
	}

	// RELU

	// MAX POOL

	// SEND

	for(int i = 0; i < OUT_DEPTH_1; i++){
		printf("%d\n", time[i]);
	}

	puts("Fim da aplicacao p2");

	return 0;
}

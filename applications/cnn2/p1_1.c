/**
 * MA-Memphis
 * @file p1.c
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

#include "p1_1_in.h"
#include "p1_1_weights.h"

int main()
{
	puts("Inicio da aplicacao p1");

    unsigned *time_start  = malloc(OUT_DEPTH_1*sizeof(unsigned));
    unsigned *time_finish = malloc(OUT_DEPTH_1*sizeof(unsigned));
    unsigned *time_sent   = malloc(OUT_DEPTH_1*sizeof(unsigned));

    size_t alloc_size = P1_MSG_SIZE;
    int *out_slice = malloc(alloc_size * sizeof(int));
    if (!out_slice)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    };

    printf("Starting P1 - Ticks = %d\n\n", memphis_get_tick());

	for (int o_channel = 0; o_channel < OUT_DEPTH_1; o_channel++)
    {
		for (int i = 0; i < P1_MSG_SIZE; i++)
		{
			out_slice[i] = 0;
		}

        time_start[o_channel] = memphis_get_tick();
        printf("Starting channel %d - Ticks = %d\n", o_channel, time_start[o_channel]);

        for (int i_channel = 0; i_channel < IN_DEPTH_1/P1_AMONT_OF_PES; i_channel++)
        {
            int* result = conv_channel(weights_1, in_1, IN_DEPTH_1, o_channel, i_channel, FILTER_HEIGHT_1, FILTER_WIDTH_1, IN_HEIGHT_1, IN_WIDTH_1, OUT_CONV_HEIGHT_1, OUT_CONV_WIDTH_1, STRIDE_CONV_1);

            for (int o_x = 0; o_x < P1_MSG_SIZE; o_x++)
            {
                out_slice[o_x] += result[o_x];
            }
        }

        time_finish[o_channel] = memphis_get_tick();
        printf("Finished channel %d - Ticks = %d\n", o_channel, time_finish[o_channel]);

        // Send result
		memphis_send(out_slice, P1_MSG_SIZE*sizeof(int), p2);

        time_sent[o_channel] = memphis_get_tick();
        printf("Sent channel %d - Ticks = %d\n\n", o_channel, time_sent[o_channel]);
    }

    printf("Finished P1 - Ticks = %d\n\n", memphis_get_tick());

    printf("[(start, finish, sent)]\n\n");
    printf("[\n");
	for (int o_channel = 0; o_channel < OUT_DEPTH_1; o_channel++)
    {
        printf("(%d, %d, %d)", time_start[o_channel], time_finish[o_channel], time_sent[o_channel]);
        if (o_channel+1 != OUT_DEPTH_1) {
            printf(",");
        }
        printf("\n");
    }
    printf("]\n\n");

	puts("Fim da aplicacao p1");
	return 0;
}

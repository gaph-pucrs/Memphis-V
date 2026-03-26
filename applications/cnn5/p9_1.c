/**
 * MA-Memphis
 * @file p9_1.c
 *
 * @author Willian Nunes (willian.nunes@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 *
 * @date November 2024
 *
 * @brief Layer 5 (AlexNet Conv5) worker 1: receives IN_DEPTH_5/P9_AMONT_OF_PES
 *        channels from p8, pads, computes conv5 for all output channels,
 *        and sends partial results to p10.
 */

#include <stdlib.h>
#include <stdio.h>

#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "p9_1_weights.h"

#define CHANNEL 1

int main()
{
	puts("Inicio da aplicacao p9_1");
    int i;

    int IN_DEPTH_5_LOCAL = (IN_DEPTH_5/P9_AMONT_OF_PES);

	unsigned long long *time_rec  = malloc(IN_DEPTH_5_LOCAL*sizeof(unsigned long long));
	unsigned long long *time_recd = malloc(IN_DEPTH_5_LOCAL*sizeof(unsigned long long));
	unsigned long long *time_pad  = malloc(IN_DEPTH_5_LOCAL*sizeof(unsigned long long));

    unsigned long long *time_start  = malloc(OUT_DEPTH_5*sizeof(unsigned long long));
    unsigned long long *time_finish = malloc(OUT_DEPTH_5*sizeof(unsigned long long));
    unsigned long long *time_sent   = malloc(OUT_DEPTH_5*sizeof(unsigned long long));

	int *msg = malloc(P8_MSG_SIZE*sizeof(int));

	size_t alloc_size;
    alloc_size = OUT_CONV_HEIGHT_4 * OUT_CONV_WIDTH_4 * IN_DEPTH_5_LOCAL;
    int *out_4 = malloc(alloc_size * sizeof(int));
    if (!out_4)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    };

    alloc_size = IN_HEIGHT_5 * IN_WIDTH_5 * IN_DEPTH_5_LOCAL;
    int *in_5 = malloc(alloc_size * sizeof(int));
    if (!in_5)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    };

    alloc_size = P9_MSG_SIZE;
    int *out_slice = malloc(alloc_size * sizeof(int));
    if (!out_slice)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    };

	printf("Started P9_1 - Ticks = %s\n\n", memphis_u64_str(memphis_get_tick()));

    /******************************** Receive ***********************************/
    for (unsigned i_channel = 0; i_channel < IN_DEPTH_5_LOCAL; i_channel += 1)
    {
        time_rec[i_channel] = memphis_get_tick();
        printf("Receiving channel %d - Ticks = %s\n", i_channel, memphis_u64_str(time_rec[i_channel]));

        memphis_receive(msg, P8_MSG_SIZE*sizeof(int), p8);

        time_recd[i_channel] = memphis_get_tick();
        printf("Received channel %d - Ticks = %s\n", i_channel, memphis_u64_str(time_recd[i_channel]));

        for(i = 0; i < P8_MSG_SIZE; i++){
            int index = i + (i_channel * OUT_CONV_HEIGHT_4 * OUT_CONV_WIDTH_4);
            out_4[index] = msg[i];
        }

        pad(&out_4[i_channel * OUT_CONV_HEIGHT_4 * OUT_CONV_WIDTH_4], &in_5[i_channel * IN_HEIGHT_5 * IN_WIDTH_5], OUT_CONV_HEIGHT_4, OUT_CONV_WIDTH_4, 1, PAD_IN_5);

        time_pad[i_channel] = memphis_get_tick();
        printf("Pad channel %d - Ticks = %s\n", i_channel, memphis_u64_str(time_pad[i_channel]));
    }

    free(out_4);
    /******************************** Layer 5 ***********************************/
	for (int o_channel = 0; o_channel < OUT_DEPTH_5; o_channel++)
    {
        for (int i = 0; i < P9_MSG_SIZE; i++)
		{
			out_slice[i] = 0;
		}

        time_start[o_channel] = memphis_get_tick();
        printf("Starting channel %d - Ticks = %s\n", o_channel, memphis_u64_str(time_start[o_channel]));

        for (int i_channel = 0; i_channel < IN_DEPTH_5_LOCAL; i_channel++)
        {
            int* result = conv_channel(weights_5, in_5, IN_DEPTH_5_LOCAL, o_channel, i_channel, FILTER_HEIGHT_5, FILTER_WIDTH_5, IN_HEIGHT_5, IN_WIDTH_5, OUT_CONV_HEIGHT_5, OUT_CONV_WIDTH_5, STRIDE_CONV_5);

            for (int o_x = 0; o_x < P9_MSG_SIZE; o_x++)
            {
                out_slice[o_x] += result[o_x];
            }
            free(result);
        }

        time_finish[o_channel] = memphis_get_tick();
        printf("Finished channel %d - Ticks = %s\n", o_channel, memphis_u64_str(time_finish[o_channel]));

        /* Send partial result to p10 */
		memphis_send(out_slice, P9_MSG_SIZE*sizeof(int), p10);

        time_sent[o_channel] = memphis_get_tick();
        printf("Sent channel %d - Ticks = %s\n\n", o_channel, memphis_u64_str(time_sent[o_channel]));
    }

    /******************************** Finish ***********************************/
	printf("Finished P9_1 - Ticks = %s\n\n", memphis_u64_str(memphis_get_tick()));

    printf("[(receiving, received, pad)]\n\n");
    printf("[\n");
	for (int i_channel = 0; i_channel < IN_DEPTH_5_LOCAL; i_channel++)
    {
        printf("(%s, %s, %s)", memphis_u64_str(time_rec[i_channel]), memphis_u64_str(time_recd[i_channel]), memphis_u64_str(time_pad[i_channel]));
        if (i_channel+1 != IN_DEPTH_5_LOCAL) {
            printf(",");
        }
        printf("\n");
    }
    printf("]\n\n");

    for (int o_channel = 0; o_channel < OUT_DEPTH_5; o_channel++)
    {
        printf("(%s, %s, %s)", memphis_u64_str(time_start[o_channel]), memphis_u64_str(time_finish[o_channel]), memphis_u64_str(time_sent[o_channel]));
        if (o_channel+1 != OUT_DEPTH_5) {
            printf(",");
        }
        printf("\n");
    }
    printf("]\n\n");

    puts("Fim da aplicacao p9_1");

	return 0;
}

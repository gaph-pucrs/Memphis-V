/**
 * MA-Memphis
 * @file p3.c
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

#include "p3_3_weights.h"

#define CHANNEL 0

int main()
{
	puts("Inicio da aplicacao p3");
    int i;

    int OUT_DEPTH_1_LOCAL = (OUT_DEPTH_1/P3_AMONT_OF_PES);
	unsigned long long *time_rec  = malloc(OUT_DEPTH_1_LOCAL*sizeof(unsigned long long));
	unsigned long long *time_recd = malloc(OUT_DEPTH_1_LOCAL*sizeof(unsigned long long));
	unsigned long long *time_pad  = malloc(OUT_DEPTH_1_LOCAL*sizeof(unsigned long long));

    unsigned long long *time_start  = malloc(OUT_DEPTH_2*sizeof(unsigned long long));
    unsigned long long *time_finish = malloc(OUT_DEPTH_2*sizeof(unsigned long long));
    unsigned long long *time_sent   = malloc(OUT_DEPTH_2*sizeof(unsigned long long));

	int *msg = malloc(P2_MSG_SIZE*sizeof(int));

	size_t alloc_size;
    alloc_size = OUT_HEIGHT_1 * OUT_WIDTH_1 * (OUT_DEPTH_1_LOCAL);
    int *out_1 = malloc(alloc_size * sizeof(int));
    if (!out_1)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    };

    alloc_size = IN_HEIGHT_2 * IN_WIDTH_2 * (OUT_DEPTH_1_LOCAL);
    int *in_2 = malloc(alloc_size * sizeof(int));
    if (!in_2)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    };

    alloc_size = P3_MSG_SIZE;
    int *out_slice = malloc(alloc_size * sizeof(int));
    if (!out_slice)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    };

	printf("Started P3 - Ticks = %s\n\n", memphis_u64_str(memphis_get_tick()));

    /******************************** Receive ***********************************/
    for (unsigned i_channel = 0; i_channel < OUT_DEPTH_1_LOCAL; i_channel += 1)
    {
        time_rec[i_channel] = memphis_get_tick();
        printf("Receiving channel %d - Ticks = %s\n", i_channel, memphis_u64_str(time_rec[i_channel]));

        memphis_receive(msg, P2_MSG_SIZE*sizeof(int), p2);

        time_recd[i_channel] = memphis_get_tick();
        printf("Received channel %d - Ticks = %s\n", i_channel, memphis_u64_str(time_recd[i_channel]));

        for(i = 0; i < P2_MSG_SIZE; i++){
            int index = i + (i_channel * OUT_HEIGHT_1 * OUT_WIDTH_1);
            out_1[index] = msg[i];
        }

        pad(&out_1[i_channel * OUT_HEIGHT_1 * OUT_WIDTH_1], &in_2[i_channel * IN_HEIGHT_2 * IN_WIDTH_2], OUT_HEIGHT_1, OUT_WIDTH_1, 1, PAD_IN_2);

        time_pad[i_channel] = memphis_get_tick();
        printf("Pad channel %d - Ticks = %s\n", i_channel, memphis_u64_str(time_pad[i_channel]));
    }

    free(out_1);
    /******************************** Layer 2 ***********************************/
	for (int o_channel = 0; o_channel < OUT_DEPTH_2; o_channel++)
    {
        for (int i = 0; i < P3_MSG_SIZE; i++)
		{
			out_slice[i] = 0;
		}

        time_start[o_channel] = memphis_get_tick();
        printf("Starting channel %d - Ticks = %s\n", o_channel, memphis_u64_str(time_start[o_channel]));

        for (int i_channel = 0; i_channel < OUT_DEPTH_1_LOCAL; i_channel++)
        {
            int* result = conv_channel(weights_2, in_2, OUT_DEPTH_1_LOCAL, o_channel, i_channel, FILTER_HEIGHT_2, FILTER_WIDTH_2, IN_HEIGHT_2, IN_WIDTH_2, OUT_CONV_HEIGHT_2, OUT_CONV_WIDTH_2, STRIDE_CONV_2);

            for (int o_x = 0; o_x < P3_MSG_SIZE; o_x++)
            {
                out_slice[o_x] += result[o_x];
            }
            free(result);
        }

        time_finish[o_channel] = memphis_get_tick();
        printf("Finished channel %d - Ticks = %s\n", o_channel, memphis_u64_str(time_finish[o_channel]));

        // Send result
		memphis_send(out_slice, P3_MSG_SIZE*sizeof(int), p4);

        time_sent[o_channel] = memphis_get_tick();
        printf("Sent channel %d - Ticks = %s\n\n", o_channel, memphis_u64_str(time_sent[o_channel]));
    }

    /******************************** Finish ***********************************/
	printf("Finished P3 - Ticks = %s\n\n", memphis_u64_str(memphis_get_tick()));

    printf("[(receiveing, received)]\n\n");
    printf("[\n");
	for (int i_channel = 0; i_channel < OUT_DEPTH_1_LOCAL; i_channel++)
    {
        printf("(%s, %s, %s)", memphis_u64_str(time_rec[i_channel]), memphis_u64_str(time_recd[i_channel]), memphis_u64_str(time_pad[i_channel]));
        if (i_channel+1 != OUT_DEPTH_1_LOCAL) {
            printf(",");
        }
        printf("\n");
    }
    printf("]\n\n");

    for (int o_channel = 0; o_channel < OUT_DEPTH_2; o_channel++)
    {
        printf("(%s, %s, %s)", memphis_u64_str(time_start[o_channel]), memphis_u64_str(time_finish[o_channel]), memphis_u64_str(time_sent[o_channel]));
        if (o_channel+1 != OUT_DEPTH_2) {
            printf(",");
        }
        printf("\n");
    }
    printf("]\n\n");

    puts("Fim da aplicacao p3");

	return 0;
}
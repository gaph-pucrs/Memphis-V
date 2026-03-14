/**
 * MA-Memphis
 * @file p7_3.c
 *
 * @author Willian Nunes (willian.nunes@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 *
 * @date November 2024
 *
 * @brief Layer 4 (AlexNet Conv4) worker 3: receives IN_DEPTH_4/P7_AMONT_OF_PES
 *        channels from p6, pads, computes conv4 for all output channels,
 *        and sends partial results to p8.
 */

#include <stdlib.h>
#include <stdio.h>

#include <memphis.h>

#include "cnn_std.h"
#include "cnn_common.h"

#include "p7_weights.h"

#define CHANNEL 3

int main()
{
	puts("Inicio da aplicacao p7_3");
    int i;

    int IN_DEPTH_4_LOCAL = (IN_DEPTH_4/P7_AMONT_OF_PES);

	unsigned *time_rec  = malloc(IN_DEPTH_4_LOCAL*sizeof(unsigned));
	unsigned *time_recd = malloc(IN_DEPTH_4_LOCAL*sizeof(unsigned));
	unsigned *time_pad  = malloc(IN_DEPTH_4_LOCAL*sizeof(unsigned));

    unsigned *time_start  = malloc(OUT_DEPTH_4*sizeof(unsigned));
    unsigned *time_finish = malloc(OUT_DEPTH_4*sizeof(unsigned));
    unsigned *time_sent   = malloc(OUT_DEPTH_4*sizeof(unsigned));

	int *msg = malloc(P6_MSG_SIZE*sizeof(int));

	size_t alloc_size;
    alloc_size = OUT_CONV_HEIGHT_3 * OUT_CONV_WIDTH_3 * IN_DEPTH_4_LOCAL;
    int *out_3 = malloc(alloc_size * sizeof(int));
    if (!out_3)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    };

    alloc_size = IN_HEIGHT_4 * IN_WIDTH_4 * IN_DEPTH_4_LOCAL;
    int *in_4 = malloc(alloc_size * sizeof(int));
    if (!in_4)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    };

    alloc_size = P7_MSG_SIZE;
    int *out_slice = malloc(alloc_size * sizeof(int));
    if (!out_slice)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    };

	printf("Started P7_3 - Ticks = %d\n\n", memphis_get_tick());

    /******************************** Receive ***********************************/
    for (unsigned i_channel = 0; i_channel < IN_DEPTH_4_LOCAL; i_channel += 1)
    {
        time_rec[i_channel] = memphis_get_tick();
        printf("Receiving channel %d - Ticks = %d\n", i_channel, time_rec[i_channel]);

        memphis_receive(msg, P6_MSG_SIZE*sizeof(int), p6);

        time_recd[i_channel] = memphis_get_tick();
        printf("Received channel %d - Ticks = %d\n", i_channel, time_recd[i_channel]);

        for(i = 0; i < P6_MSG_SIZE; i++){
            int index = i + (i_channel * OUT_CONV_HEIGHT_3 * OUT_CONV_WIDTH_3);
            out_3[index] = msg[i];
        }

        pad(&out_3[i_channel * OUT_CONV_HEIGHT_3 * OUT_CONV_WIDTH_3], &in_4[i_channel * IN_HEIGHT_4 * IN_WIDTH_4], OUT_CONV_HEIGHT_3, OUT_CONV_WIDTH_3, 1, PAD_IN_4);

        time_pad[i_channel] = memphis_get_tick();
        printf("Pad channel %d - Ticks = %d\n", i_channel, time_pad[i_channel]);
    }

    free(out_3);
    /******************************** Layer 4 ***********************************/
	for (int o_channel = 0; o_channel < OUT_DEPTH_4; o_channel++)
    {
        for (int i = 0; i < P7_MSG_SIZE; i++)
		{
			out_slice[i] = 0;
		}

        time_start[o_channel] = memphis_get_tick();
        printf("Starting channel %d - Ticks = %d\n", o_channel, time_start[o_channel]);

        for (int i_channel = 0; i_channel < IN_DEPTH_4_LOCAL; i_channel++)
        {
            int* result = conv_channel(weights_4, in_4, IN_DEPTH_4_LOCAL, o_channel, i_channel, FILTER_HEIGHT_4, FILTER_WIDTH_4, IN_HEIGHT_4, IN_WIDTH_4, OUT_CONV_HEIGHT_4, OUT_CONV_WIDTH_4, STRIDE_CONV_4);

            for (int o_x = 0; o_x < P7_MSG_SIZE; o_x++)
            {
                out_slice[o_x] += result[o_x];
            }
            free(result);
        }

        time_finish[o_channel] = memphis_get_tick();
        printf("Finished channel %d - Ticks = %d\n", o_channel, time_finish[o_channel]);

        /* Send partial result to p8 */
		memphis_send(out_slice, P7_MSG_SIZE*sizeof(int), p8);

        time_sent[o_channel] = memphis_get_tick();
        printf("Sent channel %d - Ticks = %d\n\n", o_channel, time_sent[o_channel]);
    }

    /******************************** Finish ***********************************/
	printf("Finished P7_3 - Ticks = %d\n\n", memphis_get_tick());

    printf("[(receiving, received, pad)]\n\n");
    printf("[\n");
	for (int i_channel = 0; i_channel < IN_DEPTH_4_LOCAL; i_channel++)
    {
        printf("(%d, %d, %d)", time_rec[i_channel], time_recd[i_channel], time_pad[i_channel]);
        if (i_channel+1 != IN_DEPTH_4_LOCAL) {
            printf(",");
        }
        printf("\n");
    }
    printf("]\n\n");

    for (int o_channel = 0; o_channel < OUT_DEPTH_4; o_channel++)
    {
        printf("(%d, %d, %d)", time_start[o_channel], time_finish[o_channel], time_sent[o_channel]);
        if (o_channel+1 != OUT_DEPTH_4) {
            printf(",");
        }
        printf("\n");
    }
    printf("]\n\n");

    puts("Fim da aplicacao p7_3");

	return 0;
}

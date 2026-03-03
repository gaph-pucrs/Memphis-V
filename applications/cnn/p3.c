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

int main()
{
	puts("Inicio da aplicacao p3");

	unsigned *time_rec  = malloc(OUT_DEPTH_1*sizeof(unsigned));
	unsigned *time_recd = malloc(OUT_DEPTH_1*sizeof(unsigned));
	int *msg = malloc(P2_MSG_SIZE*sizeof(int));

	printf("Started P3 - Ticks = %d\n\n", memphis_get_tick());


    for(int o_channel = 0; o_channel < OUT_DEPTH_1; o_channel++){

		time_rec[o_channel] = memphis_get_tick();
        printf("Receiving channel %d - Ticks = %d\n", o_channel, time_rec[o_channel]);

		int received = memphis_receive(msg, P2_MSG_SIZE*sizeof(int), p2);

		time_recd[o_channel] = memphis_get_tick();
		printf("Received channel %d - Ticks = %d\n", o_channel, time_recd[o_channel]);

        for(int i = 0; i < P2_MSG_SIZE; i++){
		    //printf("%d\n", msg[i]);
	    }
    }

	printf("Finished P3 - Ticks = %d\n\n", memphis_get_tick());

    printf("[(receiveing, received)]\n\n");
    printf("[\n");
	for (int o_channel = 0; o_channel < OUT_DEPTH_1; o_channel++)
    {
        printf("(%d, %d)", time_rec[o_channel], time_recd[o_channel]);
        if (o_channel+1 != OUT_DEPTH_1) {
            printf(",");
        }
        printf("\n");
    }
    printf("]\n\n");

    puts("Fim da aplicacao p3");

	return 0;
}
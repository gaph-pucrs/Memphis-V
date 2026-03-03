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

int main()
{
	unsigned *time = malloc(INFERENCES*sizeof(unsigned));
	int *msg_0 = malloc(P1_MSG_SIZE*sizeof(int));
	int *msg_1 = malloc(P1_MSG_SIZE*sizeof(int));
	int *msg_2 = malloc(P1_MSG_SIZE*sizeof(int));

	puts("Inicio da aplicacao cons");

	for(int i = 0; i < INFERENCES; i++){
		int received_0 = memphis_receive(msg_0, P1_MSG_SIZE*sizeof(int), p1_0);
		int received_1 = memphis_receive(msg_1, P1_MSG_SIZE*sizeof(int), p1_1);
		int received_2 = memphis_receive(msg_2, P1_MSG_SIZE*sizeof(int), p1_2);

		time[i] = memphis_get_tick();

		for (int j = 1; j < (received_0 >> 2); j++){
			if (msg_0[j] != 0 || msg_1[j] != 1 || msg_2[j] != 2){
				printf("Error: message invalid\n");
				exit(-1);
			}
		}
	}

	for(int i = 0; i < INFERENCES; i++){
		printf("%d\n", time[i]);
	}

	puts("Fim da aplicacao p2");

	return 0;
}

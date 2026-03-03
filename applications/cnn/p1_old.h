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

int main()
{
	puts("Inicio da aplicacao p1");

	int channel = 1;

	int *msg = malloc(P1_MSG_SIZE*sizeof(int));

	for(int i = 0; i < P1_MSG_SIZE; i++)
		msg[i] = 1;

	for(int i = 0; i < INFERENCES; i++){
		memphis_send(msg, P1_MSG_SIZE*sizeof(int), p2);
	}

	puts("Fim da aplicacao p1");
	return 0;
}

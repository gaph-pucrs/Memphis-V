/**
 * MA-Memphis
 * @file msink.c
 *
 * @brief Second task of osz_mark
 *
 * @details Exists so the application has a communication edge and a second PE
 * of the claimed row is written to, and marks its own page the same way.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <memphis.h>

#include "osz_scrub_std.h"

int main()
{
	volatile uint32_t *area = (volatile uint32_t*)OSZ_SCRUB_BASE;

	for(int i = 0; i < OSZ_SCRUB_WORDS; i++)
		area[i] = OSZ_SCRUB_MAGIC;

	int *msg = malloc(OSZ_SCRUB_MSG_WORDS*sizeof(int));

	int received = memphis_receive(msg, OSZ_SCRUB_MSG_WORDS*sizeof(int), mark);

	printf("msink: marked %d words, received %d bytes\n", OSZ_SCRUB_WORDS, received);

	return 0;
}

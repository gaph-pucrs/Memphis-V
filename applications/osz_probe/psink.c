/**
 * MA-Memphis
 * @file psink.c
 *
 * @brief Second task of osz_probe, scanning its own page as well
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <memphis.h>

#include "osz_scrub_std.h"

int main()
{
	volatile uint32_t *area = (volatile uint32_t*)OSZ_SCRUB_BASE;

	int hits = 0;
	for(int i = 0; i < OSZ_SCRUB_WORDS; i++){
		if(area[i] == OSZ_SCRUB_MAGIC)
			hits++;
	}

	printf("psink: RESIDUE %d/%d words at %08x\n",
		hits, OSZ_SCRUB_WORDS, (unsigned)OSZ_SCRUB_BASE);

	if(hits == 0)
		puts("psink: PAGE CLEAN");
	else
		puts("psink: PAGE DIRTY");

	int *msg = malloc(OSZ_SCRUB_MSG_WORDS*sizeof(int));

	memphis_receive(msg, OSZ_SCRUB_MSG_WORDS*sizeof(int), probe);

	printf("psink: peer reported %d\n", msg[0]);

	return 0;
}

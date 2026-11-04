/**
 * MA-Memphis
 * @file probe.c
 *
 * @brief Looks for a previous tenant's data in the page it was given
 *
 * @details The other half of the per-task scrub test. Runs after osz_mark has
 * terminated and its zone has been torn down, on a PE of the same region row.
 *
 * A count of 0 means the page was scrubbed. Anything else is the previous
 * application's memory, readable by the next one.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <memphis.h>

#include "osz_scrub_std.h"

int main()
{
	/* Scan before anything else can touch the window */
	volatile uint32_t *area = (volatile uint32_t*)OSZ_SCRUB_BASE;

	int hits = 0;
	for(int i = 0; i < OSZ_SCRUB_WORDS; i++){
		if(area[i] == OSZ_SCRUB_MAGIC)
			hits++;
	}

	printf("probe: RESIDUE %d/%d words at %08x\n",
		hits, OSZ_SCRUB_WORDS, (unsigned)OSZ_SCRUB_BASE);

	if(hits == 0)
		puts("probe: PAGE CLEAN");
	else
		puts("probe: PAGE DIRTY");

	int *msg = malloc(OSZ_SCRUB_MSG_WORDS*sizeof(int));

	for(int i = 0; i < OSZ_SCRUB_MSG_WORDS; i++)
		msg[i] = hits;

	memphis_send(msg, OSZ_SCRUB_MSG_WORDS*sizeof(int), psink);

	return 0;
}

/**
 * MA-Memphis
 * @file mark.c
 *
 * @brief Fills its data page with a recognizable pattern, then exits
 *
 * @details Half of the per-task scrub test. This task runs inside a secure
 * zone, writes a magic word across a 16 KiB window of its own data page and
 * terminates. Whether the pattern is still there when the PE is handed to the
 * next application is what osz_probe answers.
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

	printf("mark: wrote %d words of %08x at %08x\n",
		OSZ_SCRUB_WORDS, (unsigned)OSZ_SCRUB_MAGIC, (unsigned)OSZ_SCRUB_BASE);

	/*
	 * Message shape copied from prod_cons: a heap buffer of 64 words. A single
	 * 4-byte message from a stack address was observed never to arrive -- msink
	 * stayed blocked in memphis_receive and the application never terminated --
	 * so this mirrors a shape known to work rather than relying on the smallest
	 * one. Whether the size or the address is what mattered was not isolated.
	 */
	int *msg = malloc(OSZ_SCRUB_MSG_WORDS*sizeof(int));

	for(int i = 0; i < OSZ_SCRUB_MSG_WORDS; i++)
		msg[i] = i;

	memphis_send(msg, OSZ_SCRUB_MSG_WORDS*sizeof(int), msink);

	puts("mark: done");

	return 0;
}

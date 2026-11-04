/**
 * MA-Memphis
 * @file overflow.c
 *
 * @brief OSZ abort test: overflows its stack so the kernel aborts it
 *
 * @details A large .bss puts the heap start ~8 KiB into the data page. The
 * recursion takes the stack below that point and then spins, still inside the
 * page, until the kernel's stack check aborts the task. The mapper then aborts
 * the rest of the application, and the zone must be cleared before its rows
 * are given to anyone else.
 */

#include <stdio.h>
#include <stdint.h>

#include <memphis.h>

#define FRAME_WORDS 256     /* 1 KiB per frame */
#define DEPTH       60      /* ~60 KiB of the 64 KiB page */

static volatile uint32_t big_bss[2048];    /* 8 KiB: heap starts above it */

static int deep(int n)
{
	volatile uint32_t frame[FRAME_WORDS];
	frame[0] = n;
	frame[FRAME_WORDS - 1] = big_bss[n];

	if (n == 0) {
		puts("overflow: stack below the heap start, waiting to be aborted");
		while (1);
	}

	return deep(n - 1) + frame[0];
}

int main()
{
	puts("overflow: started");
	return deep(DEPTH);
}

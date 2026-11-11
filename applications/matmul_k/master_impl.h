/**
 * matmul_k
 * master_impl.h
 *
 * Master task logic, included by the generated master.c.
 *
 * Inner-dimension (k) decomposition of C = A x B:
 *   1. Scatter: worker w receives A[:, k] and B[k, :], k = [w*KB, (w+1)*KB)
 *   2. Gather:  worker w returns C'w = A[:, k] x B[k, :] (N x N)
 *   3. Reduce:  C = sum of all C'w, then compare against the golden C_ref
 *
 * The generated master.c must define P[MATMUL_W] (worker task IDs) before
 * including this file.
 */

#pragma once

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include <memphis.h>

#include "matmul_k.h"
#include "data.h"

/* A column block is strided in A, so it is packed before sending */
static int32_t a_pack[MATMUL_N * MATMUL_KB];

static int32_t c[MATMUL_N * MATMUL_N];		/* Accumulated result */
static int32_t c_part[MATMUL_N * MATMUL_N];	/* Partial product received from a worker */

static unsigned t_recv[MATMUL_W];
static unsigned t_acc[MATMUL_W];

int main()
{
	printf("MM master start N=%d W=%d KB=%d\n", MATMUL_N, MATMUL_W, MATMUL_KB);

	unsigned t_pack = 0;	/* Total ticks spent packing A column blocks */

	unsigned t_start = memphis_get_tick();

	/* 1. Scatter */
	for (int w = 0; w < MATMUL_W; w++) {
		unsigned t_pack_start = memphis_get_tick();
		for (int i = 0; i < MATMUL_N; i++)
			memcpy(&a_pack[i * MATMUL_KB], &A[i * MATMUL_N + w * MATMUL_KB], MATMUL_KB * sizeof(int32_t));
		t_pack += memphis_get_tick() - t_pack_start;

		memphis_send(a_pack, sizeof(a_pack), P[w]);

		/* A row block of B is contiguous: send it in place */
		memphis_send(&B[w * MATMUL_KB * MATMUL_N], MATMUL_KB * MATMUL_N * sizeof(int32_t), P[w]);
	}

	unsigned t_scatter = memphis_get_tick();

	/* 2. Gather + 3. Reduce */
	memphis_receive(c, sizeof(c), P[0]);
	t_recv[0] = memphis_get_tick();
	t_acc[0]  = t_recv[0];

	for (int w = 1; w < MATMUL_W; w++) {
		memphis_receive(c_part, sizeof(c_part), P[w]);
		t_recv[w] = memphis_get_tick();

		for (int i = 0; i < MATMUL_N * MATMUL_N; i++)
			c[i] += c_part[i];
		t_acc[w] = memphis_get_tick();
	}

	unsigned t_end = memphis_get_tick();

	/* Verification against the numpy golden result (not part of t_end) */
	int errors = 0;
	for (int i = 0; i < MATMUL_N * MATMUL_N; i++) {
		if (c[i] != C_ref[i]) {
			if (errors == 0)
				printf("MM ERROR first mismatch at (%d,%d): %ld != %ld\n", i / MATMUL_N, i % MATMUL_N, (long)c[i], (long)C_ref[i]);
			errors++;
		}
	}

	unsigned t_verify = memphis_get_tick();

	for (int w = 0; w < MATMUL_W; w++)
		printf("MM gather w=%d t_recv=%u t_acc=%u\n", w, t_recv[w], t_acc[w]);

	printf(
		"MM master N=%d W=%d t_start=%u t_scatter=%u t_end=%u t_verify=%u t_pack=%u errors=%d\n",
		MATMUL_N, MATMUL_W, t_start, t_scatter, t_end, t_verify, t_pack, errors
	);

	puts(errors == 0 ? "MATMUL_K PASS" : "MATMUL_K FAIL");

	return 0;
}

/**
 * matmul_k
 * worker_impl.h
 *
 * Worker task logic, shared by every generated workerX.c.
 *
 * Worker w receives the column block A[:, k] and the row block B[k, :],
 * where k = [w*KB, (w+1)*KB), and returns the full-size partial product
 * C'w = A[:, k] x B[k, :] (N x N) to the master.
 *
 * Each workerX.c only defines WORKER_ID and includes this file.
 */

#pragma once

#include <stdio.h>
#include <stdint.h>

#include <memphis.h>

#include "matmul_k.h"
#include "kernel.h"

#ifndef WORKER_ID
	#error "Define WORKER_ID before including worker_impl.h"
#endif

static int32_t a_blk[MATMUL_N * MATMUL_KB];		/* A[:, k] (N x KB) */
static int32_t b_blk[MATMUL_KB * MATMUL_N];		/* B[k, :] (KB x N) */
static int32_t c_part[MATMUL_N * MATMUL_N];		/* C'w     (N x N)  */

int main()
{
	unsigned t_start = memphis_get_tick();

	int recv_a = memphis_receive(a_blk, sizeof(a_blk), master);
	unsigned t_recv_a = memphis_get_tick();

	int recv_b = memphis_receive(b_blk, sizeof(b_blk), master);
	unsigned t_recv_b = memphis_get_tick();

	matmul_block(a_blk, b_blk, c_part, MATMUL_N, MATMUL_KB, MATMUL_N);
	unsigned t_comp = memphis_get_tick();

	memphis_send(c_part, sizeof(c_part), master);
	unsigned t_send = memphis_get_tick();

	if (recv_a != sizeof(a_blk) || recv_b != sizeof(b_blk))
		printf("MM ERROR worker %d received %d/%d bytes\n", WORKER_ID, recv_a, recv_b);

	printf(
		"MM worker w=%d t_start=%u t_recv_a=%u t_recv_b=%u t_comp=%u t_send=%u\n",
		WORKER_ID, t_start, t_recv_a, t_recv_b, t_comp, t_send
	);

	return 0;
}

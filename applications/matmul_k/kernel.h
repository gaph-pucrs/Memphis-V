/**
 * matmul_k
 * kernel.h
 *
 * Scalar int32 block matrix multiplication kernel.
 */

#pragma once

#include <stdint.h>

/**
 * Computes c = a x b for row-major int32 blocks
 *
 * Parameters:
 *  a     Left block (rows x inner)
 *  b     Right block (inner x cols)
 *  c     Result block (rows x cols), overwritten
 *  rows  Number of rows of a and c
 *  inner Shared dimension (columns of a, rows of b)
 *  cols  Number of columns of b and c
 */
static inline void matmul_block(
	const int32_t *a,
	const int32_t *b,
	int32_t *c,
	int rows,
	int inner,
	int cols
)
{
	for (int i = 0; i < rows; i++) {
		const int32_t *a_row = &a[i * inner];
		for (int j = 0; j < cols; j++) {
			const int32_t *b_col = &b[j];
			int32_t acc = 0;
			for (int k = 0; k < inner; k++)
				acc += a_row[k] * b_col[k * cols];
			c[i * cols + j] = acc;
		}
	}
}

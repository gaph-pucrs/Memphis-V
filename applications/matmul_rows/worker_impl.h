/**
 * @file worker_impl.h
 * @author Lucas Cunha
 * @author Guilherme Frick
 * @brief Lógica única dos workers: cada workerX.c contém só #include "worker_impl.h".
 * @version 0.1
 * @date 2026-11-14
 *
 * @details Recebe do master um bloco de MATMUL_ROWS linhas de A e a matriz B inteira,
 * calcula o bloco correspondente de C e o devolve. Imprime os ticks de recv, comp e send.
 */
#ifndef MATMUL_WORKER_IMPL_H
#define MATMUL_WORKER_IMPL_H

#include <memphis.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

#include "matmul.h"

/**
 * @brief Tarefa worker.
 *
 * @return Código matmul_status_t (MATMUL_OK em caso de sucesso).
 */
int main()
{
    const size_t    a_blk_sz = sizeof(int32_t) * MATMUL_ROWS * MATMUL_N;
    const size_t    b_sz     = sizeof(int32_t) * MATMUL_N * MATMUL_N;
    const size_t    c_blk_sz = a_blk_sz;
    matmul_status_t st       = MATMUL_OK;

    int32_t(*a_blk)[MATMUL_N] = malloc(a_blk_sz);
    int32_t(*b)[MATMUL_N]     = malloc(b_sz);
    int32_t(*c_blk)[MATMUL_N] = malloc(c_blk_sz);

    do
    {
        if (a_blk == NULL || b == NULL || c_blk == NULL)
        {
            st = matmul_erro(MATMUL_ERR_ALLOC, "malloc das matrizes do worker", -1);
            break;
        }

        matmul_dbg("Worker id %" PRIu32 "\n", (uint32_t)(getpid() & 0xFF));

        uint32_t t0 = memphis_get_tick();

        if (memphis_receive(a_blk, a_blk_sz, master) != (int32_t)a_blk_sz || memphis_receive(b, b_sz, master) != (int32_t)b_sz)
        {
            st = matmul_erro(MATMUL_ERR_RECV, "receive do master", -1);
            break;
        }

        uint32_t t1 = memphis_get_tick();

        for (uint32_t i = 0; i < MATMUL_ROWS; i++)
        {
            for (uint32_t j = 0; j < MATMUL_N; j++)
            {
                int32_t acc = 0;
                for (uint32_t k = 0; k < MATMUL_N; k++) acc += a_blk[i][k] * b[k][j];
                c_blk[i][j] = acc;
            }
        }

        uint32_t t2 = memphis_get_tick();

        if (memphis_send(c_blk, c_blk_sz, master) < 0)
        {
            st = matmul_erro(MATMUL_ERR_SEND, "send para o master", -1);
            break;
        }

        uint32_t t3 = memphis_get_tick();

        matmul_dbg("Enviou\n");

        printf("TICKS recv=%" PRIu32 " comp=%" PRIu32 " send=%" PRIu32 "\n", t1 - t0, t2 - t1, t3 - t2);
    } while (0);

    free(a_blk);
    free(b);
    free(c_blk);
    return st;
}

#endif /* MATMUL_WORKER_IMPL_H */

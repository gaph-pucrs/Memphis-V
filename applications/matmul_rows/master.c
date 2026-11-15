/**
 * @file master.c
 * @author Lucas Cunha
 * @author Guilherme Frick
 * @brief Tarefa master: distribui A (por linhas) e B aos workers, junta C e compara com o golden.
 * @version 0.1
 * @date 2026-11-14
 *
 * @details Gerado por generator/generator.py (a lista worker_ids depende de --workers).
 * Imprime os ticks de envio e recebimento e a linha "RESULT OK/ERRO".
 */
#include <memphis.h>
#include <stdint.h>
#include <stdlib.h>

#include "matmul.h"

/** @brief IDs das tarefas worker, na ordem dos blocos de linhas. */
/* clang-format off */
static const int32_t worker_ids[] = {
    worker0,
    worker1,
    worker2,
};
/* clang-format on */

/**
 * @brief Tarefa master.
 *
 * @return Código matmul_status_t (MATMUL_OK se C bate com o golden).
 */
int main()
{
    const size_t    blk = sizeof(int32_t) * MATMUL_ROWS * MATMUL_N;
    matmul_status_t st  = MATMUL_OK;

    int32_t(*mat_c)[MATMUL_N] = malloc(sizeof(int32_t) * MATMUL_N * MATMUL_N);

    do
    {
        if (mat_c == NULL)
        {
            st = matmul_erro(MATMUL_ERR_ALLOC, "malloc de C no master", -1);
            break;
        }

        matmul_dbg("Fatiando e enviando a matriz A...\n");

        uint32_t t0 = memphis_get_tick();

        for (uint32_t w = 0; w < MATMUL_W && st == MATMUL_OK; w++)
        {
            if (memphis_send((void *)mat_a[w * MATMUL_ROWS], blk, worker_ids[w]) < 0 || memphis_send((void *)mat_b, sizeof(mat_b), worker_ids[w]) < 0)
                st = matmul_erro(MATMUL_ERR_SEND, "send para", (int32_t)w);
        }
        if (st != MATMUL_OK)
            break;

        uint32_t t1 = memphis_get_tick();

        matmul_dbg("Recebendo resultados...\n");

        for (uint32_t w = 0; w < MATMUL_W && st == MATMUL_OK; w++)
        {
            if (memphis_receive(mat_c[w * MATMUL_ROWS], blk, worker_ids[w]) != (int32_t)blk)
                st = matmul_erro(MATMUL_ERR_RECV, "receive de", (int32_t)w);
        }
        if (st != MATMUL_OK)
            break;

        uint32_t t2 = memphis_get_tick();

        uint32_t errors = 0;
        for (uint32_t i = 0; i < MATMUL_N; i++)
            for (uint32_t j = 0; j < MATMUL_N; j++)
                if (mat_c[i][j] != mat_c_ref[i][j])
                    errors++;

        printf("TICKS send=%" PRIu32 " recv=%" PRIu32 " total=%" PRIu32 "\n", t1 - t0, t2 - t1, t2 - t0);
        printf("RESULT %s N=%" PRIu32 " W=%" PRIu32 " erros=%" PRIu32 "\n", errors ? "ERRO" : "OK", MATMUL_N, MATMUL_W, errors);

        if (MATMUL_DEBUG)
        {
            printf("Matriz resultante:\n");
            for (uint32_t i = 0; i < MATMUL_N; i++)
                for (uint32_t j = 0; j < MATMUL_N; j++) printf("%" PRId32 "%c", mat_c[i][j], j == MATMUL_N - 1 ? '\n' : ' ');
        }

        if (errors)
            st = MATMUL_ERR_RESULT;
    } while (0);

    free(mat_c);
    return st;
}

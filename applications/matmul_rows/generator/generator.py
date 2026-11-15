#!/usr/bin/env python3
"""Gerador da aplicação matmul_rows (C = A x B, decomposição por linhas).

Uso: python3 generator.py --workers W --size N [--seed S] [--debug] [--page-kb KB]

Gera na pasta da aplicação: config.yaml, data.h, master.c e worker0.c..workerW-1.c.
"""
import argparse
import random
import sys
from pathlib import Path

APP_DIR = Path(__file__).resolve().parent.parent
VMAX = 99  # elementos de A e B em [0, VMAX]


def golden(a, b, n):
    try:
        import numpy as np
        c = np.array(a, dtype=np.int64) @ np.array(b, dtype=np.int64)
        return c.tolist()
    except ImportError:
        return [[sum(a[i][k] * b[k][j] for k in range(n)) for j in range(n)] for i in range(n)]


def c_matrix(name, m):
    rows = ",\n".join("    {" + ", ".join(map(str, r)) + "}" for r in m)
    return f"static const int32_t {name}[MATMUL_N][MATMUL_N] = {{\n{rows}\n}};\n"


def header(fname, brief, n, w, seed, debug):
    dbg_cmd = " --debug" if debug else ""
    return f"""/**
 * @file {fname}
 * @author Lucas Cunha
 * @author Guilherme Frick
 * @brief {brief}
 * @version 0.1
 * @date 2026-11-14
 *
 * @details Gerado por generator/generator.py --workers {w} --size {n} --seed {seed}{dbg_cmd}
 */"""


def write_data_h(n, w, seed, debug, a, b, c):
    return f"""{header("data.h", "Parâmetros da configuração, matrizes A e B e o resultado esperado (golden).", n, w, seed, debug)}
#ifndef MATMUL_DATA_H
#define MATMUL_DATA_H

#include <stdint.h>

/** @brief Tamanho das matrizes (N x N). */
static constexpr uint32_t MATMUL_N = {n};

/** @brief Número de workers (W). */
static constexpr uint32_t MATMUL_W = {w};

/** @brief Linhas de C calculadas por worker (MATMUL_N / MATMUL_W). */
static constexpr uint32_t MATMUL_ROWS = {n // w};

/** @brief Liga as mensagens de matmul_dbg (--debug no gerador). */
static constexpr bool MATMUL_DEBUG = {"true" if debug else "false"};

/* Só o master usa as matrizes; nos workers o compilador (-Os) descarta as static const não usadas. */
/* clang-format off */
/** @brief Matriz A (entrada). */
{c_matrix("mat_a", a)}
/** @brief Matriz B (entrada). */
{c_matrix("mat_b", b)}
/** @brief Resultado esperado C = A x B, calculado pelo gerador (golden). */
{c_matrix("mat_c_ref", c)}/* clang-format on */

#endif /* MATMUL_DATA_H */
"""


def write_master(w):
    ids = "".join(f"    worker{i},\n" for i in range(w))
    return f"""/**
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
static const int32_t worker_ids[] = {{
{ids}}};
/* clang-format on */

/**
 * @brief Tarefa master.
 *
 * @return Código matmul_status_t (MATMUL_OK se C bate com o golden).
 */
int main()
{{
    const size_t    blk = sizeof(int32_t) * MATMUL_ROWS * MATMUL_N;
    matmul_status_t st  = MATMUL_OK;

    int32_t(*mat_c)[MATMUL_N] = malloc(sizeof(int32_t) * MATMUL_N * MATMUL_N);

    do
    {{
        if (mat_c == NULL)
        {{
            st = matmul_erro(MATMUL_ERR_ALLOC, "malloc de C no master", -1);
            break;
        }}

        matmul_dbg("Fatiando e enviando a matriz A...\\n");

        uint32_t t0 = memphis_get_tick();

        for (uint32_t w = 0; w < MATMUL_W && st == MATMUL_OK; w++)
        {{
            if (memphis_send((void *)mat_a[w * MATMUL_ROWS], blk, worker_ids[w]) < 0 || memphis_send((void *)mat_b, sizeof(mat_b), worker_ids[w]) < 0)
                st = matmul_erro(MATMUL_ERR_SEND, "send para", (int32_t)w);
        }}
        if (st != MATMUL_OK)
            break;

        uint32_t t1 = memphis_get_tick();

        matmul_dbg("Recebendo resultados...\\n");

        for (uint32_t w = 0; w < MATMUL_W && st == MATMUL_OK; w++)
        {{
            if (memphis_receive(mat_c[w * MATMUL_ROWS], blk, worker_ids[w]) != (int32_t)blk)
                st = matmul_erro(MATMUL_ERR_RECV, "receive de", (int32_t)w);
        }}
        if (st != MATMUL_OK)
            break;

        uint32_t t2 = memphis_get_tick();

        uint32_t errors = 0;
        for (uint32_t i = 0; i < MATMUL_N; i++)
            for (uint32_t j = 0; j < MATMUL_N; j++)
                if (mat_c[i][j] != mat_c_ref[i][j])
                    errors++;

        printf("TICKS send=%" PRIu32 " recv=%" PRIu32 " total=%" PRIu32 "\\n", t1 - t0, t2 - t1, t2 - t0);
        printf("RESULT %s N=%" PRIu32 " W=%" PRIu32 " erros=%" PRIu32 "\\n", errors ? "ERRO" : "OK", MATMUL_N, MATMUL_W, errors);

        if (MATMUL_DEBUG)
        {{
            printf("Matriz resultante:\\n");
            for (uint32_t i = 0; i < MATMUL_N; i++)
                for (uint32_t j = 0; j < MATMUL_N; j++) printf("%" PRId32 "%c", mat_c[i][j], j == MATMUL_N - 1 ? '\\n' : ' ');
        }}

        if (errors)
            st = MATMUL_ERR_RESULT;
    }} while (0);

    free(mat_c);
    return st;
}}
"""


def write_config_yaml(w):
    succ = "".join(f'      - "worker{i}"\n' for i in range(w))
    return f"ctg:\n  master:\n    successors:\n{succ}"


def main():
    ap = argparse.ArgumentParser(description="matmul_rows generator")
    ap.add_argument("--workers", type=int, required=True, help="número de workers (W)")
    ap.add_argument("--size", type=int, required=True, help="tamanho das matrizes (N)")
    ap.add_argument("--seed", type=int, default=1, help="semente das matrizes (padrão 1)")
    ap.add_argument("--debug", action="store_true", help="liga as mensagens DBG (atrapalha a medição)")
    ap.add_argument("--page-kb", type=int, default=64, help="page_size_data_KB do testcase (só para aviso)")
    args = ap.parse_args()
    n, w = args.size, args.workers

    if w < 1:
        sys.exit("ERRO: --workers deve ser >= 1")
    if n < 1:
        sys.exit("ERRO: --size deve ser >= 1")
    if n % w != 0:
        sys.exit(f"ERRO: N={n} não é divisível por W={w}")

    rng = random.Random(args.seed)
    a = [[rng.randint(0, VMAX) for _ in range(n)] for _ in range(n)]
    b = [[rng.randint(0, VMAX) for _ in range(n)] for _ in range(n)]
    c = golden(a, b, n)
    if max(max(r) for r in c) > 2**31 - 1:
        sys.exit("ERRO: C estoura int32")

    # remove arquivos gerados antes (inclusive os do gerador antigo)
    for f in [*APP_DIR.glob("worker*.c"), *(APP_DIR / x for x in
              ("master.c", "data.h", "params.h", "config.yaml", "matrix_mult.h"))]:
        f.unlink(missing_ok=True)

    (APP_DIR / "config.yaml").write_text(write_config_yaml(w))
    (APP_DIR / "data.h").write_text(write_data_h(n, w, args.seed, args.debug, a, b, c))
    (APP_DIR / "master.c").write_text(write_master(w))
    for i in range(w):
        (APP_DIR / f"worker{i}.c").write_text('#include "worker_impl.h"\n')

    # estimativa de dados por tarefa (bytes)
    master_b = 4 * n * n * 4               # A, B, C esperado, C recebido
    worker_b = (2 * (n // w) * n + n * n) * 4  # bloco de A, B, bloco de C
    page = args.page_kb * 1024
    print(f"N={n} W={w} seed={args.seed} debug={args.debug}: master ~{master_b} B, worker ~{worker_b} B (página {page} B)")
    for name, size in (("master", master_b), ("worker", worker_b)):
        if size > page:
            print(f"AVISO: {name} não cabe em page_size_data_KB={args.page_kb}")


if __name__ == "__main__":
    main()

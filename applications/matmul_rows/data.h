/**
 * @file data.h
 * @author Lucas Cunha
 * @author Guilherme Frick
 * @brief Parâmetros da configuração, matrizes A e B e o resultado esperado (golden).
 * @version 0.1
 * @date 2026-11-14
 *
 * @details Gerado por generator/generator.py --workers 3 --size 6 --seed 1
 */
#ifndef MATMUL_DATA_H
#define MATMUL_DATA_H

#include <stdint.h>

/** @brief Tamanho das matrizes (N x N). */
static constexpr uint32_t MATMUL_N = 6;

/** @brief Número de workers (W). */
static constexpr uint32_t MATMUL_W = 3;

/** @brief Linhas de C calculadas por worker (MATMUL_N / MATMUL_W). */
static constexpr uint32_t MATMUL_ROWS = 2;

/** @brief Liga as mensagens de matmul_dbg (--debug no gerador). */
static constexpr bool MATMUL_DEBUG = false;

/* Só o master usa as matrizes; nos workers o compilador (-Os) descarta as static const não usadas. */
/* clang-format off */
/** @brief Matriz A (entrada). */
static const int32_t mat_a[MATMUL_N][MATMUL_N] = {
    {17, 72, 97, 8, 32, 15},
    {63, 97, 57, 60, 83, 48},
    {26, 12, 62, 3, 49, 55},
    {77, 97, 98, 0, 89, 57},
    {34, 92, 29, 75, 13, 40},
    {3, 2, 3, 83, 69, 1}
};

/** @brief Matriz B (entrada). */
static const int32_t mat_b[MATMUL_N][MATMUL_N] = {
    {48, 87, 27, 54, 92, 3},
    {67, 28, 97, 56, 63, 70},
    {29, 44, 29, 86, 28, 97},
    {58, 37, 2, 53, 71, 82},
    {12, 23, 80, 92, 37, 15},
    {95, 42, 92, 91, 64, 54}
};

/** @brief Resultado esperado C = A x B, calculado pelo gerador (golden). */
static const int32_t mat_c_ref[MATMUL_N][MATMUL_N] = {
    {10726, 9425, 14212, 18025, 11528, 16446},
    {20212, 16850, 23939, 28920, 23906, 21265},
    {9837, 8874, 12650, 17080, 10430, 10883},
    {19520, 18168, 26694, 31393, 22880, 20940},
    {16943, 11564, 15553, 18293, 18102, 17860},
    {6102, 5149, 6140, 11370, 8996, 8335}
};
/* clang-format on */

#endif /* MATMUL_DATA_H */

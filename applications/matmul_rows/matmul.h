/**
 * @file matmul.h
 * @author Lucas Cunha
 * @author Guilherme Frick
 * @brief Comum ao master e aos workers: códigos de retorno, mensagens de erro e de debug.
 * @version 0.1
 * @date 2026-11-14
 */
#ifndef MATMUL_H
#define MATMUL_H

#include <inttypes.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>

#include "data.h"

/**
 * @brief Código de retorno das tarefas (valor devolvido pelo main).
 */
typedef enum
{
    MATMUL_OK = 0,    /**< Sucesso */
    MATMUL_ERR_ALLOC, /**< malloc devolveu NULL */
    MATMUL_ERR_SEND,  /**< memphis_send falhou */
    MATMUL_ERR_RECV,  /**< memphis_receive falhou ou veio com tamanho errado */
    MATMUL_ERR_RESULT /**< C diferente do golden */
} matmul_status_t;

/**
 * @brief Nome curto de um código de retorno.
 *
 * @param st Código de retorno.
 * @return Nome do código ("ok", "alloc", "send", "receive" ou "result").
 */
static inline const char *matmul_status_str(matmul_status_t st)
{
    switch (st)
    {
        case MATMUL_OK:
            return "ok";
        case MATMUL_ERR_ALLOC:
            return "alloc";
        case MATMUL_ERR_SEND:
            return "send";
        case MATMUL_ERR_RECV:
            return "receive";
        case MATMUL_ERR_RESULT:
            return "result";
    }
    return "desconhecido";
}

/**
 * @brief Imprime "ERRO <código> (<nome>): <onde>" e devolve o código.
 *
 * @param st Código do erro.
 * @param onde Descrição da operação que falhou.
 * @param peer Índice do worker envolvido; negativo omite o worker da mensagem.
 * @return O próprio st, para uso em "st = matmul_erro(...)".
 */
static inline matmul_status_t matmul_erro(matmul_status_t st, const char *onde, int32_t peer)
{
    if (peer >= 0)
        printf("ERRO %" PRId32 " (%s): %s worker%" PRId32 "\n", (int32_t)st, matmul_status_str(st), onde, peer);
    else
        printf("ERRO %" PRId32 " (%s): %s\n", (int32_t)st, matmul_status_str(st), onde);
    return st;
}

/**
 * @brief printf de depuração: só imprime com --debug no gerador (MATMUL_DEBUG em data.h).
 *
 * @param fmt Formato, como no printf.
 * @param ... Argumentos do formato.
 */
__attribute__((format(printf, 1, 2))) static inline void matmul_dbg(const char *fmt, ...)
{
    if (!MATMUL_DEBUG)
        return;

    va_list ap;
    va_start(ap, fmt);
    vprintf(fmt, ap);
    va_end(ap);
}

#endif /* MATMUL_H */

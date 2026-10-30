#ifndef __DEBUG_FUNCS_H__
#define __DEBUG_FUNCS_H__

#include <stdint.h>

typedef struct {
    unsigned to;
    unsigned tf;
    unsigned lapsed;
    unsigned mul;       // retired scalar mul/mulh/mulhu/mulhsu
    unsigned vmac;      // retired vmacc/vnmsac/vmadd/vnmsub
    unsigned bytes;     // bytes sent or received (SEND/RECEIVE slots)
} time;

// One entry per message, printed after the run by PRINT_MSGS. The ticks are global (every PE's
// RTC runs on the same clock and reset), so a send can be matched with its receive on another
// PE: the receive's wait for the producer is recv.to..max(recv.to, send.tf).
typedef struct {
    char     dir;       // 's' (sent) or 'r' (received)
    int      peer;      // the other task's id
    unsigned bytes;
    unsigned to;
    unsigned tf;
} msg_event;

#define MAX_MSGS    (32*NUM_INFERENCES)

__attribute__((unused)) static msg_event msg_log[MAX_MSGS];
__attribute__((unused)) static unsigned  n_msgs = 0;

// RS5's user-mode shadows of mhpmcounter22 (mul) and mhpmcounter27 (vmac), as read by
// RS5's alexnet-refactor. They count per core, so they include the other task on the PE
// and the kernel, if those run during the slot (needs HPMCOUNTEREnable in PhiversPE.sv).
static inline unsigned read_mul(void)
{
    unsigned v;
    __asm__ volatile("csrr %0, 0xC16" : "=r"(v));  // hpmcounter22
    return v;
}

static inline unsigned read_vmac(void)
{
    unsigned v;
    __asm__ volatile("csrr %0, 0xC1B" : "=r"(v));  // hpmcounter27
    return v;
}

// Runs CALL and adds the ticks, muls and vmacs it took to slot (a time entry, zero-initialized)
#define TIMED(slot, CALL)                                                   \
    do {                                                                    \
        unsigned _mul  = read_mul();                                        \
        unsigned _vmac = read_vmac();                                       \
        (slot).to = memphis_get_tick();                                     \
        CALL;                                                               \
        (slot).tf = memphis_get_tick();                                     \
        (slot).mul  += read_mul()  - _mul;                                  \
        (slot).vmac += read_vmac() - _vmac;                                 \
        (slot).lapsed += (slot).tf - (slot).to;                             \
    } while (0)

// Times a send/receive of size bytes into slot, adds size to slot.bytes and logs the message
#define MSG_TIMED(slot, DIR, peer, size, CALL)                              \
    do {                                                                    \
        TIMED(slot, CALL);                                                  \
        (slot).bytes += (size);                                             \
        if (n_msgs < MAX_MSGS)                                              \
            msg_log[n_msgs++] = (msg_event){                                \
                (DIR), (peer), (size), (slot).to, (slot).tf                 \
            };                                                              \
    } while (0)

#define SEND_N(slot, ptr, size, target)                                     \
    MSG_TIMED(slot, 's', (target), (size), memphis_send((ptr), (size), (target)))
#define RECEIVE_N(slot, ptr, size, source)                                  \
    MSG_TIMED(slot, 'r', (source), (size), memphis_receive((ptr), (size), (source)))

// buf must be an array: its sizeof is the message size
#define SEND(slot, buf, target)     SEND_N(slot, (buf), sizeof(buf), (target))
#define RECEIVE(slot, buf, source)  RECEIVE_N(slot, (buf), sizeof(buf), (source))

// arr must be time[NUM_INFERENCES][SLOTS]: one row of per-stage timing slots
// per inference, so throughput can be read off per image and in aggregate.
#define PRINT_STATS(arr)                                                    \
    do {                                                                    \
        printf("--- STATS ---\n");                                          \
        unsigned _n     = sizeof(arr) / sizeof((arr)[0]);                   \
        unsigned _slots = sizeof((arr)[0]) / sizeof((arr)[0][0]);           \
        unsigned _grand_tot = 0;                                            \
        for (unsigned _i = 0; _i < _n; ++_i) {                              \
            unsigned _tot = 0, _mul = 0, _vmac = 0, _bytes = 0;             \
            for (unsigned _j = 0; _j < _slots; ++_j) {                      \
                printf("%u\n", (arr)[_i][_j].lapsed);                       \
                _tot   += (arr)[_i][_j].lapsed;                             \
                _mul   += (arr)[_i][_j].mul;                                \
                _vmac  += (arr)[_i][_j].vmac;                               \
                _bytes += (arr)[_i][_j].bytes;                              \
            }                                                               \
            printf("INFERENCE %u TOTAL: %u\n", _i+1, _tot);                 \
            printf("INFERENCE %u MUL: %u VMAC: %u\n", _i+1, _mul, _vmac);   \
            printf("INFERENCE %u BYTES: %u\n", _i+1, _bytes);               \
            _grand_tot += _tot;                                             \
        }                                                                   \
        printf("GRAND TOTAL: %u\n", _grand_tot);                            \
        printf("AVG PER INFERENCE: %u\n", _grand_tot / (unsigned)_n);       \
    } while (0)

// send and recv must be time[NUM_INFERENCES][1]: prints their sum per inference
#define PRINT_COMM_SUM(send, recv)                                          \
    do {                                                                    \
        printf("--- STATS ---\n");                                          \
        for (unsigned _i = 0; _i < NUM_INFERENCES; ++_i) {                  \
            printf("INFERENCE %u TOTAL: %u\n", _i+1,                        \
                   (send)[_i][0].lapsed + (recv)[_i][0].lapsed);            \
            printf("INFERENCE %u BYTES: %u\n", _i+1,                        \
                   (send)[_i][0].bytes + (recv)[_i][0].bytes);              \
        }                                                                   \
    } while (0)

// one line per logged message: direction, peer task id, bytes, start and end tick
#define PRINT_MSGS()                                                        \
    do {                                                                    \
        for (unsigned _k = 0; _k < n_msgs; ++_k)                            \
            printf("msg %c peer %d bytes %u to %u tf %u\n",                 \
                   msg_log[_k].dir, msg_log[_k].peer, msg_log[_k].bytes,    \
                   msg_log[_k].to, msg_log[_k].tf);                         \
        if (n_msgs == MAX_MSGS)                                             \
            printf("msg log full: later messages were not logged\n");       \
    } while (0)

// wrapping sum of a layer's outputs, the same checksum RS5's alexnet-refactor prints
static inline uint32_t checksum (const int n, const int buf[])
{
    uint32_t sum = 0;
    for (int i = 0; i < n; i++)
        sum += (uint32_t)buf[i];
    return sum;
}

#endif

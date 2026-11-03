#ifndef __DEBUG_FUNCS_H__
#define __DEBUG_FUNCS_H__

#include <stdio.h>
#include <stdint.h>
#include <memphis.h>

// Every measurement a task makes is one row of a table: each TIMED call, each message sent or
// received and each checksum. The rows are buffered and printed after the run by PRINT_TABLE,
// so printing takes no cycles inside the measured intervals. One CSV line per row:
//
//     hdr,task,inf,kind,step,peer,bytes,to,tf,cycles,mul,vmac,value
//     row,<task>,<inf>,compute,<step>,,,<to>,<tf>,<cycles>,<mul>,<vmac>,
//     row,<task>,<inf>,send|recv,,<peer>,<bytes>,<to>,<tf>,<cycles>,<mul>,<vmac>,
//     row,<task>,<inf>,check,<step>,,,,,,,,<value>
//
// - inf:    the inference, 1..NUM_INFERENCES, set by INFERENCE(i) at the top of the loop
// - peer:   the other task's id (id_tasks.h); a task's own id is in MAestro's $$$_ line prefix
// - to, tf: global ticks (every PE's RTC runs on the same clock and reset), so a send can be
//           matched with its receive on another PE; cycles = tf - to
// - mul, vmac: retired scalar muls and vector muls/macs over the interval. They count per core,
//           so they include the other task on the PE and the kernel, if those run meanwhile
// - value:  checksums wrap as uint32_t and everything is printed with %u, so a signed value
//           (the classifier's score, step val) has to be converted back by the reader

typedef struct {
    const char *step;   // compute and check; NULL for send and recv
    unsigned    inf;
    char        kind;   // 'c' compute, 's' send, 'r' recv, 'k' check
    int         peer;
    unsigned    bytes;
    unsigned    to;
    unsigned    tf;
    unsigned    mul;
    unsigned    vmac;
    unsigned    value;
} trace_row;

#define MAX_ROWS    (64*NUM_INFERENCES)

__attribute__((unused)) static trace_row rows[MAX_ROWS];
__attribute__((unused)) static unsigned  n_rows  = 0;
__attribute__((unused)) static unsigned  dropped = 0;
__attribute__((unused)) static unsigned  cur_inf = 0;

// RS5's user-mode shadows of mhpmcounter21 (mul) and mhpmcounter26 (vector mul and mac:
// vmul*, vwmul*, vmacc, vnmsac, vmadd, vnmsub), CSRBank.sv
static inline unsigned read_mul(void)
{
    unsigned v;
    __asm__ volatile("csrr %0, 0xC15" : "=r"(v));  // hpmcounter21
    return v;
}

static inline unsigned read_vmac(void)
{
    unsigned v;
    __asm__ volatile("csrr %0, 0xC1A" : "=r"(v));  // hpmcounter26
    return v;
}

static inline void add_row(trace_row r)
{
    if (n_rows < MAX_ROWS) {
        r.inf = cur_inf;
        rows[n_rows++] = r;
    } else {
        dropped++;
    }
}

// The rows that follow belong to inference i (0-based loop index)
#define INFERENCE(i)    do { cur_inf = (i) + 1; } while (0)

// Runs CALL and adds a row with its ticks, muls and vmacs. Pass a multi-line CALL as a braced block.
#define MEASURE(KIND, STEP, PEER, BYTES, CALL)                              \
    do {                                                                    \
        unsigned _mul  = read_mul();                                        \
        unsigned _vmac = read_vmac();                                       \
        unsigned _to   = memphis_get_tick();                                \
        CALL;                                                               \
        unsigned _tf   = memphis_get_tick();                                \
        unsigned _dmul  = read_mul()  - _mul;                               \
        unsigned _dvmac = read_vmac() - _vmac;                              \
        add_row((trace_row){                                                \
            .step = (STEP), .kind = (KIND), .peer = (PEER),                 \
            .bytes = (BYTES), .to = _to, .tf = _tf,                         \
            .mul = _dmul, .vmac = _dvmac                                    \
        });                                                                 \
    } while (0)

#define TIMED(STEP, CALL)   MEASURE('c', (STEP), 0, 0, CALL)

#define SEND_N(ptr, size, target)                                           \
    MEASURE('s', NULL, (target), (size), memphis_send((ptr), (size), (target)))
#define RECEIVE_N(ptr, size, source)                                        \
    MEASURE('r', NULL, (source), (size), memphis_receive((ptr), (size), (source)))

// buf must be an array: its sizeof is the message size
#define SEND(buf, target)       SEND_N((buf), sizeof(buf), (target))
#define RECEIVE(buf, source)    RECEIVE_N((buf), sizeof(buf), (source))

// Adds a check row: a checksum, or a result such as the class
#define CHECK(STEP, V)                                                      \
    add_row((trace_row){ .step = (STEP), .kind = 'k', .value = (unsigned)(V) })

// Prints the table, task being the task's name
static inline void print_table(const char *task)
{
    puts("hdr,task,inf,kind,step,peer,bytes,to,tf,cycles,mul,vmac,value");

    for (unsigned k = 0; k < n_rows; k++) {
        const trace_row *r = &rows[k];
        switch (r->kind) {
            case 'c':
                printf("row,%s,%u,compute,%s,,,%u,%u,%u,%u,%u,\n", task, r->inf, r->step,
                       r->to, r->tf, r->tf - r->to, r->mul, r->vmac);
                break;
            case 's':
            case 'r':
                printf("row,%s,%u,%s,,%d,%u,%u,%u,%u,%u,%u,\n", task, r->inf,
                       r->kind == 's' ? "send" : "recv", r->peer, r->bytes,
                       r->to, r->tf, r->tf - r->to, r->mul, r->vmac);
                break;
            case 'k':
                printf("row,%s,%u,check,%s,,,,,,,,%u\n", task, r->inf, r->step, r->value);
                break;
        }
    }

    if (dropped)
        printf("row-overflow,%s,%u\n", task, dropped);
}

#define PRINT_TABLE(task)   print_table(task)

// wrapping sum of a layer's outputs, the same checksum RS5's alexnet-refactor prints
static inline uint32_t checksum (const int n, const int buf[])
{
    uint32_t sum = 0;
    for (int i = 0; i < n; i++)
        sum += (uint32_t)buf[i];
    return sum;
}

#endif

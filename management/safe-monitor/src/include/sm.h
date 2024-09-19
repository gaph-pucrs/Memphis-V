#pragma once

#include <mutils/lru.h>
#include <memphis/oda.h>

typedef struct _sm {
    oda_list_t deciders;
    lru_t hash_ids;
    int *model_ids;
} sm_t;

void sm_init(sm_t *sm);

int sm_get_models(sm_t *sm);

void sm_monitor(sm_t *sm, unsigned timestamp, unsigned size, unsigned hops, int prod, int cons, unsigned latency);

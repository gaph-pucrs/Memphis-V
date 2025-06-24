#pragma once

#include <mutils/lru.h>
#include <memphis/oda.h>
#include <memphis/messaging.h>

typedef struct _sm {
    lru_t hash_ids;
    int *model_ids;
} sm_t;

void sm_init(sm_t *sm);

int sm_get_models(sm_t *sm, oda_list_t *servers);

int sm_monitor(sm_t *sm, oda_list_t *servers, memphis_sec_monitor_t *message);

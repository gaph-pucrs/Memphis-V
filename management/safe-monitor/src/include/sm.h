#pragma once

#include <mutils/lru.h>
#include <mutils/list.h>
#include <memphis/oda.h>
#include <memphis/messaging.h>

typedef struct _sm {
    lru_t   hash_ids;
    int    *model_ids;
    int     monitored_cnt;
    list_t  queued;
} sm_t;

void sm_init(sm_t *sm);

int sm_get_models(sm_t *sm, oda_list_t *servers);

int sm_monitor(sm_t *sm, oda_list_t *servers, memphis_sec_monitor_t *message);

int sm_getmonitored(sm_t *sm);

int sm_replace(sm_t *sm, oda_list_t *servers, oda_provider_t *provider);

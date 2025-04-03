#include <sm.h>

#include <stdint.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

#include <memphis.h>
#include <memphis/services.h>

typedef struct _sm_hash {
	int      app_id;
	int      hash_id;
	unsigned release_time;
} sm_hash_t;

bool _sm_hash_find(void *data, void* cmpval)
{
	return ((sm_hash_t*)data)->app_id == *((int*)cmpval);
}

void sm_init(sm_t* sm)
{
	oda_list_init(&(sm->deciders));
	lru_init(&(sm->hash_ids), 8);
	sm->model_ids = NULL;
	oda_request_all_services(&(sm->deciders), ODA_DECIDE | D_SEC);
}

int sm_get_models(sm_t *sm)
{
	int *prov_msg = malloc(259*sizeof(int));
	if (prov_msg == NULL)
		return 0;

	while (true) {
		memphis_receive(prov_msg, 259*sizeof(int), 0);
		if (prov_msg[0] == ALL_SERVICE_PROVIDERS) {
            bool ret = oda_all_service_providers(&(sm->deciders), prov_msg[1], prov_msg[2], &prov_msg[3]);
            free(prov_msg);
            prov_msg = NULL;
            if (!ret)
                return 0;
            break;
        }
	}

	sm->model_ids = malloc(sm->deciders.cnt * sizeof(int));
	if (sm->model_ids == NULL)
		return 0;

	for (int i = 0; i < sm->deciders.cnt; i++) {
		int msg[] = {SEC_SAFE_REQ_APP, getpid()};
		memphis_send_any(msg, sizeof(msg), sm->deciders.ids[i]);
		while (true) {
			memphis_receive(msg, sizeof(msg), sm->deciders.ids[i]);
			if (msg[0] == SEC_SAFE_APP_RESP) {
				sm->model_ids[i] = msg[1];
				break;
			}
		}
	}

    return sm->deciders.cnt;
}

void sm_monitor(sm_t *sm, unsigned timestamp, unsigned size_hops, int edge, unsigned latency)
{
	int appid = edge >> 24;

	// Get model hash id and release time for app id
	sm_hash_t *hash = lru_use(&(sm->hash_ids), &appid, _sm_hash_find);
	if (hash == NULL) {
		// If not cached, ask mapper
		int msg[] = {SEC_SAFE_MAP_REQ, appid, getpid()};
		memphis_send_any(msg, sizeof(msg), 0);
		while (true) {
			uint32_t ans[4];
			memphis_receive(ans, sizeof(ans), 0);
			if (ans[0] == SEC_SAFE_MAP_RESP) {
				if (ans[1] == appid) {
					hash = malloc(sizeof(sm_hash_t));
					if (hash == NULL)
						break;
					hash->app_id  = appid;
					hash->hash_id = ans[2];
					/* @todo This can be overwritten due to LRU policy */
					hash->release_time = timestamp;
				}
				break;
			}
		}
		if (hash == NULL)
			return;
		lru_replace(&(sm->hash_ids), hash);
	}
	
	int decider_id = -1;
	for (int i = 0; i < sm->deciders.cnt; i++) {
		if (hash->hash_id == sm->model_ids[i]) {
			decider_id = sm->deciders.ids[i];
			break;
		}
	}

	if (decider_id == -1)
		return;

											/* rel_time */
	uint32_t msg[] = {SEC_INFER, timestamp, (timestamp - hash->release_time), size_hops, edge, latency};
	memphis_send_any(msg, sizeof(msg), decider_id);
}

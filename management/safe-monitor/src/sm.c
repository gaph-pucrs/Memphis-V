#include <sm.h>

#include <stdint.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>

#include <memphis.h>
#include <memphis/safe.h>
#include <memphis/services.h>
#include <memphis/messaging.h>

typedef struct _sm_hash {
	int      hash_id;
	unsigned release_time;
	uint8_t  app_id;
} sm_hash_t;

bool _sm_hash_find(void *data, void* cmpval)
{
	return ((sm_hash_t*)data)->app_id == *((uint8_t*)cmpval);
}

void sm_init(sm_t* sm)
{
	lru_init(&(sm->hash_ids), 8);
	sm->model_ids = NULL;
	sm->monitored_cnt = 0;
}

int sm_get_models(sm_t *sm, oda_list_t *servers)
{
	sm->model_ids = malloc(servers->cnt * sizeof(int32_t));
	if (sm->model_ids == NULL)
		return -ENOMEM;

	for (int i = 0; i < servers->cnt; i++) {
		memphis_info_t info;
		info.service = SEC_SAFE_REQ_APP;
		info.task    = getpid();
		memphis_send_any(&info, sizeof(memphis_info_t), servers->ids[i]);

		oda_provider_t provider;
		memphis_receive_any(&provider, sizeof(oda_provider_t));
		if (provider.service == TERMINATE_ODA)
			return 1;
		
		if (provider.service != SEC_SAFE_APP_RESP)
			return -EINVAL;

		sm->model_ids[i] = provider.tag;
	}

    return 0;
}

int sm_monitor(sm_t *sm, oda_list_t *servers, memphis_sec_monitor_t *message)
{
	sm->monitored_cnt++;
	// Get model hash id and release time for app id
	sm_hash_t *hash = lru_use(&(sm->hash_ids), &(message->app), _sm_hash_find);
	if (hash == NULL) {
		// If not cached, ask mapper
		memphis_info_t info;
		info.task    = getpid();
		info.service = SEC_SAFE_MAP_REQ;
		info.appid   = message->app;
		memphis_send_any(&info, sizeof(memphis_info_t), 0);

		oda_provider_t *provider = malloc(sizeof(safe_infer_t));
		while (true) {
			memphis_receive_any(provider, sizeof(safe_infer_t));
			if (provider->service == TERMINATE_ODA)
				return 1;

			if (provider->service == SEC_MONITOR) {
				sm_monitor(sm, servers, (memphis_sec_monitor_t*)provider);
				continue;
			}

			if (provider->service != SEC_SAFE_MAP_RESP)
				return -EINVAL;

			hash = malloc(sizeof(sm_hash_t));
			if (hash == NULL)
				return -ENOMEM;

			hash->app_id  = message->app;
			hash->hash_id = provider->tag;
			
			/**
			 * @todo 
			 * This can be overwritten due to LRU policy
			 */
			hash->release_time = message->timestamp;
			break;
		}
		free(provider);
		provider = NULL;

		lru_replace(&(sm->hash_ids), hash);
	}
	
	int decider_id = -1;
	for (int i = 0; i < servers->cnt; i++) {
		if (hash->hash_id == sm->model_ids[i]) {
			decider_id = servers->ids[i];
			break;
		}
	}

	if (decider_id == -1)
		return -ENODATA;

	safe_infer_t infer;
	infer.prod      = message->prod;
	infer.cons	  	= message->cons;
	infer.service   = SEC_INFER;
	infer.app       = message->app;
	infer.hops      = message->hops;
	infer.timestamp = message->timestamp;
	infer.rel_time  = (message->timestamp - hash->release_time)/100;
	infer.size      = message->size;
	infer.latency   = message->latency;
	memphis_send_any(&infer, sizeof(safe_infer_t), decider_id);
	return 0;
}

int sm_getmonitored(sm_t *sm)
{
	return sm->monitored_cnt;
}

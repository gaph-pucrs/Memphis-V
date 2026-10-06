/**
 * MA-Memphis
 * @file main.c
 *
 * @author Angelo Elias Dal Zotto (angelo.dalzotto@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 * 
 * @date March 2021
 * 
 * @brief Main file of the MA-Memphis mapper
 */

#include <stdio.h>

#include <memphis.h>
#include <memphis/services.h>
#include <memphis/messaging.h>

#include "mapper.h"

#define MSG_FLITS 128

int main()
{
	static const size_t MSG_BYTES = MSG_FLITS << 2;
	printf("Mapper task started at time %u\n", memphis_get_tick());

	static map_t mapper;
	map_init(&mapper);

	while (true) {
		static int32_t message[MSG_FLITS];
		memphis_receive_any(message, MSG_BYTES);
		uint8_t service = (message[0] >> 16) & 0xFF;
		switch (service) {
			case NEW_APP:
				memphis_new_app_t *new_app = (memphis_new_app_t*)message;
				int32_t *descriptor = (((void*)new_app) + sizeof(memphis_new_app_t));
				int32_t *communication = &descriptor[new_app->task_cnt * MAP_DESCR_ENTRY_LEN];
				map_new_app(
					&mapper, 
					new_app, 
					descriptor,
					communication
				);
				break;
			case TASK_ALLOCATED:
				map_task_allocated(&mapper, (memphis_info_t*)message);
				break;
			case TASK_TERMINATED:
				map_task_terminated(&mapper, (memphis_info_t*)message);
				break;
			case TASK_ABORTED:
				map_task_aborted(&mapper, (memphis_info_t*)message);
				break;
			case TASK_MIGRATION_MAP:
				map_migration_map(&mapper, (memphis_info_t*)message);
				break;
			case TASK_MIGRATED:
				map_task_migrated(&mapper, (memphis_info_t*)message);
				break;
			case REQUEST_FINISH:
				map_request_finish(&mapper);
				break;
			case PE_HALTED:
				map_pe_halted(&mapper, (memphis_info_t*)message);
				break;
			case REQUEST_NEAREST_SERVICE:
				map_request_nearest_service(&mapper, (oda_provider_t*)message);
				break;
			case REQUEST_ALL_SERVICES:
				map_request_all_services(&mapper, (oda_provider_t*)message);
				break;
			case SEC_SAFE_MAP_REQ:
				map_app_info(&mapper, (memphis_info_t*)message);
				break;
			default:
				printf("Invalid service %lx\n", message[0]);
				break;
		}
	}

	return 0;
}

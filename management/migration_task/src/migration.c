/**
 * MA-Memphis
 * @file migration.c
 *
 * @author Angelo Elias Dalzotto (angelo.dalzotto@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 * 
 * @date March 2021
 * 
 * @brief Migration decider functions
 */

#include "migration.h"

#include <stdio.h>
#include <stdlib.h>

#include <memphis.h>
#include <memphis/messaging.h>
#include <memphis/services.h>

typedef struct _mt {
	int id;
	int missed_cnt;
} mt_t;

bool _mt_cmp_fnc(void *data, void *cmpval)
{
	mt_t *task = (mt_t*)data;
	uint16_t id = *((uint16_t*)cmpval);

	return (task->id == id);
}

void mt_check_rt(lru_t *tasks, oda_t *actuator, qos_analyze_t *message)
{
	mt_t *task = lru_use(tasks, &(message->id), _mt_cmp_fnc);

	if (task == NULL) {
		task = malloc(sizeof(mt_t));
		task->id = message->id;
		task->missed_cnt = 0;
		mt_t *old_task = lru_replace(tasks, task);
		free(old_task);
	}

	task->missed_cnt++;
	
	if (task->missed_cnt >= 3) {
		task->missed_cnt = 0;

		memphis_info_t info;
		info.service = TASK_MIGRATION_MAP;
		info.task    = message->id;
		printf("Requesting migration for task %d\n", message->id);

		memphis_send_any(&info, sizeof(memphis_info_t), oda_get_id(actuator));
	}
}

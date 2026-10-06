/**
 * MA-Memphis
 * @file rt.c
 *
 * @author Angelo Elias Dalzotto (angelo.dalzotto@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 * 
 * @date March 2021
 * 
 * @brief Real-time observer functions
 */

#include "rt.h"

#include <stdio.h>

#include <memphis.h>
#include <memphis/services.h>

void rt_check(oda_t *decider, memphis_qos_monitor_t *message)
{
	int32_t rt_diff = message->slack_time - message->remaining_exec_time;
	if (rt_diff < 0) {
		printf("Deadline violation detected in task %d\n", message->task);

		qos_analyze_t msg;
		msg.id 		= message->task;
		msg.service = QOS_ANALYZE;
		msg.rt_diff = rt_diff;
		memphis_send_any(&msg, sizeof(qos_analyze_t), oda_get_id(decider));
	}
}

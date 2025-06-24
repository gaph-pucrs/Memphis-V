/**
 * MA-Memphis
 * @file main.c
 *
 * @author Angelo Elias Dalzotto (angelo.dalzotto@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 * 
 * @date March 2021
 * 
 * @brief Main real-time observer file
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include <memphis.h>
#include <memphis/messaging.h>
#include <memphis/monitor.h>
#include <memphis/services.h>

#include <rt.h>

int main()
{
	printf("Real-time monitor started at %d\n", memphis_get_tick());

	static oda_t decider;
	oda_init(&decider);
	int ret = oda_request_nearest_service(&decider, ODA_DECIDE | D_QOS);
	if (ret != 0)
		return ret;

	printf("Received service provider %d\n", decider.id);

	mon_announce(MON_QOS);

	while (true) {
		static memphis_qos_monitor_t message;
		memphis_receive_any(&message, sizeof(memphis_qos_monitor_t));
		switch (message.service) {
			case QOS_MONITOR:
				rt_check(&decider, &message);
				break;
			case TERMINATE_ODA:
				return 0;
			default:
				break;
		}
	}

	return 0;
}

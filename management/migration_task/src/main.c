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
 * @brief Main migration decider file
 */

#include <stdio.h>
#include <stdlib.h>

#include <memphis.h>
#include <memphis/services.h>

#include <migration.h>

#define MSG_LEN 3

int main()
{
	printf("Migration started at %d\n", memphis_get_tick());

	static oda_t actuator;
	oda_init(&actuator);
	int ret = oda_request_nearest_service(&actuator, ODA_ACT | A_MIGRATION);
	if (ret != 0)
		return ret;

	printf("Received service provider %d\n", actuator.id);

	size_t pe_cnt = memphis_get_nprocs(NULL, NULL);
	lru_t tasks;
	lru_init(&tasks, pe_cnt);

	while (true) {
		static qos_analyze_t message;
		memphis_receive_any(&message, sizeof(qos_analyze_t));
		switch (message.service) {
			case QOS_ANALYZE:
				mt_check_rt(&tasks, &actuator, &message);
				break;
			case TERMINATE_ODA:
				return 0;
			default:
				break;
		}
	}

	return 0;
}

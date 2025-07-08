/**
 * Memphis-V
 * @file main.c
 *
 * @author Angelo Elias Dal Zotto (angelo.dalzotto@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 * 
 * @date September 2024
 * 
 * @brief SAFE (Security Anomaly Forecasting Engine)
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#include <memphis.h>
#include <memphis/monitor.h>
#include <memphis/services.h>
#include <memphis/safe.h>
#include <memphis/messaging.h>
#include <memphis/oda.h>

#include <sm.h>

int main()
{
	printf("SAFE monitor started at %d\n", memphis_get_tick());

	static oda_list_t deciders;
	oda_list_init(&deciders);
	int ret = oda_request_all_services(&deciders, ODA_DECIDE | D_SEC);
	if (ret != 0)
		return ret;

	printf("Received %d model decider(s)\n", deciders.cnt);

	static sm_t sm;
	sm_init(&sm);
	ret = sm_get_models(&sm, &deciders);
	if (ret != 0)
		return ret;

	ret = memphis_mkfifo(sizeof(memphis_sec_monitor_t) - sizeof(uint32_t), 8);
	printf("Mkfifo returned %d\n", ret);

    mon_announce(MON_SEC);

	while(true){
		static memphis_sec_monitor_t message;
        memphis_receive_any(&message, sizeof(memphis_sec_monitor_t));
		switch (message.service) {
			case SEC_MONITOR:
				if (sm_monitor(&sm, &deciders, &message) > 0)
					return 0;
				break;
			case TERMINATE_ODA:
				return 0;
			default:
				break;
		}
	}

	return 0;
}

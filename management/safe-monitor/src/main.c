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
#include <memphis/oda.h>

#include <sm.h>

int main()
{
	static sm_t sm;
	printf("SAFE monitor started at %d\n", memphis_get_tick());

	sm_init(&sm);
	int cnt = sm_get_models(&sm);
	if (cnt == 0) {
		printf("FATAL: Could not fetch deciders. Not enough memory?");
		exit(1);
	}
	printf("Received %d model deciders\n", cnt);

    mon_announce(MON_SEC);

	while(true){
		static uint32_t msg[6];
        memphis_receive_any(msg, sizeof(msg));
		switch (msg[0]) {
			case MONITOR:
				sm_monitor(&sm, msg[1], msg[2], msg[3], msg[4] >> 16, msg[4] & 0xFFFF, msg[5]);
				break;
			default:
				break;
		}
	}

	return 0;
}

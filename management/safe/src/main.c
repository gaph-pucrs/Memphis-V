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

#include <memphis.h>
#include <memphis/monitor.h>
#include <memphis/services.h>

int main()
{
	printf("SAFE monitor started at %d\n", memphis_get_tick());

    mon_announce(MON_SEC);

	while(true){
		static uint32_t msg[6];
        memphis_receive_any(msg, sizeof(msg));
		if (msg[0] == MONITOR) {
			printf(
				"%lu,%lu,%lu,%x,%x,%lu\n", 
				msg[1], 
				msg[2],
				msg[3],
				(unsigned)(msg[4] >> 16),
				(unsigned)(msg[4] & 0xFFFF),
				msg[5]
			);
		}
	}

	return 0;
}

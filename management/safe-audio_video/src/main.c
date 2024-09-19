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
 * @brief SAFE (Security Anomaly Forecasting Engine) -- audio_video model
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

#include <memphis.h>
#include <memphis/monitor.h>
#include <memphis/services.h>
#include <memphis/oda.h>

#include "model.h"

int main()
{
	printf("SAFE audio_video model started at %d\n", memphis_get_tick());

	while (true) {
		static uint32_t msg[7];
		memphis_receive_any(msg, sizeof(msg));
		switch (msg[0]) {
			case SEC_SAFE_REQ_APP:
				uint32_t ans[] = {SEC_SAFE_APP_RESP, SAFE_HASH_audio_video};
				memphis_send_any(ans, sizeof(ans), msg[1]);
				break;
			case SEC_INFER:
				bool prod_0 = false;
				bool prod_1 = false;
				bool prod_2 = false;
				bool prod_3 = false;
				bool prod_4 = false;
				bool prod_6 = false;
				bool cons_0 = false;
				bool cons_1 = false;
				bool cons_2 = false;
				bool cons_3 = false;
				bool cons_4 = false;
				bool cons_5 = false;
				switch (msg[4]) {
					case 0:
						prod_0 = true;
						break;
					case 1:
						prod_1 = true;
						break;
					case 2:
						prod_2 = true;
						break;
					case 3:
						prod_3 = true;
						break;
					case 4:
						prod_4 = true;
						break;
					case 6:
						prod_6 = true;
						break;
					default:
						break;
				}
				switch (msg[5]) {
					case 0:
						cons_0 = true;
						break;
					case 1:
						cons_1 = true;
						break;
					case 2:
						cons_2 = true;
						break;
					case 3:
						cons_3 = true;
						break;
					case 4:
						cons_4 = true;
						break;
					case 5:
						cons_5 = true;
						break;
					default:
						break;
				}
				float pred_latency = score(
					msg[1] / 100.0, 
					msg[3], 
					msg[2], 
					prod_0, 
					prod_1, 
					prod_2, 
					prod_3, 
					prod_4, 
					prod_6, 
					cons_0, 
					cons_1, 
					cons_2, 
					cons_3, 
					cons_4, 
					cons_5
				);
				float real_latency = msg[6] / 100.0;
				bool anom = fabs(pred_latency - real_latency) / real_latency > 1.05;
				printf("Anomaly = %d\n", anom);
				break;
			default:
				break;
		}
	}

	return 0;
}

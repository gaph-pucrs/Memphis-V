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

int model(int rel_timestamp, int hops, int size, bool prod_0, bool prod_1, bool prod_2, bool prod_3, bool prod_4, bool prod_6, bool cons_0, bool cons_1, bool cons_2, bool cons_3, bool cons_4, bool cons_5);

int main()
{
	// printf("SAFE audio_video model started at %d\n", memphis_get_tick());

	unsigned num_inf = 0;
	unsigned time = 0;
	while (true) {
		static uint32_t msg[8];
		memphis_receive_any(msg, sizeof(msg));
		switch (msg[0]) {
			case SEC_SAFE_REQ_APP:
				uint32_t ans[] = {SEC_SAFE_APP_RESP, SAFE_HASH_audio_video};
				memphis_send(ans, sizeof(ans), msg[1]);
				break;
			case SEC_INFER:
				bool prod[7] = {};
				bool cons[7] = {};
				prod[msg[4]] = true;
				cons[msg[5]] = true;
				unsigned then = memphis_get_tick();
				unsigned pred_latency = model(
					msg[1], 
					msg[3], 
					msg[2], 
					prod[0], 
					prod[1], 
					prod[2], 
					prod[3], 
					prod[4], 
					prod[6], 
					cons[0], 
					cons[1], 
					cons[2], 
					cons[3], 
					cons[4], 
					cons[5]
				);
				int diff = (int)(msg[6] - pred_latency)*1000 / (int)pred_latency;
				bool anom = diff > 200;
				unsigned now = memphis_get_tick();
				time += (now-then);
				// printf("Inference in %u us\n", (now - then)/100);
				// printf("Instance %u,%lu,%lu,%d,%d,%u,%u\n", msg[1], msg[3], msg[2], (int)msg[4], (int)msg[5], msg[6], pred_latency);
				// printf("Diff %.2f%%\n", diff);
				if (anom) {
					printf(
						"AD\t%d\t%lu\t%d\t%d\t%lu\n", 
						num_inf, 
						msg[1], 
						(int)msg[4], 
						(int)msg[5],
						now - (msg[7] - (msg[6]>>1))
					);
				}
				num_inf++;
				break;
			case TERMINATE_ODA:
				printf("IT\t%d\t%u\n", num_inf, time/num_inf);
				return 0;
			default:
				break;
		}
	}

	return 0;
}

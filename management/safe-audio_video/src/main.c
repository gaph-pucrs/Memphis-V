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

	unsigned num_inf = 0;
	unsigned time = 0;
	while (true) {
		static uint32_t msg[7];
		memphis_receive_any(msg, sizeof(msg));
		switch (msg[0]) {
			case SEC_SAFE_REQ_APP:
				uint32_t ans[] = {SEC_SAFE_APP_RESP, SAFE_HASH_audio_video};
				memphis_send(ans, sizeof(ans), msg[1]);
				break;
			case SEC_INFER:
				num_inf++;
				bool prod[6] = {};
				bool cons[6] = {};
				prod[msg[4]] = true;
				cons[msg[5]] = true;
				unsigned then = memphis_get_tick();
				float timestamp = msg[1] / 100000.0;
				float real_latency = msg[6] / 100.0;
				float pred_latency = score(
					timestamp, 
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
				float diff = fabs(real_latency - pred_latency) / pred_latency;
				bool anom = diff > 0.05;
				unsigned now = memphis_get_tick();
				time += (now-then);
				// printf("Inference in %u us\n", (now - then)/100);
				// printf("Instance %f,%lu,%lu,%d,%d,%f,%f\n", timestamp, msg[3], msg[2], (int)msg[4], (int)msg[5], real_latency, pred_latency);
				// printf("Diff %.2f%%\n", diff);
				if (anom) {
					printf(
						"Anomaly @%lu %d->%d\n", 
						msg[1], 
						(int)msg[4], 
						(int)msg[5]
					);
				}
				break;
			case TERMINATE_ODA:
				printf("Exiting after %d inferences that took ~%u ticks\n", num_inf, time/num_inf);
				return 0;
			default:
				break;
		}
	}

	return 0;
}

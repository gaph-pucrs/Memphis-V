/**
 * Memphis-V
 * @file main.c
 *
 * @author Angelo Elias Dal Zotto (angelo.dalzotto@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 * 
 * @date October 2024
 * 
 * @brief SAFE (Security Anomaly Forecasting Engine)
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
#include <memphis/safe.h>

#include "model.h"

#define THRESHOLD 0.05
#define DIFF_MULT 1000
#define THRE_MULT (int)(THRESHOLD*DIFF_MULT)

int main()
{
	// printf("SAFE mpeg model started at %d\n", memphis_get_tick());

	while (true) {
		static uint32_t msg[6];
		memphis_receive_any(msg, sizeof(msg));
		switch (msg[0]) {
			case SEC_SAFE_REQ_APP:
				uint32_t ans[] = {SEC_SAFE_APP_RESP, SAFE_HASH_mpeg};
				memphis_send(ans, sizeof(ans), msg[1]);
				break;
			case SEC_INFER:
				unsigned snd_time = msg[1];
				// 2 - rel_time
				// 3 - size hops
				// 4 - edge
				// 5 - latency
				unsigned then = memphis_get_tick();
				unsigned pred_latency = model(
					msg[2], 
					msg[3] & 0xFFFF, 
					msg[3] >> 16,
					msg[4] >> 16,
					msg[4] & 0xFFFF
				);
				int diff = (int)(msg[5] - pred_latency)*DIFF_MULT / (int)pred_latency;
				bool mal_pred = diff > THRE_MULT;
				unsigned now = memphis_get_tick();
				if (mal_pred)
					safe_log(snd_time, now, msg[4], (now - then), pred_latency);
				break;
			case TERMINATE_ODA:
				return 0;
			default:
				break;
		}
	}

	return 0;
}

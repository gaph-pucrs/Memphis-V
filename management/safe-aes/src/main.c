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

int main()
{
	// printf("SAFE aes model started at %d\n", memphis_get_tick());

	safe_t aes;
	safe_init(&aes, SAFE_HASH_aes, model, 40);

		while (true) {
		static safe_infer_t message;
		memphis_receive_any(&message, sizeof(safe_infer_t));
		switch (message.service) {
			case SEC_SAFE_REQ_APP:
				safe_app_response(&aes, (memphis_info_t*)&message);
				break;
			case SEC_INFER:
				safe_infer(&aes, &message);
				break;
			case TERMINATE_ODA:
				return 0;
			default:
				break;
		}
	}

	return 0;
}

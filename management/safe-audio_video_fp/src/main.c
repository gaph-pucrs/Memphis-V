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
#include <memphis/safe_fp.h>

#include "model.h"

int main()
{
	// printf("SAFE audio_video model started at %d\n", memphis_get_tick());

	safe_fp_t audio_video;
	safe_fp_init(&audio_video, SAFE_HASH_audio_video, model, 0.061);

	while (true) {
		static safe_infer_t message;
		memphis_receive_any(&message, sizeof(safe_infer_t));
		switch (message.service) {
			case SEC_SAFE_REQ_APP:
				safe_fp_app_response(&audio_video, (memphis_info_t*)&message);
				break;
			case SEC_INFER:
				safe_fp_infer(&audio_video, &message);
				break;
			case TERMINATE_ODA:
				return 0;
			default:
				break;
		}
	}

	return 0;
}

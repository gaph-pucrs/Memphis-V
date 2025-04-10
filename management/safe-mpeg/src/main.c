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
	 // printf("SAFE mpeg model started at %d\n", memphis_get_tick());
 
	 safe_t mpeg;
	 safe_init(&mpeg, SAFE_HASH_mpeg, model, 0.057);
 
	 while (true) {
		 static uint32_t msg[6];
		 memphis_receive_any(msg, sizeof(msg));
		 switch (msg[0]) {
			 case SEC_SAFE_REQ_APP:
				 safe_app_response(&mpeg, msg[1]);
				 break;
			 case SEC_INFER:
				 safe_infer(&mpeg, msg[1], msg[2], msg[3], msg[4], msg[5]);
				 break;
			 case TERMINATE_ODA:
				 return 0;
			 default:
				 break;
		 }
	 }
 
	 return 0;
 }
 
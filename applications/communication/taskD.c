#include <memphis.h>
#include <stdlib.h>
#include <stdio.h>
#include "syn_std.h"

#define MSG_LENGTH 128

int msg[MSG_LENGTH];

int main()
{
	printf("Synthetic task D started at %u\n", memphis_get_tick());
	
	for(int i = 0; i < SYNTHETIC_ITERATIONS; i++){
		memphis_receive(msg, sizeof(msg), taskB);
		memphis_receive(msg, sizeof(msg), taskC);
	}

    printf("Synthetic task D finished at %u\n", memphis_get_tick());
	return 0;
}

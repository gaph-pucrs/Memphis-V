#include <stddef.h>

#include "task.h"

task_t *task_get_free(task_t *tasks)
{
	for(int i = 0; i < PKG_MAX_LOCAL_TASKS*PKG_N_PE; i++)
		if(tasks[i].id == -1)
			return &tasks[i];

	return NULL;
}

void task_init(task_t *tasks)
{
	for(int i = 0; i < PKG_MAX_LOCAL_TASKS*PKG_N_PE; i++){
		tasks[i].id = -1;
		for(int j = 0; j < PKG_MAX_TASKS_APP; j++)
			tasks[i].consumers[j] = NULL;
	}
}

/**
 * MA-Memphis
 * @file application.c
 *
 * @author Angelo Elias Dal Zotto (angelo.dalzotto@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 * 
 * @date March 2021
 * 
 * @brief Application structures for the mapper
 */

#include "application.h"

#include <stdlib.h>

#include <memphis.h>
#include <memphis/services.h>

#include "mapper.h"

task_t *app_init(app_t *app, int id, int hash, int injector, size_t task_cnt, int *descriptor, int *communication)
{
	app->id = id;
	app->hash = hash;
	app->injector = injector;
	app->task_cnt = task_cnt;
	app->allocated_cnt = 0;
	app->release_time = -1;
	app->failed_cnt = 0;
	app->has_static = false;
	app->score = 0;

	app->tasks = malloc(task_cnt * sizeof(task_t));

	if(app->tasks == NULL)
		return NULL;

	for(int i = 0; i < task_cnt; i++){		
		int tag = descriptor[i * MAP_DESCR_ENTRY_LEN + 1];
		task_init(&(app->tasks[i]), id, i, tag);
	}

	int comm_idx = 0;
	for(int i = 0; i < task_cnt; i++){
		int encoded_succ;
		do {
			encoded_succ = communication[comm_idx++];
			int succ_id = abs(encoded_succ) - 1;

			if(succ_id >= 0){
				int res = task_comm_push_back(&(app->tasks[i]), &(app->tasks[succ_id]));
				
				if(res != 0){
					free(app->tasks);
					return NULL;
				}
			}
			
		} while(encoded_succ > 0);
	}

	return app->tasks;
}

void app_set_failed(app_t *app, unsigned failed_cnt)
{
	app->failed_cnt = failed_cnt;
}

void app_set_has_static(app_t *app, bool has_static)
{
	app->has_static = has_static;
}

bool app_has_static(app_t *app)
{
	return app->has_static;
}

task_t *app_get_tasks(app_t *app, size_t *task_cnt)
{
	*task_cnt = app->task_cnt;
	return app->tasks;
}

list_t *app_get_order(app_t *app)
{
	list_t *order = malloc(sizeof(list_t));	
	
	if(order == NULL)
		return NULL;

	list_init(order);

	/* Make an initial tasks list */
	for(int i = 0; i < app->task_cnt; i++){
		task_t *task = &(app->tasks[i]);
		list_t *preds = task_get_preds(task);
		if(list_empty(preds)){
			list_entry_t *entry = list_push_back(order, task);
			if(entry == NULL){
				/**
				 * @todo
				 * Clear remaining entries
				 */
				return NULL;
			}
		}
	}

	if (list_get_size(order) == app->task_cnt)
		return order;

	/* Cyclic dependencies*/
	int unordered_idx = 0;
	if (list_get_size(order) == 0) {
		/* Start with task 0 as initial */
		list_entry_t *pushed = list_push_back(order, &(app->tasks[unordered_idx++]));
		if(pushed == NULL){
			/**
			 * @todo
			 * Clear remaining entries
			 */
			return NULL;
		}
	}

	/* Start ordering by successors of initials */
	list_entry_t *order_entry = list_front(order);

	while (true) {
		/* Continue by ordering by successors of tasks already ordered */
		while (order_entry != NULL) {
			task_t *task = list_get_data(order_entry);
			list_t *succs = task_get_succs(task);
			list_entry_t *succ_entry = list_front(succs);
			while (succ_entry != NULL) {
				task_t *succ_task = list_get_data(succ_entry);
				if(list_find(order, succ_task, NULL) == NULL){
					list_entry_t *pushed = list_push_back(order, succ_task);
					if(pushed == NULL){
						/**
						 * @todo
						 * Clear remaining entries
						 */
						return NULL;
					}
				}
				succ_entry = list_next(succ_entry);
			}
			order_entry = list_next(order_entry);
		}

		/* Check if all tasks are ordered */
		if (list_get_size(order) == app->task_cnt)
			break;

		/* Solve one or more cyclic dependencies */
		while (unordered_idx < app->task_cnt) {
			task_t *task = &(app->tasks[unordered_idx++]);
			if(list_find(order, task, NULL) != NULL)
				continue;

			order_entry = list_push_back(order, task);
			if(order_entry == NULL){
				/**
				 * @todo
				 * Clear remaining entries
				 */
				return NULL;
			}
			break;
		}
	}

	return order;
}

void app_set_score(app_t *app, unsigned score)
{
	app->score = score;
}

unsigned app_allocated(app_t *app)
{
	app->allocated_cnt++;
	return app->allocated_cnt;
}

void app_mapping_complete(app_t *app)
{
	app->release_time = memphis_get_tick();
	int out_msg = APP_MAPPING_COMPLETE;
	memphis_send_any(&out_msg, sizeof(out_msg), app->injector);

	if(app->id == 0)
		memphis_br_send_all(0, RELEASE_PERIPHERAL);
}

int app_get_injector(app_t *app)
{
	return app->injector;
}

bool app_find_fnc(void *data, void *cmpval)
{
	app_t *app = (app_t*)data;
	int appid = *((int*)cmpval);

	return (app->id == appid);
}

size_t app_add_allocated(app_t *app)
{
	app->allocated_cnt++;
	return app->allocated_cnt;
}

size_t app_rem_allocated(app_t *app)
{
	app->allocated_cnt--;
	return app->allocated_cnt;
}

void app_destroy(app_t *app)
{
	free(app->tasks);
}

unsigned app_get_failed(app_t *app)
{
	return app->failed_cnt;
}

void app_rem_failed(app_t *app)
{
	app->failed_cnt--;
}

int app_get_id(app_t *app)
{
	return app->id;
}

task_t *app_get_task(app_t *app, int taskid)
{
	if(taskid >= app->task_cnt)
		return NULL;

	return &(app->tasks[taskid]);
}

void app_terminated(app_t *app)
{
	memphis_br_send_all(app->id, APP_TERMINATED);
}

int app_get_hash(app_t *app)
{
	return app->hash;
}

unsigned app_get_release_time(app_t *app)
{
	return app->release_time;
}

bool app_has_oda_running(app_t *app, unsigned tag)
{
	for(int i = 0; i < app->task_cnt; i++){
		task_t *task = &(app->tasks[i]);
		if((task_get_tag(task) & tag) == 0 || !task_is_allocated(task))
			continue;

		return true;
	}

	return false;
}

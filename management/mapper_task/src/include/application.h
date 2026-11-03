/**
 * MA-Memphis
 * @file application.h
 *
 * @author Angelo Elias Dal Zotto (angelo.dalzotto@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 * 
 * @date March 2021
 * 
 * @brief Application structures for the mapper
 */

#pragma once

#include <stdint.h>

#include "task.h"

typedef struct _app {
	int id;
	int hash;
	int injector;
	size_t task_cnt;
	size_t allocated_cnt;

	unsigned release_time;
	unsigned failed_cnt;
	
	task_t *tasks;

	unsigned score;
	bool has_static;
	bool secure;	/* Per-instance flag from the injector (NEW_APP pad16) */
	int row_lo;		/* First OSZ region row claimed (secure apps) */
	int row_cnt;	/* Number of OSZ region rows claimed, 0 when none */

	/* OSZ zone clear: one OSZ_ZONE_CLEARED expected from each PE of the rows */
	bool *cleared;	/* Per zone PE, NULL when no clear is in progress */
	unsigned clear_expected;
	unsigned clear_cnt;
} app_t;

task_t *app_init(app_t *app, int id, int hash, int injector, size_t task_cnt, bool secure, int *descriptor, int *communication);

void app_set_failed(app_t *app, unsigned failed_cnt);

void app_set_has_static(app_t *app, bool has_static);

bool app_has_static(app_t *app);

task_t *app_get_tasks(app_t *app, size_t *task_cnt);

list_t *app_get_order(app_t *app);

void app_set_score(app_t *app, unsigned score);

unsigned app_allocated(app_t *app);

void app_mapping_complete(app_t *app, uint32_t release_time);

int app_get_injector(app_t *app);

bool app_find_fnc(void *data, void *cmpval);

size_t app_add_allocated(app_t *app);

size_t app_rem_allocated(app_t *app);

void app_destroy(app_t *app);

unsigned app_get_failed(app_t *app);

void app_rem_failed(app_t *app);

int app_get_id(app_t *app);

task_t *app_get_task(app_t *app, int taskid);

void app_terminated(app_t *app);

int app_get_hash(app_t *app);

bool app_is_secure(app_t *app);

void app_set_rows(app_t *app, int row_lo, int row_cnt);

/**
 * @brief Gets the OSZ region rows claimed by the app
 *
 * @param row_lo Variable to store the first row
 *
 * @return Number of rows claimed, 0 when none
 */
int app_get_rows(app_t *app, int *row_lo);

/**
 * @brief Starts waiting for the zone clear replies
 *
 * @param expected Number of zone PEs that must reply
 *
 * @return false if out of memory
 */
bool app_start_clear(app_t *app, unsigned expected);

bool app_is_clearing(app_t *app);

/**
 * @brief Records a zone PE's reply
 *
 * @param idx Index of the PE inside the zone
 *
 * @return Replies so far, or -1 for an index already counted or out of range
 */
int app_add_cleared(app_t *app, unsigned idx);

unsigned app_get_clear_expected(app_t *app);

void app_end_clear(app_t *app);

unsigned app_get_release_time(app_t *app);

bool app_has_oda_running(app_t *app, unsigned tag);

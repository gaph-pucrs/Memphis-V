/**
 * MA-Memphis
 * @file mapper.h
 *
 * @author Angelo Elias Dal Zotto (angelo.dalzotto@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 * 
 * @date March 2021
 * 
 * @brief Main mapper functions
 */

#pragma once

#include <application.h>
#include <processing_element.h>

#include <memphis/oda.h>
#include <memphis/messaging.h>

#define MAP_DESCR_ENTRY_LEN 2
#define MAP_STRIDE 2
#define MAP_MIN_WX 3
#define MAP_MIN_WY 3

typedef struct _map {
	unsigned appid_cnt;
	size_t slots;
	app_t *pending;
	pe_t *pes;
	
	list_t apps;
	bool finished;
	unsigned finished_cnt;
} map_t;

void map_init(map_t *mapper);

void map_new_app(map_t *mapper, memphis_new_app_t *packet, int32_t *descriptor, int32_t *communication);

int map_coord_to_idx(int coord);

int map_idx_to_coord(int idx);

int map_xy_to_idx(int x, int y);

unsigned map_manhattan(int a, int b);

void map_task_allocated(map_t *mapper, memphis_info_t *info);

void map_task_terminated(map_t *mapper, memphis_info_t *info);

void map_task_aborted(map_t *mapper, memphis_info_t *info);

void map_request_nearest_service(map_t *mapper, oda_provider_t *packet);

void map_request_all_services(map_t *mapper, oda_provider_t *packet);

void map_migration_map(map_t *mapper, memphis_info_t *info);

void map_task_migrated(map_t *mapper, memphis_info_t *info);

void map_request_finish(map_t *mapper);

void map_pe_halted(map_t *mapper, memphis_info_t *info);

void map_app_info(map_t *mapper, memphis_info_t *info);

void map_terminate_ma(map_t *mapper);

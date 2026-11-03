/**
 * MA-Memphis
 * @file processing_element.h
 *
 * @author Angelo Elias Dal Zotto (angelo.dalzotto@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 * 
 * @date March 2021
 * 
 * @brief Processor structures for the mapper
 */

#pragma once

#include <stdbool.h>

#include <mutils/list.h>

/* Forward Declaration */
typedef struct _task task_t;

typedef struct _pe {
	int addr;
	unsigned slots;
	unsigned pending_cnt;
	unsigned reserved;	/* Idle slots withheld while the PE's OSZ row is claimed */
	list_t tasks;
} pe_t;

/**
 * @brief Withholds every free slot of the PE (idle PE of a claimed OSZ row)
 *
 * @return Number of slots withheld
 */
unsigned pe_reserve_idle(pe_t *pe);

/**
 * @brief Gives back the slots withheld by pe_reserve_idle
 *
 * @return Number of slots given back
 */
unsigned pe_release_idle(pe_t *pe);

void pe_init(pe_t *pe, size_t slots, int addr);

bool pe_add_pending(pe_t *pe);

list_entry_t *pe_task_push_back(pe_t *pe, task_t *task);

unsigned pe_get_slots(pe_t *pe);

list_t *pe_get_mapped(pe_t *pe);

int pe_get_addr(pe_t *pe);

bool pe_task_remove(pe_t *pe, task_t *task);

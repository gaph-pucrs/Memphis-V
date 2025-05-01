/**
 * MA-Memphis
 * @file mapper.c
 *
 * @author Angelo Elias Dal Zotto (angelo.dalzotto@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 * 
 * @date March 2021
 * 
 * @brief Main mapper functions
 */

#include "mapper.h"

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include <memphis.h>
#include <memphis/services.h>
#include <memphis/oda.h>

#include "window.h"

void map_init(map_t *mapper)
{
	mapper->appid_cnt = 0;

	const size_t MAX_TASKS = memphis_get_max_tasks(&(mapper->slots));
	
	mapper->pending = NULL;

	const size_t N_PE = memphis_get_nprocs(NULL, NULL);
	mapper->pes = malloc(N_PE * sizeof(pe_t));

	if(mapper->pes == NULL){
		puts("FATAL: not enough memory");
		return;
	}

	for(int i = 0; i < N_PE; i++)
		pe_init(&(mapper->pes[i]), MAX_TASKS, map_idx_to_coord(i));

	list_init(&(mapper->apps));

	mapper->finished = false;
	mapper->finished_cnt = 0;
}

void _map_do(map_t *mapper, app_t *app)
{
	size_t task_cnt;
	task_t *tasks = app_get_tasks(app, &task_cnt);

	/* Only map statically if there is any */
	unsigned static_cnt = 0;
	unsigned center_x = 0;
	unsigned center_y = 0;
	if(app_has_static(app)){
		/* 1st phase: static mapping */
		for(int i = 0; i < task_cnt; i++){
			pe_t *pe = task_get_pe(&tasks[i]);

			if(pe != NULL){
				list_entry_t *entry = pe_task_push_back(pe, &tasks[i]);

				if(entry == NULL){
					puts("FATAL: not enough memory");
					/**
					 * @todo
					 * Destroy app
					 * Destroy tasks
					 * Deallocate pending
					 */
					return;
				}

				int addr = pe_get_addr(pe);
				center_x += addr >> 8;
				center_y += addr & 0xFF;
				static_cnt++;
			}
		}

		center_x /= static_cnt;
		center_y /= static_cnt;
	}

	/* Avoid mapping when there is no dynamically allocated task */
	if(static_cnt != task_cnt){
		/* 2nd phase: sliding window map */

		/* 1st step: select a window */
		int wx = MAP_MIN_WX;
		int wy = MAP_MIN_WY;

		/* Pre-growth due to minimum size */
		size_t PE_SLOTS = memphis_get_max_tasks(NULL);
		while(wx*wy*PE_SLOTS < task_cnt){
			if(wy <= wx){
				wy++;	/* Prefer to have y greater than x because window slides in x-axis */
			} else {
				wx++;
			}
		}

		size_t PE_X_CNT;
		size_t PE_Y_CNT;
		memphis_get_nprocs(&PE_X_CNT, &PE_Y_CNT);

		if(wx > PE_X_CNT)
			wx = PE_X_CNT;

		if(wy > PE_Y_CNT)
			wy = PE_Y_CNT;

		wdo_t window;
		if(static_cnt != 0){
			/* Set the window based on the center of the statically mapped tasks */
			wdo_init(&window, center_x - wx/2, center_y - wy/2, wx, wy);
			wdo_from_center(&window, mapper->pes, task_cnt);
		} else {
			/* Set the window based on the last one selected */
			static bool initialized = false;
			static int last_x;
			static int last_y;
			
			if(wx != MAP_MIN_WX || wy != MAP_MIN_WY || !initialized){
				last_x = PE_X_CNT - wx;
				last_y = PE_Y_CNT - wy;
				initialized = true;
			}

			wdo_init(&window, last_x, last_y, wx, wy);
			wdo_from_last(&window, mapper->pes, task_cnt);
		}

		/* 2nd step: get the mapping order */
		list_t *ordered_tasks = app_get_order(app);

		if(ordered_tasks == NULL){
			puts("FATAL: not enough memory");
			/**
			 * @todo
			 * Destroy app
			 * Destroy tasks
			 * Unnalocate pending
			 */
			return;
		}

		/* 3rd step: map with the least communication cost and most parallelism */
		list_entry_t *entry = list_front(ordered_tasks);
		while(entry != NULL){
			task_t *task = list_get_data(entry);
			pe_t *pe = task_get_pe(task);
			if(pe == NULL){	/* Skip tasks already mapped */
				pe_t *pe = task_map(task, mapper->pes, &window);

				task_set_pe(task, pe);
				pe_task_push_back(pe, task);
			}

			entry = list_next(entry);
		}

		list_destroy(ordered_tasks);
		free(ordered_tasks);
	}

	/* Send allocation message */
	size_t out_size = (task_cnt + 2) << 2;
	int *out_msg = malloc(out_size);
	out_msg[0] = APP_ALLOCATION_REQUEST;
	out_msg[1] = app_get_id(app);
	int *payload = &(out_msg[2]);
	for(int i = 0; i < task_cnt; i++){
		pe_t *pe = task_get_pe(&tasks[i]);
		payload[i] = pe_get_addr(pe);
	}

	memphis_send_any(out_msg, out_size, app_get_injector(app));

	free(out_msg);
	out_msg = NULL;

	/* Now compute the mapping score */
	unsigned edges = 0;
	unsigned cost = 0;
	for(int i = 0; i < task_cnt; i++){
		task_t *vertex = &(tasks[i]);
		pe_t *vertex_pe = task_get_pe(vertex);

		list_t *succs = task_get_succs(vertex);
		list_entry_t *succ = list_front(succs);
		while(succ != NULL){
			task_t *succ_task = list_get_data(succ);
			pe_t *succ_pe = task_get_pe(succ_task);
			cost += map_manhattan(pe_get_addr(vertex_pe), pe_get_addr(succ_pe));
			edges++;

			succ = list_next(succ);
		}
	}

	unsigned score = cost > 0 ? (edges * 100) / cost : 100;
	
	/* Printf with 2 decimal places and avoid linking to float printf */
	printf("Mapped with score %u %% at %u\n", score, memphis_get_tick());

	app_set_score(app, score);

	/* Management app has special requirements */
	if(mapper->appid_cnt == 0){
		/* Mapper task is already allocated */
		unsigned allocated = app_allocated(app);

		/* Check if mapper task is the only MA task */
		if(allocated == task_cnt){
			/* Then finish mapping */
			app_mapping_complete(app);
			mapper->appid_cnt++;
		}
	}

	mapper->slots -= task_cnt;
	list_push_back(&(mapper->apps), app);
}

void map_new_app(map_t *mapper, int injector, int hash, size_t task_cnt, int *descriptor, int *communication)
{
	printf("New app received at %u from %x\n", memphis_get_tick(), injector);

	app_t *app = malloc(sizeof(app_t));

	if(app == NULL){
		puts("FATAL: not enough memory");
		return;
	}

	// @todo get hash id
	task_t *tasks = app_init(app, mapper->appid_cnt, hash, injector, task_cnt, descriptor, communication);
	if(tasks == NULL){
		puts("FATAL: not enough memory");
		return;
	}

	/* Search for statically mapped tasks */
	unsigned failed_cnt = 0;
	bool has_static = false;
	for(int i = 0; i < task_cnt; i++){
		int pe_addr = descriptor[i * MAP_DESCR_ENTRY_LEN];
		if(pe_addr != -1){
			int pe_idx = map_coord_to_idx(pe_addr);
			failed_cnt += task_set_pe(&tasks[i], &(mapper->pes[pe_idx]));
			has_static = true;
		}
	}

	app_set_has_static(app, has_static);

	/* Check if it will be mapped now or later */
	if(task_cnt > mapper->slots || failed_cnt > 0){
		puts("No available slots");

		app_set_failed(app, failed_cnt);
		mapper->pending = app;
		return;
	}

	/* Finally do the mapping */
	_map_do(mapper, app);
}

int map_coord_to_idx(int coord)
{
	size_t PE_X_CNT;
	memphis_get_nprocs(&PE_X_CNT, NULL);
	return (coord >> 8) + (coord & 0xFF) * PE_X_CNT;
}

int map_idx_to_coord(int idx)
{
	size_t PE_X_CNT;
	memphis_get_nprocs(&PE_X_CNT, NULL);
	return ((idx % PE_X_CNT) << 8) | (idx / PE_X_CNT);
}

int map_xy_to_idx(int x, int y)
{
	size_t PE_X_CNT;
	memphis_get_nprocs(&PE_X_CNT, NULL);
	return x + y*PE_X_CNT;
}

unsigned map_manhattan(int a, int b)
{
	int a_x = a >> 8;
	int a_y = a & 0xFF;
	int b_x = b >> 8;
	int b_y = b & 0xFF;

	int dist_x = abs(a_x - b_x);
	int dist_y = abs(a_y - b_y);

	return dist_x + dist_y;
}

app_t *_map_find_app(map_t *mapper, int appid)
{
	list_entry_t *entry = list_find(&(mapper->apps), &appid, app_find_fnc);

	if(entry == NULL)
		return NULL;

	return list_get_data(entry);
}

void map_task_allocated(map_t *mapper, int id)
{
	printf("Received task allocated from id %d\n", id);

	const int appid = id >> 8;
	app_t *app = _map_find_app(mapper, appid);

	if(app == NULL){
		puts("WARNING: App not found. Ignoring.");
		return;
	}

	size_t alloc_cnt = app_add_allocated(app);
	size_t task_cnt;
	task_t *tasks = app_get_tasks(app, &task_cnt);
	if(alloc_cnt != task_cnt)
		return;

	/* All tasks allocated, send task release */
	printf("Sending TASK_RELEASE at time %d for app %d\n", memphis_get_tick(), appid);

	/* Assemble and send task release */
	const size_t msg_size = (task_cnt + 3) << 2;
	int *out_msg = malloc(msg_size);

	out_msg[0] = TASK_RELEASE;
	// out_msg[1] = appid_shift | i;
	out_msg[2] = task_cnt;

	for(int i = 0; i < task_cnt; i++){
		task_t *task = &(tasks[i]);

		/* Mark task as running */
		task_release(task);

		pe_t *pe = task_get_pe(task);
		int addr = pe_get_addr(pe);
		out_msg[i + 3] = addr;
	}

	const int appid_shift = appid << 8;
	for(int i = 0; i < task_cnt; i++){
		/* Tell kernel to populate the proper task by sending the ID */
		out_msg[1] = appid_shift | i;

		/* Send message directed to kernel at task address */
		memphis_send_any(out_msg, msg_size, MEMPHIS_KERNEL_MSG | out_msg[i + 3]);
	}

	free(out_msg);
	out_msg = NULL;

	app_mapping_complete(app);
	mapper->appid_cnt++;
}

void _map_release_resources(map_t *mapper, task_t *task)
{
	pe_t *pe = task_get_pe(task);
	mapper->slots++;
	if(pe_task_remove(pe, task) && mapper->pending != NULL)
		app_rem_failed(mapper->pending);

	pe_t *old_pe = task_destroy(task);
	if(old_pe != NULL){
		/* The task finished with a migration request on the fly */
		mapper->slots++;
		if(pe_task_remove(old_pe, task) && mapper->pending != NULL)
			app_rem_failed(mapper->pending);
	}
}

app_t *_map_terminate_task(map_t *mapper, int id)
{
	const int appid = id >> 8;
	app_t *app = _map_find_app(mapper, appid);
	
	if(app == NULL)
		return NULL;

	task_t *task = app_get_task(app, id & 0xFF);

	if(task == NULL)
		return NULL;

	_map_release_resources(mapper, task);

	return app;
}

void _map_terminate_app(map_t *mapper, app_t *app)
{
	printf("App %d terminated at time %d\n", app_get_id(app), memphis_get_tick());
	app_terminated(app);	/* Broadcast app termination to clear migration table */
	app_destroy(app);
	list_entry_t *entry = list_find(&(mapper->apps), app, NULL);
	list_remove(&(mapper->apps), entry);
	free(app);

	if(mapper->finished && list_get_size(&(mapper->apps)) == 1){
		/* Broadcast a request for a termination procedure */
		memphis_br_send(HALT_PE, getpid());
	}
}

void _map_verify_pending(map_t *mapper)
{
	/* There is a pending application which could not be allocated before */
	size_t task_cnt;
	app_get_tasks(mapper->pending, &task_cnt);
	if(mapper->slots < task_cnt)
		return;

	/* Able to map unless it was due to static mapping not available */
	unsigned failed_cnt = app_get_failed(mapper->pending);
	if(failed_cnt != 0)
		return;

	/* Application is able to map (enough slots) and static mapping is OK */
	_map_do(mapper, mapper->pending);
	mapper->pending = NULL;
}

void map_task_terminated(map_t *mapper, int id)
{
	printf("Received task terminated from id %d at time %d\n", id, memphis_get_tick());

	app_t *app = _map_terminate_task(mapper, id);

	if(app == NULL){
		puts("WARNING: task no found. Ignoring.");
		return;
	}

	size_t alloc_cnt = app_rem_allocated(app);

	/* Management task finished, waiting to halt */
	if (app_get_id(app) == 0 && mapper->finished) {
		/* All other management tasks finished */
		if (alloc_cnt == 1) {
			memphis_halt();
			return;
		}
		
		task_t *terminated = app_get_task(app, id);
		unsigned tag = task_get_tag(terminated);
		if ((tag & ODA_OBSERVE) != 0) {
			/* Task that terminated was observer*/
			if (!app_has_oda_running(app, ODA_OBSERVE)) {
				/* If no observer is mapped, terminate the next class of ODA */
				size_t oda_cnt;
				task_t *odas = app_get_tasks(app, &oda_cnt);
				if (task_terminate_oda(odas, oda_cnt, ODA_DECIDE))
					return;

				/* If no deciders present, terminate the actuators */
				task_terminate_oda(odas, oda_cnt, ODA_ACT);
			}
		} else if ((tag & ODA_DECIDE) != 0) {
			/* Task that terminated was decider*/
			if (!app_has_oda_running(app, ODA_DECIDE)) {
				/* If no decider is mapped, terminate the next class of ODA */
				size_t oda_cnt;
				task_t *odas = app_get_tasks(app, &oda_cnt);
				task_terminate_oda(odas, oda_cnt, ODA_ACT);
			}
		} /* If deciders are finishing, just wait for them to finish and then halt */
		return;
	}

	/* All tasks terminated, terminate app */
	if(alloc_cnt == 0)
		_map_terminate_app(mapper, app);

	if(mapper->pending != NULL)
		_map_verify_pending(mapper);
}

void map_task_aborted(map_t *mapper, int id)
{
	printf("Received task aborted from id %d at time %d\n", id, memphis_get_tick());

	app_t *app = _map_terminate_task(mapper, id);

	if(app == NULL){
		puts("WARNING: task no found. Ignoring.");
		return;
	}

	size_t alloc_cnt = app_rem_allocated(app);

	/* All tasks terminated, terminate app */
	if(alloc_cnt != 0){
		/* There are tasks still running */
		int appid_shift = app_get_id(app) << 8;
		size_t task_cnt;
		task_t *tasks = app_get_tasks(app, &task_cnt);

		for(int i = 0; i < task_cnt; i++){
			task_t *task = &tasks[i];
			if(task_is_allocated(task)){
				/* Task is running and needs to be aborted */
				pe_t *pe = task_is_migrating(task) ? task_get_old_pe(task) : task_get_pe(task);
				int addr = pe_get_addr(pe);
				uint32_t payload[] = {
					ABORT_TASK,
					(appid_shift | i)
				};
				memphis_send_any(payload, sizeof(payload), MEMPHIS_KERNEL_MSG | addr);

				/* End task */
				_map_release_resources(mapper, task);
			}
		}
	}

	_map_terminate_app(mapper, app);

	if(mapper->pending != NULL)
		_map_verify_pending(mapper);
}

void map_request_nearest_service(map_t *mapper, int address, unsigned tag, int requester)
{
	int oda = -1;
	unsigned distance = -1;
	// printf("Task %d @%d is requesting for tag %u\n", requester, address, tag);

	/* Search all Management tasks */
	list_entry_t *entry = list_front(&(mapper->apps));
	app_t *ma = list_get_data(entry);
	size_t task_cnt;
	task_t *tasks = app_get_tasks(ma, &task_cnt);

	for(int i = 0; i < task_cnt; i++){
		task_t *task = &(tasks[i]);
		if((task_get_tag(task) & tag) != tag)
			continue;

		pe_t *pe = task_get_pe(task);
		unsigned d = map_manhattan(address, pe_get_addr(pe));
		if(d < distance){
			distance = d;
			oda = i;
		}
	}
	
	int out_msg[] = {
		SERVICE_PROVIDER, 
		tag, 
		oda
	};
	
	memphis_send_any(out_msg, sizeof(out_msg), requester);
}

void map_request_all_services(map_t *mapper, unsigned tag, int requester)
{
	// printf("Task %d requested all services with tag %x\n", requester, tag);
	/* Search all Management tasks */
	list_entry_t *entry = list_front(&(mapper->apps));
	app_t *ma = list_get_data(entry);
	size_t task_cnt;
	task_t *tasks = app_get_tasks(ma, &task_cnt);

	size_t matches = 0;
	int *message = malloc(259*sizeof(int));
	if (message == NULL) {
		printf("ERROR: Not enough memory\n");
		return;
	}
	
	message[0] = ALL_SERVICE_PROVIDERS;
	message[1] = tag;
	for(int i = 0; i < task_cnt; i++){
		task_t *task = &(tasks[i]);
		if((task_get_tag(task) & tag) != tag)
			continue;
		
		message[matches + 3] = task_get_id(task);
		matches++;
	}
	message[2] = matches;

	// printf("Found %d match(es)\n", matches);

	memphis_send(message, (matches + 3)*sizeof(int), requester);

	free(message);
}

void map_migration_map(map_t *mapper, int id)
{
	printf("Received migration request to task id %d at time %d\n", id, memphis_get_tick());

	const int appid = id >> 8;
	app_t *app = _map_find_app(mapper, appid);
	
	if(app == NULL){
		puts("WARNING: App not found. Ignoring.");
		return;
	}

	const int taskid = id & 0xFF;
	task_t *task = app_get_task(app, taskid);

	if(task == NULL || !task_is_allocated(task)){
		puts("WARNING: Task not found. Ignoring.");
		return;
	}

	if(task_is_migrating(task)){
		puts("WARNING: Task is already migrating. Ignoring.");
		return;
	}

	pe_t *old_pe = task_get_pe(task);
	// unsigned then = memphis_get_tick();

	/* Compute the window center */
	unsigned center_x = 0;
	unsigned center_y = 0;

	size_t task_cnt;
	task_t *tasks = app_get_tasks(app, &task_cnt);
	
	if(task_cnt > 1){
		for(int i = 0; i < task_cnt; i++){
			if(i == taskid)
				continue;	/* Disregard the task to migrate */

			pe_t *pe = task_get_pe(&(tasks[i]));
			const int addr = pe_get_addr(pe);
			center_x += (addr >> 8);
			center_y += (addr & 0xFF);
		}
		center_x /= (task_cnt - 1);
		center_y /= (task_cnt - 1);
	}

	/* Temporarily release current processor */
	pe_task_remove(old_pe, task);
	
	/* Get window from this center (able to grow) */
	wdo_t window;
	wdo_init(&window, center_x - MAP_MIN_WX/2, center_y - MAP_MIN_WX/2, MAP_MIN_WX, MAP_MIN_WX);
	wdo_from_center(&window, mapper->pes, 1);

	/* Reallocate resource */
	task_set_pe(task, old_pe);			/* Needed because PE push back changes pending mappings */
	pe_task_push_back(old_pe, task);

	/* Map to the specific window */
	pe_t *pe = task_map(task, mapper->pes, &window);

	// unsigned now = memphis_get_tick(); 
	// printf("Ticks of mapping task for migration = %d\n", now-then);

	/* Check if migrating to current pe */
	if(pe == old_pe){
		puts("WARNING: Task is in the same PE as the target. Will not migrate.");
		return;
	}

	const int addr = pe_get_addr(pe);
	printf("Migrating task to address %d\n", addr);

	/* Allocate on target pe */
	list_entry_t *entry = task_migrate(task, pe);
	if(entry == NULL){
		puts("ERROR: not enough memory");
		return;
	}
	mapper->slots--;

	/* Migrate the task */
	uint32_t payload[] = {
		TASK_MIGRATION,
		(addr << 16) | (id & 0xFFFF)
	};
	memphis_send_any(payload, sizeof(payload), MEMPHIS_KERNEL_MSG | pe_get_addr(old_pe));
}

void map_task_migrated(map_t *mapper, int id)
{
	printf("Received migration completed to task id %d at time %d\n", id, memphis_get_tick());

	app_t *app = _map_find_app(mapper, id >> 8);
	if(app == NULL){
		puts("WARNING: App not found. Ignoring.");
		return;
	}

	task_t *task = app_get_task(app, id & 0xFF);
	if(task == NULL){
		puts("WARNING: Task not found. Ignoring.");
		return;
	}

	/* Free old processor resources */
	pe_t *old_pe = task_get_old_pe(task);
	pe_task_remove(old_pe, task);
	mapper->slots++;

	/* Mark as migration finished */
	task_release(task);
}

void map_request_finish(map_t *mapper)
{
	// printf("AppInjector signalized finish\n");
	mapper->finished = true;
}

void map_pe_halted(map_t *mapper, int address)
{
	mapper->finished_cnt++;

	const size_t N_PE = memphis_get_nprocs(NULL, NULL);
	if (mapper->finished_cnt == N_PE)
		map_terminate_ma(mapper);
}

void map_app_info(map_t *mapper, int appid, int requester)
{
	app_t *app = _map_find_app(mapper, appid);
	int hash_id = -1;
	unsigned release_time = -1;
	if(app != NULL){
		hash_id = app_get_hash(app);
		release_time = app_get_release_time(app);
	}

	uint32_t ans[] = {SEC_SAFE_MAP_RESP, appid, hash_id, release_time};
	memphis_send(ans, sizeof(ans), requester);
}

void map_terminate_ma(map_t *mapper)
{
	/* Search all Management tasks */
	list_entry_t *entry = list_front(&(mapper->apps));
	app_t *ma = list_get_data(entry);

	if (ma->allocated_cnt == 1) {
		memphis_halt();
		return;
	}

	size_t task_cnt;
	task_t *tasks = app_get_tasks(ma, &task_cnt);

	/* First we need to terminate observers */
	if (task_terminate_oda(tasks, task_cnt, ODA_OBSERVE))
		return;

	/* Then we need to terminate deciders */
	if (task_terminate_oda(tasks, task_cnt, ODA_DECIDE))
		return;

	/* Then we need to terminate actuators */
	task_terminate_oda(tasks, task_cnt, ODA_ACT);
}

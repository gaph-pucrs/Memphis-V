/**
 * MA-Memphis
 * @file osz.c
 *
 * @brief OSZ reserved region for secure applications
 */

#include "osz.h"

#include <stdio.h>

#include <memphis.h>

static bool   _enabled = false;
static size_t _x = 0;
static size_t _y = 0;

void osz_init(void)
{
	_enabled = memphis_get_osz_window(&_x, &_y);

	if(!_enabled){
		puts("OSZ region: disabled");
		return;
	}

	printf(
		"OSZ region: %ux%u, PEs 0,0 to %u,%u\n",
		(unsigned)_x, (unsigned)_y, (unsigned)(_x - 1), (unsigned)(_y - 1)
	);
}

bool osz_enabled(void)
{
	return _enabled;
}

void osz_get_size(size_t *x, size_t *y)
{
	if(x != NULL)
		*x = _x;

	if(y != NULL)
		*y = _y;
}

bool osz_pe_eligible(int addr, bool secure)
{
	if(!_enabled)
		return true;

	const size_t x = addr >> 8;
	const size_t y = addr & 0xFF;

	if(secure)
		return (x < _x && y < _y);

	return (x > _x);
}

int osz_row_count(void)
{
	return (int)_y;
}

int osz_row_width(void)
{
	return (int)_x;
}

int osz_row_of(int addr)
{
	const size_t x = addr >> 8;
	const size_t y = addr & 0xFF;

	if(!_enabled || x >= _x || y >= _y)
		return -1;

	return (int)y;
}

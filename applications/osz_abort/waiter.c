/**
 * MA-Memphis
 * @file waiter.c
 *
 * @brief OSZ abort test: waits forever for a message from overflow
 *
 * @details It only ends when the mapper aborts the application.
 */

#include <stdio.h>

#include <memphis.h>

int main()
{
	int msg[4];

	puts("waiter: waiting for overflow");
	memphis_receive(msg, sizeof(msg), overflow);
	puts("waiter: received (unexpected)");

	return 0;
}

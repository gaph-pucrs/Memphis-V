/**
 * MA-Memphis
 * @file dmni.h
 * 
 * @author Angelo Elias Dalzotto (angelo.dalzotto@edu.pucrs.br)
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 * 
 * @date September 2020
 * 
 * @brief Declares the DMNI functions for payload handling.
 */

#pragma once

#include <stddef.h>

#include "packet.h"

static const unsigned DMNI_READ  = 0;
static const unsigned DMNI_WRITE = 1;

/**
 * @brief Abstracts the DMNI programming for read data from NoC and copy to memory.
 * 
 * @param payload_address	Address where the payload will be saved
 * @param payload_size		Number of flits to copy
 */
void dmni_read(void *payload_address, size_t payload_size);

/**
 * @brief Abstracts thte DMNI programming for writing data to NoC and copy from memory.
 * 
 * @param packet Pointer to the packet to send
 * @param payload Pointer to the payload to send. NULL if none
 * @param size Size of the payload to send in flits (32-bit). 0 if none
 */
void dmni_send(packet_t *packet, void *payload, size_t size);

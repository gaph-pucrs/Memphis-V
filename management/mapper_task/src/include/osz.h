/**
 * MA-Memphis
 * @file osz.h
 *
 * @brief OSZ reserved region for secure applications
 *
 * @details The region is a platform parameter (hw.osz_window in the testcase),
 * read once from the DMNI_OSZ_WINDOW register through the kernel context. It
 * always starts at PE 0,0 and covers x in [0, X-1] and y in [0, Y-1].
 */

#pragma once

#include <stdbool.h>
#include <stddef.h>

/**
 * @brief Reads the region from the platform. Call once at mapper start.
 */
void osz_init(void);

/**
 * @brief Checks if the platform has a reserved region
 *
 * @return true if enabled, false otherwise
 */
bool osz_enabled(void);

/**
 * @brief Gets the region size
 *
 * @param x Variable to store the region width (X), 0 when disabled
 * @param y Variable to store the region height (Y), 0 when disabled
 */
void osz_get_size(size_t *x, size_t *y);

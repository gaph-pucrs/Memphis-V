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

/**
 * @brief Checks if a PE may host a task of a secure or non-secure application
 *
 * @details Secure: inside the region. Non-secure: x >= X+1 (column X, right
 * of the region, stays free). Every PE is eligible when there is no region.
 *
 * @param addr PE address (0xXXYY)
 * @param secure Whether the application is secure
 *
 * @return true if eligible
 */
bool osz_pe_eligible(int addr, bool secure);

/**
 * @brief Gets the number of region rows (Y), 0 when disabled
 */
int osz_row_count(void);

/**
 * @brief Gets the width of a region row in PEs (X), 0 when disabled
 */
int osz_row_width(void);

/**
 * @brief Gets the region row of a PE
 *
 * @param addr PE address (0xXXYY)
 *
 * @return The row (its y coordinate), or -1 if the PE is outside the region
 */
int osz_row_of(int addr);

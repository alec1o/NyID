/**
 * @file nyid.h
 * @brief NyID: library header file
 *
 * NyID: unique and secure ID generator library.
 */

#ifndef NYID_H
#define NYID_H

#include <stdint.h>

/**
 * @fn char* nyid_generate(uint64_t seed, uint64_t index, int auto_resize, char *key, int key_size)
 * @brief NyID: generator function
 *
 * @param seed          Unique seed value for the application
 * @param index         Auto-incremented index value (used in seed context)
 * @param size          Output size
 * @param resize        (0 false, 1 true) Flag to enable automatic resizing to prevent overflow/collisions
 * @param keys           Character array used to generate IDs
 * @param key_size      Size of the character array
*/
char *nyid_generate(uint64_t seed, uint64_t index, uint32_t size, uint8_t resize, char *keys, uint32_t key_size);

/**
 * @fn uint64_t nyid_cantorPairing(uint64_t seed, uint64_t index)
 * @brief NyID: Cantor Pairing
 *
 * @param seed          Unique seed value for the application
 * @param index         Auto-incremented index value (used in seed context)
*/
uint64_t nyid_cantorPairing(uint64_t seed, uint64_t index);

#endif
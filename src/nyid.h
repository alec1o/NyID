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
 * @param key           Character array used to generate IDs
 * @param key_size      Size of the character array
 * @param auto_resize   Flag to enable automatic resizing to prevent overflow/collisions
*/
char *nyid_generate(uint64_t seed, uint64_t index, int auto_resize, char *key, int key_size);

#endif
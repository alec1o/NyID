#include "nyid.h"

uint64_t cantorPairing(uint64_t seed, uint64_t index)
{
    return (seed + index) * (seed + index + 1) / 2 + index;
}

char *nyid_generate(uint64_t seed, uint64_t index, uint32_t size, uint8_t resize, char *keys, uint32_t key_size)
{
    char *array;

    if (key_size <= 0 || size <= 0)
    {
        return array;
    }

    for (int32_t i = 0; i < size; i++)
    {
        uint64_t pairing = cantorPairing(seed, index);
        uint32_t result = pairing % key_size;
        array += keys[result];
    }

    return array;
}
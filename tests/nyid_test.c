#include <stdio.h>
#include "nyid.h"

int test_add()
{
    int _return = 0;

    char *array = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char *result = nyid_generate(1, 2, 10, 1, array, sizeof(array));

    printf("#1: %llu \n", result);

    return _return;
}

int main()
{
    printf("NyId: Running tests...\n");
    return test_add();
}

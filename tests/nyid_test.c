#include <stdio.h>
#include "nyid.h"

int test_add()
{
    int _return = 0;

    // Teste 1
    int result = ny_add(1, 2);
    if (result != 3)
    {
        _return++;
        printf("Test 1 failed: expected 3 but got %d\n", result);
    }
    else
    {
        printf("Test 1 passed\n");
    }

    // Teste 2
    result = ny_add(-1, 1);
    if (result != 0)
    {
        _return++;
        printf("Test 2 failed: expected 0 but got %d\n", result);
    }
    else
    {
        printf("Test 2 passed\n");
    }

    // Teste 3
    result = ny_add(-1, -1);
    if (result != -2)
    {
        _return++;
        printf("Test 3 failed: expected -2 but got %d\n", result);
    }
    else
    {
        printf("Test 3 passed\n");
    }

    return _return;
}

int main()
{
    printf("NyId: Running tests...\n");
    return test_add();
}

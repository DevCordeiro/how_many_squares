#include <stdio.h>
#include "squares.h"

void run_test(int input, int expected)
{
    int result = count_squares(input);
    if (result == expected)
    {
        printf("[PASS] n = %d -> %d squares \n", input, result);
    }
    else 
    {
        printf("[FAIL] n = %d -> got %d, expect %d\n", input, result, expected);
    }
}

int main() 
{
    run_test(1, 1);
    run_test(2, 5);
    run_test(3, 14);
    run_test(4, 30);
    run_test(5, 55);
    run_test(10, 385);

    return 0;
}
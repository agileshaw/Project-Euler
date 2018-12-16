/**
 * Problem0002 - Even Fibonacci numbers
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>

int main()
{
    int tmp1 = 0, tmp2 = 1, limit = 4000000, sum;
    int fib = tmp1 + tmp2;
    
    while (fib < limit)
    {
        if (fib % 2 == 0)
            sum += fib;
        tmp1 = tmp2;
        tmp2 = fib;
        fib = tmp1 + tmp2;
    }
    printf("The sum is: %d\n", sum);

    return 0;
}
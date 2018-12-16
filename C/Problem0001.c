/**
 * Problem0001 - Multiples of 3 and 5
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>

int main() 
{
    int i, sum = 0;

    for (i = 0; i < 1000; i++)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    printf("The sum is: %d\n", sum);

    return 0;
}
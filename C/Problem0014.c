/**
 * Problem0014 - Longest Collatz sequence
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>

unsigned long long collatz(unsigned long long num)
{
    unsigned long long count = 0;

    while (num != 1) {
        if (num % 2 == 0)
            num /= 2;
        else
            num = 3 * num + 1;
        count++;
    }

    return count;
}

int main()
{
    unsigned long long i, count, max = 0, result;

    for (i = 2; i < 1000000; i++) {
        count = collatz(i);
        if (count > max) {
            max = count;
            result = i;
        }
    }

    printf("The number which generates the longest collatz sequence is: %llu\n", result);

    return 0;
}
/**
 * Problem0010 - Summation of primes
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkPrime(unsigned long long num)
{
    unsigned long long i;

    for (i = 2; i < sqrt(num) + 1; i++) {
        if (num == 2)
            return true;
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    unsigned long long num, sum = 0;

    for (num = 2; num < 2000000; num++) {
        if (checkPrime(num))
            sum += num;
    }

    printf("The sum of all the primes below two million is: %llu\n", sum);

    return 0;
}
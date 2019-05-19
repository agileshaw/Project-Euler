/**
 * Problem0012 - Highly divisible triangular number
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>

int numOfFactors(unsigned long long num)
{
    int count = 0; 
    unsigned long long i;

    for (i = 1; i <= num; i++) {
        if (num % i == 0)
            count++;
    }

    return count;
}

int main ()
{
    int count = 0;
    unsigned long long natural = 1, result = 0;

    while (count < 500) {
        
        result += natural;
        natural++;
        printf("%llu\n", result);
        count = numOfFactors(result);
        }

    printf("The highly divisible triangular number is: %llu\n", result);

    return 0;
}
/**
 * Problem0016 - Power digit sum
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>
#include <math.h>

int main ()
{
    unsigned long long num, result = 0;
    int digit;

    num = (unsigned long long)(pow(2, 1000));
    printf("%llu\n", num);
    while (num > 0) {
        digit = num % 10;
        result += digit;
        num /= 10;
    }
    printf("The sum of the digits is: %llu\n", result);

    return 0;
}

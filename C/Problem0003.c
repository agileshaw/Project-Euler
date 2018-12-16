/**
 * Problem0003 - Largest prime factor
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long num = 600851475143;
    int i, factor, flag = 0;

    while (flag == 0)
    {   
        i = 2;
        while (num % i != 0 && i < num)
            i++;
        if (num % i == 0)
        {
            num /= i;
            factor = i;
        } else
            flag = 1;
    }
    printf("The largest factor is: %d\n", factor);

    return 0;
}
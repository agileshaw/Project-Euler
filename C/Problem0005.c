/**
 * Problem0005 - Smallest multiple
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>
#include <math.h>

int gcd(int num1, int num2)
{
    int i, divisor;

    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0)
            divisor = i;
    }

    return divisor;
}

int lcm(int num1, int num2)
{
    int divisor = gcd(num1, num2);

    if (divisor == num2)
        return num1;
    else
        return (num1 * num2) / divisor;
}

int main() 
{
    int i, result = 1;
    
    for (i = 1; i < 21; i++)
        result = lcm(result, i);

    printf("The smallest multiple is: %d\n", result);

    return 0;
}
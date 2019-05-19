/**
 * Problem0012 - Highly divisible triangular number
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>
#include <math.h>

int numOfFactors(int num)
{
    int count = 0, i;
    int root = (int)sqrt(num);
    
    for (i = 1; i <= root; i++) {
        if (num % i == 0)
            count += 2;
    }

    if (root * root == num) 
        count -= 1;

    return count;
}

int main()
{
    int count = 0, natural = 1, result = 0;

    while (count < 500) {
        result += natural;
        natural++;
        count = numOfFactors(result);
    }

    printf("The highly divisible triangular number is: %d\n", result);

    return 0;
}
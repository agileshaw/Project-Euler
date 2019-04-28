/**
 * Problem0007 - 10001st prime
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkPrime(int num)
{
    int i;

    for (i = 2; i < num/2; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num, count;

    for (num = 2, count = 0; count <= 10001; num++) {
        if (checkPrime(num))
            count++;
        if (count > 10001)
            printf("The 10001st prime is: %d\n", num);
    }

    return 0;

}
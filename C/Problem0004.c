/**
 * Problem0004 - Largest palindrome product
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>
#include <math.h>

int reverse(int num) {
    int rev = 0;
    while (num != 0) {
        rev *= 10;
        rev += num % 10;
        num /= 10;
    }
    return rev;
}

int main()
{
    int i, j, num, result = 0;
    
    for (i = 100; i < 1000; i++) {
        for (j = i; j < 1000; j++) {
            num = i * j;
            if (num == reverse(num) && result < num)
                result = num;
        }
    }

    printf("The largest palindrome product is: %d\n", result);

    return 0;
}
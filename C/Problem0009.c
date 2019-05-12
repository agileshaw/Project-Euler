/**
 * Problem0009 - Special Pythagorean triplet
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>

int main()
{
    int i, j, k, result;

    for (i = 0; i < 1000; i++) {
        for (j = i + 1; j < 1000; j++) {
            for (k = j + 1; k < 1000; k++) {
                if ((i*i + j*j == k*k) && (i + j + k == 1000)) {
                    result = i * j * k;
                    printf("The product of the special pythagorean triplet is: %d\n", result);
                    return 0;
                }
            }
        }
    }
    
    return 0;
}
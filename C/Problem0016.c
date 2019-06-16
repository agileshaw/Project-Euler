/**
 * Problem0016 - Power digit sum
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>
#include <stdlib.h>

void bigIntMultiply (int* num, int size, int multiplier) {
    int i, tmp, carry = 0;
    
    for (i = 0; i < size; i++) {
        tmp = multiplier * num[i] + carry;
        num[i] = tmp % 10;
        carry = tmp / 10;
    }
}

int main ()
{
    int i, size = 400, result = 0;
    int *num = calloc(size, sizeof(int));
    
    if (num == NULL) {
        printf("Error allocating memory\n");
        exit(1);
    }

    num[0] = 1;
    for (i = 0; i < 1000; i++)
        bigIntMultiply(num, size, 2);

    for (i = 0; i < size; i++) 
        result += num[i];
    
    printf("The sum of the digits is: %d\n", result);
    free(num);

    return 0;
}

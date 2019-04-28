/**
 * Problem0005 - Sum square difference
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumOfSquares(int start, int end)
{
    int i, sum = 0;

    for (i = start; i <= end; i++) {
        sum += i * i; 
    }

    return sum;
}

int squareOfSums(int start, int end)
{
    int i, sum = 0, square;

    for (i = start; i <= end; i++) {
        sum += i;
    }

    square = sum * sum;

    return square;
}

int main()
{
    int sum_of_squares, square_of_sums, difference;

    sum_of_squares = sumOfSquares(1, 100);
    square_of_sums = squareOfSums(1, 100);
    difference = abs(square_of_sums - sum_of_squares);

    printf("The difference is: %d\n", difference);

    return 0;
}
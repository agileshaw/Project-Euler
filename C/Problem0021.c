/**
 * Problem0021 - Amicable numbers
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int divisorSum(int num)
{
	int sum = 1, i;
	
	for (i = 2; i < sqrt(num+1); i++) {
		if (num % i == 0){
			if (num/i == i)
				sum += i;
			else
				sum += i + num/i;
		}
	}

	return sum;
}

int main()
{
	int i, j, size = 10000, result = 0;
	int* num = calloc(size, sizeof(int));

	if (num == NULL) {
		printf("Error allocating memory\n");
		exit(1);
	}
	
	for (i = 2; i < size; i++)
		num[i] = divisorSum(i);

	for (i = 1; i < size; i++) {
		j = num[i];
		if (j < size && num[j] == i && j != i)
			result += i;
	}

	printf("The sum of amicable numbers is: %d\n", result);
	free(num);

	return 0;
}

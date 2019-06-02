/**
 * Problem0015 - Lattice paths
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>

int main ()
{
	int size = 20, i;
	unsigned long long result = 1;

	for (i = 1; i <= size; i++) {
		result *= 2*size + 1 - i;
		result /= i;
	}

	printf("The number of lattice paths is: %llu\n", result);

	return 0;
}
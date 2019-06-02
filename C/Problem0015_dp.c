/**
 * Problem0015 - Lattice paths
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>

int main ()
{
	int size = 20, i, j;
	unsigned long long grid[size+1][size+1];

	for (i = 0; i <= size; i++) {
		for (j = 0; j <= size; j++)
			grid[i][j] = 0;
	}

	for (i = 0; i < size; i++) {
		grid[i][size] = 1;
		grid[size][i] = 1;
	}

	for (i = size-1; i >= 0; i--) {
		for (j = size-1; j >= 0; j--) {
			grid[i][j] = grid[i+1][j] + grid[i][j+1];
		}
	}

	printf("The number of lattice paths is: %llu\n", grid[0][0]);

	return 0;
}
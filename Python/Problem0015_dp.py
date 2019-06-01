# Problem0015 - Lattice paths
# 
# https://github.com/agileshaw/Project-Euler

import array

if __name__ == "__main__":
	size = 20
	grid = [[0 for x in range(size+1)] for y in range(size+1)]
	for i in range(size):
		grid[i][size] = 1
		grid[size][i] = 1
	for i in range(size-1, -1, -1):
		for j in range(size-1, -1, -1):
			grid[i][j] = grid[i+1][j] + grid[i][j+1]
	print("The number of lattice paths is: %d" % grid[0][0])

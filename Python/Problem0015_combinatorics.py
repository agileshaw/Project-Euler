# Problem0015 - Lattice paths
# 
# https://github.com/agileshaw/Project-Euler

if __name__ == "__main__":
 	size = 20
 	result = 1
 	for i in range(1, 21):
 		result *= 2*size + 1 - i
 		result /= i
 	print("The number of lattice paths is: %d" % result)
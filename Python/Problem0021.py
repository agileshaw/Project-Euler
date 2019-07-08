# Problem0021 - Amicable numbers
#
# https: // github.com/agileshaw/Project-Euler

import math

def divisorSum(num):
	dsum = 1
	for i in range(2, int(math.sqrt(num+1))):
		if num % i == 0:
			if num//i == i:
				dsum += i
			else:
				dsum += i + num//i
	return dsum

if __name__ == "__main__":
	result = 0
	size = 10000
	num = [0] * size
	for i in range(2, size):
		num[i] = divisorSum(i)
	for i in range(1, size):
		j = num[i]
		if j < size and num[j] == i and i != j:
			result += i
	print("The sum of amicable numbers is: %d" % result)

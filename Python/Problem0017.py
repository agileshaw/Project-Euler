# Problem0017 - Number letter counts
#
# https://github.com/agileshaw/Project-Euler

def letterCount(num):
	below_twenty = ["", "one", "two", "three", "four", "five", "six", "seven", "eight",
					"nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
					"sixteen", "seventeen", "eighteen", "nineteen"]
	below_hundred = ["", "", "twenty", "thrity", "forty", "fifty", "sixty", "seventy",
					"eighty", "ninety"]
	more = ["hundred", "thousand", "and"]
	
	if num < 20: 
		count = len(below_twenty[num])
	elif num < 100:
		count = len(below_hundred[num//10]) + letterCount(num%10)
	elif num < 1000:
		count = len(below_twenty[num//100]) + len(more[0]) + letterCount(num%100)
		if num % 100 != 0:
			count += len(more[2])
	elif num == 1000:
		count = len(below_twenty[1]) + len(more[1])

	return count

if __name__ == "__main__":
	result = 0
	for i in range(1, 1001):
		result += letterCount(i)
	print("The number letter counts is: %d" % result)
# Problem0012 - Highly divisible triangular number
#
# https://github.com/agileshaw/Project-Euler

import math
import itertools

def numOfFactors(num):
    count = 0
    root = int(math.sqrt(num))
    for i in itertools.islice(itertools.count(1), root):
        if num % i == 0:
            count += 2
    if root * root == num:
        count -= 1
    return count

if __name__ == "__main__":
    count = 0
    result = 0
    natural = 1
    while count < 500:
        result += natural
        natural += 1
        count = numOfFactors(result)
    print("The highly divisible triangular number is: %d" % result)


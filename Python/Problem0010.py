# Problem0010 - Summation of primes
#
# https://github.com/agileshaw/Project-Euler

import math
import itertools

def checkPrime(num):
    for i in itertools.islice(itertools.count(2), int(math.sqrt(num) - 1)):
        if num % i == 0:
            return False
    return True

if __name__ == "__main__":
    sum = 0
    for i in itertools.islice(itertools.count(2), 2000000):
        check = checkPrime(i)
        if check:
            sum += i
    print("The sum of all the primes below two million is: %d" % sum)

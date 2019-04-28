# Problem0007 - 10001st prime
#
# https://github.com/agileshaw/Project-Euler

import math;
import itertools;

def checkPrime(num):
    for i in itertools.islice(itertools.count(2), int(math.sqrt(num) - 1)):
        if num % i == 0:
            return False
    return True

if __name__ == "__main__":
    count = 0
    for num in itertools.islice(itertools.count(2), None):
        if checkPrime(num):
            count += 1
        if count == 10001:
            break
    print("The 10001st prime is: %d" % num)
        

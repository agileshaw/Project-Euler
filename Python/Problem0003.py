# Problem0003 - Largest prime factor
# 
# https://github.com/agileshaw/Project-Euler

import math

if __name__ == "__main__":
    num = 600851475143
    flag = 0
    while (flag == 0):
        x = 2
        while (num % x != 0 and x < num) :
            x += 1
        if (num % x == 0):
            num /= x
            factor = x
        else:
            flag = 1
    print("The largest prime factor is: %d" % factor)

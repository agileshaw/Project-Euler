# Problem0004 - Largest palindrome product
#
# https://github.com/agileshaw/Project-Euler

import math

if __name__ == "__main__":
    result = 0
    for i in range(100, 999):
        for j in range(i, 999):
            num = i * j
            if (str(num) == str(num)[:: -1]) and (result < num):
                result = num
    print("The largest palindrome product is: %d" % result)

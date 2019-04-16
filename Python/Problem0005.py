# Problem0005 - Smallest multiple
#
# https://github.com/agileshaw/Project-Euler

import math

if __name__ == "__main__":
    result = 1
    for i in range(1, 21):
        result = (result * i) // math.gcd(result, i)
            
    print("The smallest multiple is: %d" % result)

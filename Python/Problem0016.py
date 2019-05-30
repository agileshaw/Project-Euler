# Problem0016 - Power digit sum
#
# https://github.com/agileshaw/Project-Euler

if __name__ == "__main__":
    num = 2 ** 1000
    result = 0
    while num > 0:
        digit = num % 10
        result += digit
        num //= 10
    print("The sum of the digits is: %d" % result)

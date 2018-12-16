# Problem0001 - Multiples of 3 and 5
#
# https://github.com/agileshaw/Project-Euler


if __name__ == "__main__":
    total = sum(x for x in range(0, 1000) if (x % 3 == 0 or x % 5 == 0))
    print("The sum is: %d" % total)
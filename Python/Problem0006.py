# Problem0006 - Sum square difference
#
# https://github.com/agileshaw/Project-Euler

if __name__ == "__main__":
    sum = 0
    tmp = 0
    for i in range (1, 101):
        sum += i * i
        tmp += i
    square = tmp * tmp
    difference = abs(square - sum)
    print("The difference is: %d" % difference)
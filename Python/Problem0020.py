# Problem0020 - Factorial digit sum
#
# https: // github.com/agileshaw/Project-Euler

def digitSum(num):
    result = 0
    while num:
        result, num = result + num % 10, num // 10
    return result

if __name__ == "__main__":
    factorial = 1
    for i in range (1, 101):
        factorial *= i
    result = digitSum(factorial)
    print("The factorial digit sum is: %d" % result)
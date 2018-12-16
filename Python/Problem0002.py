# Problem0002 - Even Fibonacci numbers
#
# https: // github.com/agileshaw/Project-Euler

if __name__ == "__main__":
    tmp1 = 0
    tmp2 = 1
    fib = tmp1 + tmp2
    limit = 4000000
    total = 0

    while fib < limit:
        if fib % 2 == 0:
            total += fib
        tmp1, tmp2 = tmp2, fib
        fib = tmp1 + tmp2       
    print("The sum is: %d" % total)

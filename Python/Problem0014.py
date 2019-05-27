# Problem0014 - Longest Collatz sequence
#
# https://github.com/agileshaw/Project-Euler

def collatz(num):
    tmp = num
    count = 0
    while (tmp != 1):
        if tmp % 2 == 0:
            tmp /= 2
        else:
            tmp = 3 * tmp + 1
        count += 1
    return count

if __name__ == "__main__":
    most = 0
    for i in range(2, 1000000):
        count = collatz(i)
        if count > most:
            most = count
            result = i
    print("The number which generates the longest collatz sequence is: %d" % result)

# Problem0009 - Special Pythagorean triplet
#
# https://github.com/agileshaw/Project-Euler


def product():
     for i in range(1000):
        for j in range(i+1, 1000):
            for k in range(j+1, 1000):
                if i*i + j*j == k*k and i + j + k == 1000:
                    return i * j * k

if __name__ == "__main__":
    result = product()
    print("The product of the special pythagorean triplet is: %d" % result)

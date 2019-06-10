# Problem0018 - Maximum path sum I
#
# https://github.com/agileshaw/Project-Euler

if __name__ == "__main__":
    
    for i in range(len(num)-2, -1, -1):
        for j in range(i+1):
            num[i][j] += max(num[i+1][j], num[i+1][j+1])

    print("The maximum path sum is: %d" % num[0][0])

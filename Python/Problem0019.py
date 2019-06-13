# Problem0019 - Counting Sundays
#
# https: // github.com/agileshaw/Project-Euler

def totalDays(month, year):
    month_list = [4, 6, 9, 11]
    if month == 2:
        if year % 400 == 0 or ((year % 4 == 0) and year % 100 != 0):
            return 29
        else:
            return 28
    elif month in month_list:
        return 30
    return 31

if __name__ == "__main__":
    count = 0
    weekday = 0
    for year in range(1900, 2001):
        for month in range(1, 13):
            for day in range(1, totalDays(month, year)+1):
                weekday = (weekday + 1) % 7
                if weekday == 0 and day == 1 and year != 1900:
                    count += 1
    print("The total number of Sundays is: %d" % count)

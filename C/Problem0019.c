/**
 * Problem0019 - Counting Sundays
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>

int totalDays (int month, int year)
{
    if (month == 2) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
            return 29;
        } else
            return 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;

    return 31;
}

int main() 
{
    int count = 0, weekday = 0, month, year, day;

    for (year = 1900; year <= 2000; year++) {
        for (month = 1; month <= 12; month++) {
            for (day = 1; day <= totalDays(month, year); day++) {
                weekday = (weekday + 1) % 7;
                if (weekday == 0 && day == 1 && year != 1900) //excluding year 1900
                    count++;
            }
        }
    }

    printf("The total number of Sundays is: %d\n", count);

    return 0;
}

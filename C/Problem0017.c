/**
 * Problem0017 - Number letter counts
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>
#include <string.h>

unsigned long long letterCount (int num)
{
	char below_twenty[20][10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", 
						"nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", 
						"seventeen", "eighteen", "nineteen"};
	char below_hundred[20][10] = {"", "", "twenty", "thrity", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	char more[20][10] = {"hundred", "thousand", "and"};

	unsigned long long count;

	if (num < 20)
		count = strlen(below_twenty[num]);
	else if (num < 100)
		count = strlen(below_hundred[num/10]) + letterCount(num%10);
	else if (num < 1000) {
		count = strlen(below_twenty[num/100]) + strlen(more[0]) + letterCount(num%100);
		if (num % 100 != 0)
			count += strlen(more[2]);
	}
	else if (num == 1000)
		count = strlen(below_twenty[1]) + strlen(more[1]);

	return count;
}

int main ()
{
	int i;
	unsigned long long result = 0;

	for (i = 1; i <= 1000; i++)
		result += letterCount(i);

	printf("The number letter counts is: %llu\n", result);

	return 0;
}
/**
 * Problem0067 - Maximum path sum II
 * 
 * https://github.com/agileshaw/Project-Euler
 **/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int main()
{
    int num[100][100];
    int i = 0, j = 0;

    FILE *f = fopen("p067_triangle.txt", "r");
    if (f != NULL) {
        char line[BUFSIZ];

        while (fgets(line, sizeof line, f) != NULL) {
            char *start = line;
            char *end;
            j = 0;
            
            while ((start = strpbrk(start, "0123456789")) != NULL) {
                num[i][j] = strtol(start, &end, 0);
                j++;
                start = end;
            }
            i++;
        }

        for (i = 98; i >= 0; i--) {
            for (j = 0; j <= i; j++)
                num[i][j] += MAX(num[i + 1][j], num[i + 1][j + 1]);
        }
    }

    printf("The maximum path sum is: %d\n", num[0][0]);

    return 0;
}

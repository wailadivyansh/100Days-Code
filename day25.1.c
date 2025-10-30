/*Write a program to print the following pattern:
5
45
345
2345
12345*/
#include <stdio.h>

int main() {
    int i, j, start;

    for (i = 5; i >= 1; i--) {      // controls the starting number for each row
        start = i;
        for (j = start; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");               // move to next line
    }

    return 0;
}

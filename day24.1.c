/*Write a program to print the following pattern:
*
**
***
****
******/
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {        // controls number of rows
        for (j = 1; j <= i; j++) {    // prints stars in each row
            printf("*");
        }
        printf("\n");                 // move to next line
    }

    return 0;
}

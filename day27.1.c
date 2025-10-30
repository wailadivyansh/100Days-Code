/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
* */
#include <stdio.h>

int main() {
    int i, j;

    // Upper half of diamond
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of diamond
    for(i = 4; i >= 1; i--) {
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

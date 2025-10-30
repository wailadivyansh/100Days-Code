/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*  */
#include <stdio.h>

int main() {
    int i;

    // First part
    printf("*\n\n");

    // Second part
    for (i = 1; i <= 2; i++) {
        printf("*\n");
    }
    printf("\n");

    // Third part
    for (i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n");

    // Fourth part
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Fifth part
    printf("*\n");

    return 0;
}

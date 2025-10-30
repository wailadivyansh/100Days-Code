/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
#include <stdio.h>

int main() {
    int i, j, space, start;

    for (i = 5; i >= 1; i--) {          // outer loop for rows
        for (space = 1; space < i; space++) {
            printf(" ");                 // print leading spaces
        }
        start = i;
        for (j = start; j <= 5; j++) {
            printf("%d", j);             // print numbers
        }
        printf("\n");                    // move to next line
    }

    return 0;
}

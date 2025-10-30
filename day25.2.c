/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */
   #include <stdio.h>

int main() {
    int i, j, space;

    for (i = 5; i >= 1; i--) {           // outer loop for rows
        for (space = 5; space > i; space--) {
            printf(" ");                  // print leading spaces
        }
        for (j = 1; j <= i; j++) {
            printf("*");                  // print stars
        }
        printf("\n");                     // move to next line
    }

    return 0;
}

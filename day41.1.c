//Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);  // Simple for small programs; use fgets() in real cases

    // Loop until null character '\0' is found
    for(i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Total number of characters = %d\n", count);

    return 0;
}

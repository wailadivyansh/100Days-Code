//Reverse a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, temp;

    printf("Enter a string: ");
    gets(str);  // For simple input; use fgets() for safety in real programs

    // Find the length of the string manually
    while (str[len] != '\0') {
        len++;
    }

    // Reverse the string using swapping
    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

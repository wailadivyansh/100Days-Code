//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a lowercase string: ");
    gets(str);  // Use fgets() instead of gets() in real programs for safety

    for(i = 0; str[i] != '\0'; i++) {
        // Check if character is lowercase alphabet
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase (ASCII trick)
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}

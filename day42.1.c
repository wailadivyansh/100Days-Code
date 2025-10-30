//Count vowels and consonants in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);  // For simplicity; use fgets() for safer input in real projects

    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if character is an alphabet
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert to lowercase for easier checking
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
               ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("\nNumber of vowels: %d", vowels);
    printf("\nNumber of consonants: %d\n", consonants);

    return 0;
}

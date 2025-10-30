//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};  // To store frequency of each digit (0–9)
    int digit, max = 0, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if(num < 0)
        num = -num;

    // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d\n", maxDigit);
    printf("It appears %d times.\n", max);

    return 0;
}

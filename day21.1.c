//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);
    digits = (int)log10(num) + 1;
    first = num / pow(10, digits - 1); 
    last = num % 10;                   


    if (digits == 1) {
        printf("Swapped number = %d\n", num);
        return 0;
    }

    swappedNum = last * pow(10, digits - 1) + (num % (int)pow(10, digits - 1) / 10) * 10 + first;

    printf("Number after swapping first and last digits = %d\n", swappedNum);

    return 0;
}

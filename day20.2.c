//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long int binary, onesComp = 0;
    int bit, place = 1;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while (binary != 0) {
        bit = binary % 10;          
        if (bit == 0)
            bit = 1;                
        else
            bit = 0;                

        onesComp = onesComp + bit * place;
        place *= 10;
        binary /= 10;
    }

    printf("1's complement = %ld\n", onesComp);

    return 0;
}

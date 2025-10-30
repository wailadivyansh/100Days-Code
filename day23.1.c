//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int i, n;
    float numerator = 2, denominator = 3, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;      // Numerator increases by 2
        denominator += 4;    // Denominator increases by 4
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}

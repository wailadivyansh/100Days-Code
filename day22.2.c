//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int i, n;
    float numerator = 1, denominator = 2, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;     // increases by 2 each term
        denominator += 2;   // increases by 2 each term
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}

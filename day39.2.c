//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input the matrix
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    for(i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Display the matrix
    printf("\nMatrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the sum
    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}

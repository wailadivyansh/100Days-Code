//Multiply two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int i, j, k;

    // Input matrix sizes
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible! (Columns of first != Rows of second)\n");
        return 0;
    }

    int a[r1][c1], b[r2][c2], result[r1][c2];

    // Input elements for first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    // Input elements for second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    // Initialize result matrix to 0
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++)
            result[i][j] = 0;

    // Matrix multiplication
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display the result
    printf("\nResultant Matrix (A x B):\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

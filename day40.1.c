//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display matrix
    printf("\nMatrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Diagonal Traversal (main + upper + lower diagonals)
    printf("\nDiagonal Traversal:\n");

    // Traverse diagonals starting from first row
    for(int k = 0; k < n; k++) {
        i = 0;
        j = k;
        while (j >= 0 && i < n) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Traverse diagonals starting from last column (excluding main diagonal)
    for(int k = 1; k < n; k++) {
        i = k;
        j = n - 1;
        while (i < n && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}

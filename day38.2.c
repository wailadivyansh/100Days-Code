//Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, i, j, symmetric = 1;

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

    // Check for symmetry
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if(!symmetric)
            break;
    }

    // Print the result
    if(symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}

//Delete an element from an array.
#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];  // Assuming max 100 elements

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Check for valid position
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the left to fill the gap
    for(i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // Reduce the array size by 1

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

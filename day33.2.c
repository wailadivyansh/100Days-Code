//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, i, j, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];  // Assuming max 100 elements
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the position to insert
    for(i = 0; i < n; i++) {
        if(arr[i] > element) {
            break;
        }
    }

    // Shift elements to the right
    for(j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    // Insert the element
    arr[i] = element;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

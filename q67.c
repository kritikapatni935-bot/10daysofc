//7: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int arr[100], n, i, pos, key;

    // Input array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and element
    printf("Enter position (1-based) and element to insert: ");
    scanf("%d %d", &pos, &key);

    // Check if position is valid
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right to make space
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos - 1] = key;
    n++;  // increase size

    // Print updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

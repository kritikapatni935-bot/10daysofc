//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Second largest element does not exist.\n");
        return 1;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = second = -99999;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == -99999)
        printf("Second largest element does not exist\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}


#include <stdio.h>

int main() {
    int n = 5;

    // Upper half (including middle)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (2 * i + 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (excluding middle)
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < (2 * i + 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


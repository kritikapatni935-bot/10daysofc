
#include <stdio.h>

int main() {
    int layers = 4;  // Number of layers in the widest row
    int i, j;

    // Print top half including middle row
    for(i = 1; i <= layers; i++) {
        // Print spaces
        for(j = 1; j <= layers - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print bottom half excluding middle row
    for(i = layers - 1; i >= 1; i--) {
        // Print spaces
        for(j = 1; j <= layers - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

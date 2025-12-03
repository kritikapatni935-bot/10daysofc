//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>

int main() {
    // Define enum for status codes
    enum Status {SUCCESS, FAILURE, TIMEOUT};

    // Example input: set current status
    enum Status status = FAILURE;

    // Print message based on status
    switch (status) {
        case SUCCESS:
            printf("Operation succeeded\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Unknown status\n");
    }

    return 0;
}

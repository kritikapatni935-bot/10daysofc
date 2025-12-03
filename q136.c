Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main() {
    char choice[10];
    int num1, num2;
    enum Operation op;

    // Read input
    scanf("%s %d %d", choice, &num1, &num2);

    // Convert string to enum
    if (strcmp(choice, "ADD") == 0)
        op = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0)
        op = SUBTRACT;
    else if (strcmp(choice, "MULTIPLY") == 0)
        op = MULTIPLY;
    else {
        printf("Invalid choice");
        return 0;
    }

    // Perform operation
    switch (op) {
        case ADD:
            printf("%d", num1 + num2);
            break;

        case SUBTRACT:
            printf("%d", num1 - num2);
            break;

        case MULTIPLY:
            printf("%d", num1 * num2);
            break;
    }

    return 0;
}

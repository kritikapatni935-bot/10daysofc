//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <string.h>

int main() {
    char num[50];
    scanf("%s", num);

    int len = strlen(num);

    // Swap first and last digit
    char temp = num[0];
    num[0] = num[len - 1];
    num[len - 1] = temp;

    printf("%s", num);

    return 0;
}

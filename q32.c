//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    int n, original, reversed = 0;
    scanf("%d", &n);

    original = n; // store original number

    while (n > 0) {
        int digit = n % 10;         // extract last digit
        reversed = reversed * 10 + digit;  // build reversed number
        n = n / 10;                 // remove last digit
    }

    if (original == reversed)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}




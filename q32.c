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




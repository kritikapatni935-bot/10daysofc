//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    len = strlen(str);

    printf("All substrings:\n");
    for(i = 0; i < len; i++) {
        for(j = 1; j <= len - i; j++) {
            for(int k = i; k < i + j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}


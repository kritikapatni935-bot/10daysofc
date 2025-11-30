//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main() {
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';       

            if (j > maxLen) {
                maxLen = j;
                int k;
                for (k = 0; k < j; k++) {
                    longest[k] = word[k];
                }
                longest[j] = '\0';
            }

            j = 0;
        }

        if (str[i] == '\0' || str[i] == '\n') {
            break;
        }
    }

    printf("Longest word: %s", longest);

    return 0;
}

//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    char *word;
    char lastWord[50];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    
    char temp[100];
    strcpy(temp, name);
    word = strtok(temp, " ");
    while(word != NULL) {
        strcpy(lastWord, word);
        word = strtok(NULL, " ");
    }


    word = strtok(name, " ");
    while(word != NULL) {
        if(strcmp(word, lastWord) != 0) {
            printf("%c.", toupper(word[0]));
        } else {
            break;
        }
        word = strtok(NULL, " ");
    }


    printf(" %s", lastWord);

    return 0;
}

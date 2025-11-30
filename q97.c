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
    int i;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    
    name[strcspn(name, "\n")] = '\0';


    printf("Output: ");
    for (i = 0; name[i] != '\0'; i++) {
        if (i == 0 || (name[i-1] == ' ' && name[i] != ' ')) {

            int j = i;
            int isLast = 1;
            while(name[j] != '\0') {
                if(name[j] == ' ')
                    isLast = 0;
                j++;
            }

            if (!isLast) {
                printf("%c.", toupper(name[i]));
            } else {
                break;
            }
        }
    }


    char *lastWord = strrchr(name, ' ');
    if (lastWord != NULL) {
        printf(" %s", lastWord + 1);
    }

    return 0;
}

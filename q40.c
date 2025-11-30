#include <stdio.h>

int main() {
    char bin[100];
    scanf("%s", bin);

    // Flip each bit
    for(int i = 0; bin[i] != '\0'; i++) {
        if(bin[i] == '0')
            bin[i] = '1';
        else if(bin[i] == '1')
            bin[i] = '0';
    }

    printf("%s", bin);
    return 0;
}

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

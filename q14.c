#include<stdio.h>
int main(void){
    char n;

    printf("enter a character:");
    scanf("%c",&n);
    if(n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
    {
        printf("%c is a vowel",n);

    }
    else
    {
        printf("%c is a consonant",n);

    }
}

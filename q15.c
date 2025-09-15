#include<stdio.h>
int main(void)
{
char ch;
printf("enter the string: ");
scanf("%c",&ch);
if(ch >= 'A' && ch <= 'Z')
{
    printf("it is a uppercase letter\n");
}
else if(ch >= 'a' && ch <= 'z')
{
    printf("it is a lowercase letter\n");

}
else
{
    printf("it is a special cahracter");
}
}


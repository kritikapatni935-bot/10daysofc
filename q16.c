#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three values: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a > b && b > c)
    {
        printf("%d is the largest number",a);
    }
    else if(b > a && a > c)
    {
        printf("%d is greatest",b);
    }
    else
    {
        printf("%d is the greatest",c);
    }
    return 0;
}

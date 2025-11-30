#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            printf(" ");
        }
        for(j=i;j<6;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

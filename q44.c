#include<stdio.h>
int main()
{
    int n,i;
    float sum=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
float num=2*i-1;
float dem=num+1;
sum=sum+num/dem;
    }
    printf("%.1f is the sum",sum);
    return 0;
}

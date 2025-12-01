//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

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

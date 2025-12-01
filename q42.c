//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the numebr:");
    scanf("%d",&n);
   int sum=0;
    for (int i=1;i<=n/2;i++)
    {
        if (n%i == 0)
        {
            sum = sum+i;
        }
    }
    if(sum == n)
    {
        printf("%d is the perfect number",n);

    }
    else
    {
        printf("%d is not perfect number",n);
    }
    return 0;
}

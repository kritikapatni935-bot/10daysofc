//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include<stdio.h>
int main()
{
    long long num;
    int digit,max=0,result=0;
    int count[10]={0};
    printf("enter a number:");
    scanf("%lld",&num);
    while(num>0)
    {
digit=num%10;
count[digit]++
num=num/10;
    }
    for(i=0;i<10;i++)
    {
        if(count[i]>max)
        {
            max= count[i];
            result=i;
        }
    }
    printf("%d is the maximun occurenece\n",result );
    return 0;
}

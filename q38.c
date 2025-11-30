//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>
int main(){
    long long n;
    printf("enter the number");
    scanf("%lld",&n);
    if(n<0){
        n=-n;
    }
    int digits[20];
    int count=0;
    while(n>0)
    {
        digits[count++]=n%10;
        n /= 10;

    }
    int product=0;

    for (int i=0;i<count;i++)
    {
        if(digits[i]/2==1){
            product=product*digits[i];

        }
    }
    printf("%d",product);
    return 0;
}
#include<stdio.h>
int main()
{
    long long n:
    printf("eneter thhe number");
    scanf("%lld",n);
    if(n<0)
    {
        n=-n;
    }
    int product=1;
    for(int i=0;i<count;i++)
    {
        if(digits[i]%2==1){
product=product*digits[i];

        }
    }
printf("%d",n);
return 0;
}


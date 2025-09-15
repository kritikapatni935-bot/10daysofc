#include<stdio.h>
int main(void){
int n;
printf("enter the value: ");
scanf("%d",&n);
if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
{
    printf("%d the year is a leap year",n);

}
else
{
    printf("the year is not leap year");

}
}


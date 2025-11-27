#include<stdio.h>
int main()
{int n,sum=0;
printf("enter the number:");
scanf("%d",&n);
for (int i = 1,count = 0;count < n; i += 2,count++)
{
sum=sum+i;

}
printf("%d",sum);
return 0;
}

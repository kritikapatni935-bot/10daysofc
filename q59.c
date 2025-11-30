#include<stdio.h>
int main()
{
    int arr[100],i,n,sum=0;
    printf("enter the number of elemenet:");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
scanf("%d",&arr[i]);
sum=sum+arr[i];


    }
    printf("%d is sum",sum);
    return 0;

}

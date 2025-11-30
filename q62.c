//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include<stdio.h>
int main()
{
    int arr[100],i,n,temp;
    printf("enter the number of element in the array:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    arr[0]=arr[n-1];
    arr[n-1]=temp;
    for (i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;

}

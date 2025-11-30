//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include<stdio.h>
int main()
{
    int a[50],b[50],i,n1,n2,merged[100];
printf("enter the element of first array");
scanf("%d",&n1);
printf("enter element");
for(i=0;i<n1;i++)
{
    scanf("%d",&a[i]);
    merged[i]=a[i];
}
printf("enter size of 2nd element:");
scanf("%d",&n2);
printf("enter the element of 2nd array");
for (i=0;i<n2;i++)
{
    scanf("%d",&b[i]);
    merged[n1+i]=b[i];
}
printf("merged array");
for(i=0;i<n1+n2;i++)
{
    printf("%d",merged[i]);
}
        printf("\n");
return 0;
    }

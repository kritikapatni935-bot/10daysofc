//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include<stdio.h>
int main()
{
    int arr[100],n,i,key,found=0,index=-1;
    printf("enter the number of element:");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elemnt want to sreach");
    scanf("%d",&key);

    for(i=0;i<=arr[i];i++)
    {
        if(arr[i]==key)
        {
            found=1;
            index=i;
        }
    }
    if(found)
    printf("index is %d",index);
    else
    printf("-1");//not found
    return 0;
}

#include<stdio.h>
int main()
{
    int num;
    printf("enter the value: ");
    scanf("%d",&num);
    if(num > 0)
    {
        printf("%d is positive integer",num);
    }
    else if(num == 0){
        printf("%d is zero",num);

    }
    else{
        printf("%d is negetive integer",num);
    }
    return 0;
}

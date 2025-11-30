#include<stdio.h>
int main()
{
    int n,i=2,j;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        isprime=1;
        j=2;
        while(j<=i/2)
        {
            if(i%j==0){
                isprime=0;
                break;
            }
            j++
        }
        if(isprime)
        {
            printf("%d",i);
            i++;
        }
        return 0;
    }

}

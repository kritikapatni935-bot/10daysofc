
#include <stdio.h>
int main()
{
    int n;
    printf("enter the numebr:");
    scanf("%d",&n);
   int sum=0;
    for (int i=1;i<=n/2;i++)
    {
        if (n%i == 0)
        {
            sum = sum+i;
        }
    }
    if(sum == n)
    {
        printf("%d is the perfect number",n);

    }
    else
    {
        printf("%d is not perfect number",n);
    }
    return 0;
}

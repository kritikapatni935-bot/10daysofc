#include <stdio.h>
int main()
{
    int n, pro = 1;
    printf("enter the number:");
    scanf("%d", &n);
    for (int i = 2,count = 0; count < n;i += 2)
    {
        pro = pro * i;
        count++;
    }
    printf("%d", pro);
    return 0;
}

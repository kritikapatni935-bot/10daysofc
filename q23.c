#include <stdio.h>
int main()
{
    int days, fine;
    printf("enter days:");
    scanf("%d", &days);
    if(days <= 5)
    {
        fine = days * 2;
        printf("%d",fine);
    }
    else if(days > 5 && days <= 10)
    {
        fine=days*4;
        printf("%d\n",fine);
    }
    else if(days > 10 && days <= 30)
    {
    fine=days*6;
    printf("%d",fine);
    }
    else
    {
        printf("membership cancelled");

}
return 0;
}

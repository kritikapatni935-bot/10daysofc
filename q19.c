#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three values: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a == b && b == c)
    {
        printf("tranigle is equilateral");
    }
    else if(a != b && b != c && c != a)
    {
        printf("traingle is scalene");

    }
    else{
        printf("traingle is isosclese");
    }
    return 0;
}

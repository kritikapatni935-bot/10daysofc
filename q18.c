#include<stdio.h>
int main()
{
    int grade;
    printf("enter the grade: ");
scanf("%d",&grade);
if(grade >= 90 && grade <= 100 )
{
    printf("grade A");
}
else if(grade >= 80 && grade <= 89)
{
    printf("grade B");
}
else if(grade >= 70 && grade <= 79)
{
    printf("grade C");
}
else if(grade >= 60 && grade <= 69 )
{
    printf("grade D");
}
else
{
    printf("grade F");
}
return 0;
}

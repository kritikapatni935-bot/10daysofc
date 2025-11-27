#include<stdio.h>
int main()
{
   int months;
   printf("enter values(1-12): " );
   scanf("%d",&months);
   switch(months)
   {
    case 1:
    printf("january,31 days\n" );
    break;
    case 2:
    printf("february,28days\n");
    break;
    case 3:
    printf("marach,31days\n");
    break;
    case 4:
    printf("april,30days\n");
    break;
    case 5:
    printf("may,31days\n");
    break;
    case 6:
    printf("june,30days\n");
    break;
    case 7:
    printf("july,31days\n");
    break;
    case 8:
    printf("august ,31days\n");
    break;
    case 9:
    printf("september,30days\n");
    break;
    case 10:
    printf("october,31days\n");
    break;
    case 11:
    printf("november,30days\n");
    break;
    case 12:
    printf("december,31days\n");
    break;
    default :
    printf("no month");
    break;

   }
return 0;
}

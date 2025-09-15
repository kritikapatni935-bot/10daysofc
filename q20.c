#include<stdio.h>
int main()
{
int days;
printf("enter values(1-7): ");
scanf("%d",&days);
switch(days)
{
case 1:
printf("monday");
break;
case 2:

printf("tuesday");
break;
case 3:
printf("wednesday");
break;
case 4:
printf("thursday");
break;
case 5:
printf("friday");
break;
case 6:
printf("saturday");
break;
case 7:
printf("sunday");
break;
default:
printf("no days");
break;}
return 0;}

#include<stdio.h>
int main()
{
 int cp,sp,munafa;
 printf("enter the values:");
 scanf("%d %d",&cp,&sp);
if(cp >> sp )
{
    munafa=((cp - sp)*100)/cp;
    printf("loss");
    printf("%d%%\n ",munafa);

}
else{
    munafa=((sp - cp)*100);
    printf("profit");
    printf("%d%%\n ", munafa);
}
return 0;
}

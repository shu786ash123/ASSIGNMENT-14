#include<stdio.h>
int main()
{
       int a[10],i;
       printf("ENTER 10 NUMBER:  \n");
       for(i=0;i<=9;i++)
       {
              scanf("%d",&a[i]);
       }
       printf("REVERSE ORDER IS :   \n");
  for(i=9;i>=0;i--)
  {
       printf("%d   ",a[i]);
}
return 0;
}

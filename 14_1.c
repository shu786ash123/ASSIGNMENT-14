#include<stdio.h>
int main()
{
       int sum=0,a[10],i;
       printf("ENTER 10 NUMBERS:  \n");
       for(i=0;i<=9;i++)
       {
              scanf("%d",&a[i]);
              sum = sum + a[i];
       }
       printf("SUM OF 10 NUMBER IS:  %d",sum);
       return 0;
}

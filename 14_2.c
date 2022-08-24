#include<stdio.h>
int main()
{
       int a[10],i;
       float sum=0;
       printf("ENTER 10 NUMBERS:  \n");
       for(i=0;i<=9;i++)
       {
              scanf("%d",&a[i]);
              sum = sum + a[i];
       }
       printf("AVERAGE OF 10 NUMBER IS:  %.2f",sum/10);
       return 0;
}


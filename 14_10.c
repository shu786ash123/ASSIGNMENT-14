
#include<stdio.h>
int main()
{
       int a[10],b[10],i;
       printf("ENTER 10 NUMBER:  \n");
       for(i=0;i<=9;i++)
       {
              scanf("%d",&a[i]);
       }
       for(i=0;i<=9;i++)
       {
              b[i]=a[i];
       printf("%d  ",b[i]);
       }
}

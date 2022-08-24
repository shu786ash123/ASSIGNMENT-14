#include<stdio.h>
int main()
{
       int a[10],i,max=-99999;
       printf("ENTER 10 NUMBERS:  \n");
       for(i=0;i<=9;i++)
              scanf("%d",&a[i]);
       for(i=0;i<=9;i++)
       {
              if(max<a[i])
                     max = a[i];
       }
  printf("GREATEST NUMBER IS %d",max);
        return 0;

}

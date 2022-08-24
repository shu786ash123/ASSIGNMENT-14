#include<stdio.h>
int main()
{
       int a[10],i,max;
       printf("ENTER 10 NUMBERS:  \n");
       for(i=0;i<=9;i++)
              scanf("%d",&a[i]);
              max = a[0];
       for(i=0;i<=9;i++)
       {
              if(max>a[i+1])
                     max = a[i+1];
       }
  printf("SMALLEST NUMBER IS %d",max);
        return 0;

}


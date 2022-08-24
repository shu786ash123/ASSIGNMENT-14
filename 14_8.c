#include<stdio.h>
int main()
{
       int j,temp,a[10],i;
       printf("ENTER 10 NUMBER:  \n");
       for(i=0;i<=9;i++)
       {
              scanf("%d",&a[i]);
       }
              for(i=0;i<=8;i++)
              {
                     for(j=i+1;j<=9;j++)
                     {
                       if(a[i]>a[j])
                     {
                            temp = a[i];
                            a[i] = a[j];
                            a[j]=temp;

                     }
              }
}
printf("SECOND SMALLEST NUMBER IS :  \n%d",a[1]);
return 0;
}


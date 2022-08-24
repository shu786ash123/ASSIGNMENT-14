#include<stdio.h>
int main()
{
       int se=0,so=0,a[10],i;
       printf("ENTER 10 NUMBER:  \n");
       for(i=0;i<=9;i++)
       {
              scanf("%d",&a[i]);
       }
              for(i=0;i<=9;i++)
              {
                     if(a[i]%2==0)
                            se = se+a[i];
                     else
                            so = so+a[i];
              }
       printf("SUM OF ALL EVEN NUMBER IS:  %d\n",se);
       printf("SUM OF ALL ODD NUMBER IS:  %d\n",so);
       return 0;
}

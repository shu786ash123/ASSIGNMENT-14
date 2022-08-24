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
for(i=0;i<=9;i++)
{
       printf("%d  ",a[8]);

}
return 0;
}

#include <stdio.h>
int main()
{
     int rows =5;
     for(int i=1;i<=5;i++)
     {
        for(int j=1; j<=i;j++)
        {
           printf(" ");
        }
        for(int j=5-i; j>=1; j--)
        {
           printf("%d",i);
           if(j!=1)
           {
           }
        }
        printf("\n");
     }
     return 0;
}             

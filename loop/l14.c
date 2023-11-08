#include <stdio.h>
int main ()
{
     int i,j,a;
     a=1;
     for(i=5;i>=1;i--)
     { 
        for(j=1;j<=a;j++)
        {
           printf("%d",i);
        }
        a++;
        printf("\n");
     }
     return 0;
}        
     
     

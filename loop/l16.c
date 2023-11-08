#include <stdio.h>
int main()
{
    int i,j,a;
    a=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=(2*i-1);j++)
        {
            printf("%d",a);
        
        a++;
        }
        printf("\n");
     }
     return 0;
}            
    
    

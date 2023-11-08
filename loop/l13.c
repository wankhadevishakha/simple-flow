#include <stdio.h>
int main()
{
    int i,j;
    for(int i=1;i<=5;i++);
    { 
        for(int j=1;j<=i;j++);
        {
          int a=1;
          scanf("%d",&a);
            printf("%d",a);
           a++;
        }   
        printf("\n");
    }
    return 0;
}    

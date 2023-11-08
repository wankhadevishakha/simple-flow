#include <stdio.h>
int main ()
{
    int n,sum;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    sum=0;
    for(int i=1;i<=n;i++)
    {
       int A;
       printf("Enter input A : ");
       scanf("%d", &A);
       sum=sum+A;
    
       printf("sum = %d\n", sum);
      } 
      printf("\n");
    return 0;
}    

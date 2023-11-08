#include <stdio.h>
int main ()
{
    int n,prod;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    prod=1;
    for(int i=1;i<=n;i++)
    {
       int A;
       printf("Enter input A : ");
       scanf("%d", &A);
       prod=prod*A;
    
       printf("Product = %d\n", prod);
      } 
      printf("\n");
    return 0;
}    

#include <stdio.h>
int main()
{
   int N;
   printf("Enter the value of N :-");
   scanf("%d",&N);
   for(int i = 5; i > 0; i--)
   {
      for(int j = 1; j <= i; j++)
      {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}
        
   

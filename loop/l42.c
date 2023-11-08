#include <stdio.h>
int main()
{
   int N;
   printf("Enter the value of N:-");
   scanf("%d",&N);
   int m = 1;
   int k = 1;
   for(int i = 1; i <= N; i++)
   {
      for(int j = 1; j <= i; j++)
      {
         printf("%d",k);
         k = k - 1;
      }
      printf("\n");
      m = m + 2;
      k = k + m;
   }      
   return 0;
}   

#include <stdio.h>
int main()
{
   int N;
   printf("Enter the value of N :-");
   scanf("%d",&N);
   for(int i = 5; i > 0; i--)
   {
      for(int j = i; j >= 1; j--)
      {
        printf("%d",j);
      }
      printf("\n");
   }   
   return 0;
}   

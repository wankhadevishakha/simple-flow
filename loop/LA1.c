#include <stdio.h>
int main()
{
   int N;
   printf("Enter the value of N :-");
   scanf("%d", &N);
   int sum = 0;
   for(int i = 1; i <= N; i++)
   {
    sum = sum + i;
   printf("%d",sum);
   printf("\n");
   }
   return 0;
}    

#include <stdio.h>
int main()
{
   int N;
   printf("Enter the value of N :-");
   scanf("%d", &N);
   int p,i=1,sum = 0;
   for(int c =1 ; c < N; c++)
   {
     if(c %3== 0)
     {
       p = i * i;
       sum = sum + p;
       i++;
       }
       }
       printf("%d",sum);
   return 0;
}     
     
   

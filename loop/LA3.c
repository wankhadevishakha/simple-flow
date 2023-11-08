#include <stdio.h>
int main()
{
   int N;
   printf("Enter the value of N :-");
   scanf("%d", &N);
   int c = 0;
   int i = 2;
   for(int sum = 0; sum < N; sum=sum+i)
    {
     if(i%2==0)
     {
     c = c++;
     i = i++;
     }
   printf("%d\n",sum);
   }
   return 0;
}     
     
   

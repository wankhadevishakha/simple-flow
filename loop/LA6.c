#include <stdio.h>
int main()
{
   int N;
   printf("Enter the value of N :-");
   scanf("%d",&N);
   for(int M = 2; M <= N; M++)
   {
      if(M % 2==0)
      {
        if(M % 7== 0)
        {
        printf("%d\n",M);
        }
      }
    }  
    return 0;
}  

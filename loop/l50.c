#include <stdio.h>
int main()
{
  int N;
  printf("Enter the value of N :-");
  scanf("%d",&N);
  for(int i = 5; i > 0; i--)
  {
      int p = 5;
      for(int j = 1; j <= p; j++)
      {
        if(i + j <= p)
        {
           printf(" ");
        }
        else{
        printf("*");
        }  
      } 
      printf("\n");
   }
   return 0;
}       

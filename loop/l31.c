#include <stdio.h>
int main()
{
    int row = 5;
    int p = 2;
       for (int i = 5; i >= 0; i--)
       {
          for(int j = 1; j<= 5; j++)
          {
           if(i + j <= 5)
           {
            printf(" ");
            }
            else
            printf("%d",p);
          }
          printf("\n");
          p = p + 2;
        }
        return 0;
}        
          

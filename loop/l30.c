#include <stdio.h>

int main() 
{
    int n = 3; 

    for (int i = 1; i <= n; i++)
     {
        
        for (int j = 0; j < n - i; j++) 
        {
            printf("    ");
        }

        for (int j = 0; j < 2 * i - 1; j++) 
        {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}

        
          

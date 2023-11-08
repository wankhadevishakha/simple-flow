#include <stdio.h>

int main() 
{
    int rows = 4;  
    for (int i = 0; i < 4; i++) 
    {
       for (int j = 0; j < i; j++) 
       {
            printf(" ");  
        }
         for (int j = 4 - i; j >= 1; j--) {
            printf("%d", j);
            if (j != 1) {
                
            }
        }
        
        printf("\n"); 
    }
    
    return 0;
}


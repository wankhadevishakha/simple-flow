#include <stdio.h>

int main() {
    int rows = 6; 

    for (int i = 0; i < rows; i++) 
    {
      
        for (int j = 0; j <= i; j++) 
        {
            printf("%2d ", j);
        }
        
        printf("\n");
    }

    return 0;
}


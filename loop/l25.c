#include <stdio.h>

int main() 
{
    int rows = 4; 

    for (int i = 0; i < 4; i++) 
    {
        
        for (int j = 0; j < i; j++) 
        {
            printf("   ");
        }

        
        for (int k = i; k < 4; k++) 
        {
            printf(" * ");
        }

        printf("\n");
    }

    return 0;
}


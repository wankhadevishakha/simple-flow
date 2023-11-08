#include <stdio.h>
int main() 
{
    int rows = 5;
     for (int i = 1; i <= rows; i++) 
     {
        for (int j = 1; j <= rows - i; j++) 
        {
            printf("   ");
        }
        for (int k = i; k >= 1; k--) 
        {
            printf("%2d ", k);
        }
        printf("\n");
    }

    return 0;
}


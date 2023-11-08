#include <stdio.h>

int main() 
{
    for (int i = 5; i > 0; i--) 
    {
        for (int j = 1; j <= i; j++) 
        {
            if (j == 1) 
            {
                printf("1");
            }
             else 
            {
                printf(" * %d", j);
            }
        }
        printf("\n");
    }
    return 0;
}



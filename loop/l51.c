#include<stdio.h>
int main() 
{
    int N = 6;

    for (int i = 0; i < N; i++) 
    {
        
        for (int j = 0; j < i; j++) 
        {
            printf("  "); 
        }

       
        for (int p = 0; p < N - i; p++) 
        {
            printf(" *  ");
        }

        printf("\n");
    }

    return 0;
}


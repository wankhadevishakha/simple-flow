#include <stdio.h>
int main()
{
    int n = 6;
    printf("0\n");
    int k = 2;

    for (int i = 2; i <= n; i++)
    {
        int p = k; 

        for (int j = 1; j <= i; j++) 
        {
            printf("%d", p);
            if (j < i) 
            {
                printf(" ");
            }
            p = p * 2;
        }

        printf("\n");
        k = k * 2;
    }
    return 0;
}


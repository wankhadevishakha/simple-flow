#include <stdio.h>

int main() {
    int rows = 4;
    int value = 1;

    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%2d ", value * value);
        }
        
        printf("\n");
        
        value++;
    }

    return 0;
}


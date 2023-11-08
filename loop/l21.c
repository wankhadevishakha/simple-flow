#include <stdio.h>

int main() 
{
    int counter;

    for (counter = 1; counter <= 100; counter++) 
    {
        if (counter > 50) 
        {
            break; 
        }

        if (counter % 2 == 0) 
        {
            continue;
        }

        printf("%d\n", counter);
    }

    return 0;
}


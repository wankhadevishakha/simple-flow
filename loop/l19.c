#include <stdio.h>

int main() {
    int rows = 5;  // Number of rows in the pattern
    int value = 1; // Starting value for the pattern

    for (int i = 1; i <= rows; i++) {
        // Print the repeated values
        for (int j = 1; j <= i; j++) {
            printf("%2d ", value);
        }
        
        printf("\n");
        
        value += 2; // Increment the value for the next row by 2
    }

    return 0;
}


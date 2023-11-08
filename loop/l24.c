#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    for (int i = 0; i < rows; i++) {
        // Print spaces before the numbers
        for (int space = 0; space < rows - i - 1; space++) {
            printf("   ");
        }

        // Print the numbers in decreasing order
        for (int j = i; j >= 0; j--) {
            printf("%2d ", j);
        }

        printf("\n");
    }

    return 0;
}


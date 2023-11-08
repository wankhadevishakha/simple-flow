#include <stdio.h>

// Function to print the matrix pattern
void printMatrixPattern(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            printf("%d ", i > j ? i : j);
        }
        printf("\n");
    }
}

int main() {
    int size;
    
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);
    
    printMatrixPattern(size);
    
    return 0;
}


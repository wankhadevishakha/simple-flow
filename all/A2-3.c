#include <stdio.h>
int 
int calculateHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM of two numbers using HCF
int calculateLCM(int a, int b) {
    int hcf = calculateHCF(a, b);
    int lcm = (a * b) / hcf;
    return lcm;
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate and display HCF and LCM
    printf("HCF of %d and %d is: %d\n", num1, num2, calculateHCF(num1, num2));
    printf("LCM of %d and %d is: %d\n", num1, num2, calculateLCM(num1, num2));

    return 0;
}

    

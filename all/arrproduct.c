// ques.calculate the product of all the elements in the given array.

#include <stdio.h>

int main() {
    int n, i;
    // Maximum size of the array, you can change it if needed
    int arr[100];
    long long product = 1; // Using long long to handle large products

    // Read the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // Calculate the product of all elements in the array
    for (i = 0; i < n; ++i) {
        product *= arr[i];
    }

    // Print the result
    printf("Product of all elements in the array: %lld\n", product);

    return 0;
}


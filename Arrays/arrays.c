#include <stdio.h>

// Function prototype
int sum(int arr[], int size);

int main() {
    int arr[10]; // Fixed-size array
    int si;

    // Take input for array size
    printf("Enter the size of array (max 10): ");
    scanf("%d", &si);

    // Validate size input
    if (si > 10 || si <= 0) {
        printf("Invalid size! Enter a value between 1 and 10.\n");
        return 1;
    }

    // Input array elements
    for (int i = 0; i < si; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display array
    printf("The array is: ");
    for (int i = 0; i < si; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Newline for cleaner output

    // Calculate sum
    int result1 = sum(arr, si);
    
    // Calculate average with float conversion
    float average = (float) result1 / si;

    // Display results
    printf("The sum of all elements of the array is: %d\n", result1);
    printf("The average of all elements of the array is: %.2f\n", average);

    return 0;
}

// Function to calculate sum
int sum(int arr[], int size) {
    if (size > 10) {
        return 0; // Return 0 instead of using `return;`
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
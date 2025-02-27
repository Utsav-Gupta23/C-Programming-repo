
// 69
#include <stdio.h>

// Function to check if an array is sorted
int sorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Array is NOT sorted
        }
    }
    return 1; // Array is sorted
}

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
    printf("\n");

    // Check if array is sorted
    int result = sorted(arr, si);
    
    // Print result
    if (result == 1) {
        printf("The array is sorted.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    return 0;
}


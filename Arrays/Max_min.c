#include <stdio.h>

// Function prototype using pointers
void max_min(int arr[], int size, int *max, int *min);

int main() {
    int arr[10]; // Fixed-size array
    int si, max, min;

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

    // Find max and min
    max_min(arr, si, &max, &min);

    // Display results
    printf("The maximum element is: %d\n", max);
    printf("The minimum element is: %d\n", min);

    return 0;
}

// Function to find max and min using a single loop
void max_min(int arr[], int size, int *max, int *min) {
    *max = arr[0];  // Initialize max with first element
    *min = arr[0];  // Initialize min with first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i]; // Update max if a larger value is found
        }
        if (arr[i] < *min) {
            *min = arr[i]; // Update min if a smaller value is found
        }
    }
}

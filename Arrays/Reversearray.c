#include <stdio.h>

// Function to reverse an array in-place
void reverse_array(int arr[], int size);

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

    // Display the original array
    printf("The original array is: ");
    for (int i = 0; i < si; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call function to reverse array
    reverse_array(arr, si);

    // Display the reversed array
    printf("The reversed array is: ");
    for (int i = 0; i < si; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Function to reverse an array in-place
void reverse_array(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

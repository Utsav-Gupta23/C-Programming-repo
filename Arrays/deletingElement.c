#include <stdio.h>

// Function prototype
int deleteElement(int arr[], int size, int element);

int main() {
    int arr[10]; // Fixed-size array
    int si, ele;

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
    printf("The array is: ");
    for (int i = 0; i < si; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Take input for the element to delete
    printf("Enter the element you want to delete: ");
    scanf("%d", &ele);

    // Call deleteElement function
    si = deleteElement(arr, si, ele);

    // Display the modified array
    printf("The array after deletion is: ");
    for (int i = 0; i < si; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Function to delete an element by shifting elements left
int deleteElement(int arr[], int size, int element) {
    int i, pos = -1;

    // Find the position of the element
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }

    // If element is not found, return the same size
    if (pos == -1) {
        printf("Element not found in array.\n");
        return size;
    }

    // Shift elements left to remove the element
    for (i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return size - 1; // Reduce array size by 1
}

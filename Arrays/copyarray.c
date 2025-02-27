#include <stdio.h>

// Function prototypes
void copy_arr(char arr[], int size, char new_arr[]);
void input_Arr(char arr[], int size);
void display_Array(char arr[], int size);

int main() {
    char arr[10];       // Original array
    char new_arr[10];   // New array to copy elements
    int size;

    printf("Welcome to copying an array using pointer arithmetic\n");

    // Take input for array size
    printf("Enter the size of array (max 10): ");
    scanf("%d", &size);

    // Validate size input
    if (size > 10 || size <= 0) {
        printf("Invalid size! Enter a value between 1 and 10.\n");
        return 1;
    }

    // Input array elements
    input_Arr(arr, size);

    // Display original array
    printf("The original array is: ");
    display_Array(arr, size);

    // Copy array
    copy_arr(arr, size, new_arr);

    // Display copied array
    printf("The copied array is: ");
    display_Array(new_arr, size);

    return 0;
}

// Function to input elements into the array
void input_Arr(char arr[], int size) {
    printf("Enter %d characters:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf(" %c", &arr[i]);  // Space before %c to handle newline issue
    }
}

// Function to display elements of the array
void display_Array(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

// Function to copy one array to another using pointer arithmetic
void copy_arr(char arr[], int size, char new_arr[]) {
    char *src = arr;        // Pointer to original array
    char *dest = new_arr;   // Pointer to destination array

    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i); // Copy element using pointer arithmetic
    }
}


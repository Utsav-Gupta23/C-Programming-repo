#include <stdio.h>

void inputArray(int arr[][10], int size);
void displayArray(int arr[][10], int size);
void sumBothDiagonal(int arr[][10], int size);

int main() {
    int arr[10][10];
    int size;

    // Take input for 2D array size
    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &size);

    // Validate input size
    if (size > 10 || size <= 0) {
        printf("Invalid size! Please enter values between 1 and 10.\n");
        return 1;
    }

    // Take input for array elements
    printf("Enter the elements of the array:\n");
    inputArray(arr, size);

    // Display the matrix
    printf("The array is:\n");
    displayArray(arr, size);

    // Compute and print the sum of both diagonals
    sumBothDiagonal(arr, size);

    return 0;
}

// Function to take input for a 2D array
void inputArray(int arr[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element at row %d column %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to display the 2D array properly
void displayArray(int arr[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// Function to compute the sum of both diagonals
void sumBothDiagonal(int arr[][10], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i][i]; // Primary diagonal
        if (i != size - i - 1) {
            sum += arr[i][size - i - 1]; // Secondary diagonal
        }
    }

    printf("Sum of both diagonals: %d\n", sum);
}

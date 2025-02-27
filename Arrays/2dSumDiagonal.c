
#include <stdio.h>

void inputArray(int arr[][10], int size);
void displayArray(int arr[][10], int size);
void sumDiagonal(int arr[][10], int size, int ele1, int ele2);

int main() {
    int arr[10][10];
    int size, ele1, ele2;

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

    // Take input for the two elements to check in the diagonal
    printf("Enter ele1: ");
    scanf("%d", &ele1);

    printf("Enter ele2: ");
    scanf("%d", &ele2);

    // Find and sum the diagonal elements
    sumDiagonal(arr, size, ele1, ele2);

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

// Function to check for two diagonal elements and sum them
void sumDiagonal(int arr[][10], int size, int ele1, int ele2) {
    int sum = 0;
    int found1 = 0, found2 = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i][i] == ele1 || arr[i][size - i - 1] == ele1) {
            printf("Element %d is present in the diagonal at row %d.\n", ele1, i + 1);
            sum += ele1;
            found1 = 1;
        }
        if (arr[i][i] == ele2 || arr[i][size - i - 1] == ele2) {
            printf("Element %d is present in the diagonal at row %d.\n", ele2, i + 1);
            sum += ele2;
            found2 = 1;
        }
    }

    if (found1 && found2) {  // ✅ Corrected condition
        printf("The sum of %d and %d in the diagonal is: %d\n", ele1, ele2, sum);
    } else {
        printf("One or both elements not found in the diagonal.\n");
    }
}



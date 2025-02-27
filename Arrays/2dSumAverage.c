#include <stdio.h>

void inputArray(int arr[][10], int size1, int size2);
int sum(int arr[][10], int size1, int size2);

int main() {
    int arr[10][10];
    int size1, size2, ele, found = 0; 

    // Take input for 2D array size
    printf("Enter the number of rows and columns (max 10 each): ");
    scanf("%d %d", &size1, &size2);

    // Validate input size
    if (size1 > 10 || size2 > 10 || size1 <= 0 || size2 <= 0) {
        printf("Invalid size! Please enter values between 1 and 10.\n");
        return 1;
    }

    // Take input for array elements
    printf("Enter the elements of the array:\n");
    inputArray(arr, size1, size2);

    // Compute and print the sum of all elements
    int result = sum(arr, size1, size2);
    printf("Sum of all elements: %d\n", result);

    int result2 = sum(arr,size1, size2) / (size2 * size1);
    printf("Average of all elements: %d\n", result2);

    return 0; // ✅ Fixed missing return statement
}

// Function to take input for a 2D array
void inputArray(int arr[][10], int size1, int size2) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            printf("Enter element at row %d column %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to calculate the sum of all elements in the 2D array
int sum(int arr[][10], int size1, int size2) {
    int totalSum = 0; // ✅ Fixed sum variable (no array needed)

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            totalSum += arr[i][j]; // ✅ Accumulate sum
        }
    }

    return totalSum; // ✅ Return the final sum
}

// 7063430255

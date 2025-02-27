#include <stdio.h>

// Function Prototype
void inputArray(int arr[][10], int size1, int size2);

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

    // Take input for element to search
    printf("Enter the element you want to search: ");
    scanf("%d", &ele);

    // Searching for the element
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (ele == arr[i][j]) {
                printf("Element %d found at row %d, column %d\n", ele, i+1, j+1); // 1-based index
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}

// Function to take input for a 2D array
void inputArray(int arr[][10], int size1, int size2) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            printf("Enter element at row %d, column %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
}


#include <stdio.h>

// Function prototype
int palindrome(int arr[], int size);

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
    printf("The array is: ");
    for (int i = 0; i < si; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Check if array is a palindrome
    int result = palindrome(arr, si);

    // Print result
    if (result == 1) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}

// Function to check if array is a palindrome
int palindrome(int arr[], int size) {
  if(size == 1) {
    return 1;
  }
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - i - 1]) {
            return -1; // If mismatch is found, return -1 (not palindrome)
        }
    }
    return 1; // If loop completes, it's a palindrome
    
}
  

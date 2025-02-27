#include <stdio.h>

#define MAX_SIZE 20

void merge(int arr[], int start, int mid, int end);
void mergeSort(int arr[], int start, int end);
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]);
void inputArray(int arr[], int size);
void displayArray(int arr[], int size);

int main() {
    int arr1[MAX_SIZE / 2], arr2[MAX_SIZE / 2], merged[MAX_SIZE];
    int size1, size2;

    printf("Enter the sizes of two arrays (max 10 each): ");
    scanf("%d %d", &size1, &size2);

    if (size1 <= 0 || size1 > 10 || size2 <= 0 || size2 > 10) {
        printf("Invalid sizes! Enter values between 1 and 10.\n");
        return 1;
    }

    printf("Enter elements for Array 1:\n");
    inputArray(arr1, size1);
    printf("Enter elements for Array 2:\n");
    inputArray(arr2, size2);

    mergeSort(arr1, 0, size1 - 1);
    mergeSort(arr2, 0, size2 - 1);

    printf("Sorted Array 1: ");
    displayArray(arr1, size1);
    printf("Sorted Array 2: ");
    displayArray(arr2, size2);

    mergeArrays(arr1, size1, arr2, size2, merged);

    printf("Merged Sorted Array: ");
    displayArray(merged, size1 + size2);

    return 0;
}

// Function to input array elements
void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to display an array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Merge Sort function
void mergeSort(int arr[], int start, int end) {
    if (start >= end) return;
    
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

// Function to merge two halves of an array
void merge(int arr[], int start, int mid, int end) {

    int leftSize = mid - start + 1;
    int rightSize = end - mid;

    int left[leftSize], right[rightSize];

    // Copy data to left[] and right[] subarrays
    for (int i = 0; i < leftSize; i++)
        left[i] = arr[start + i];

    for (int j = 0; j < rightSize; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = start;

    // Merge the two subarrays back into arr[]
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    
    // Copy remaining elements of left[]
    while (i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
    }
    // Copy remaining elements of right[]
    while (j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Function to merge two sorted arrays into a single array
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        merged[k++] = (arr1[i] <= arr2[j]) ? arr1[i++] : arr2[j++];
    }

    while (i < size1) merged[k++] = arr1[i++];
    while (j < size2) merged[k++] = arr2[j++];
}
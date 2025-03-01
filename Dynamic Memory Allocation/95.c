#include <stdio.h>
#include <stdlib.h>

int main() {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  float *arr = (float *)malloc(size * sizeof(float));

  if (arr == NULL) {
    printf("Memory Allocation Failed\n");
    return 1;
  }

  printf("Enter your numbers:\n");

  for (int i = 0; i < size; i++) {
    printf("  Enter number %d: ", i + 1);
    scanf("%f", &arr[i]);  // Removed extra space in format specifier
  }

  printf("Your entered numbers are: ");
  for (int i = 0; i < size; i++) {
    printf("%.2f ", arr[i]);  // Fixed printing issue
  }
  printf("\n");

  free(arr);
  arr = NULL;

  return 0;
}

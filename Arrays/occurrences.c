#include <stdio.h>

int occurences(int arr[], int size, int element);

int main() {
    int arr[10]; 
    int si;

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

    // Display array
    printf("The array is: ");
    for (int i = 0; i < si; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 

    int ele;
    printf("Enter the element you eant to search: ");
    scanf("%d",&ele);
    
    int result = occurences(arr,si,ele);
    printf("The no of occurence of element %d is: %d",ele,result);

    return 0;
}

int occurences(int arr[], int size, int element) {
  int flag = 0;
  for (int i = 0; i < size; i++) {
    if(element == arr[i]) {
      flag += 1;
    }
  }
  return flag;
}

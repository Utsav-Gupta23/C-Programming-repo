#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  int *arr;
  printf("Welcome to random numbers shrinker\n");
  arr = (int *) calloc(10, sizeof(int));

  if(arr == NULL) {
    printf("Memory Error");
    return 1;
  }

  srand(time(NULL));
  for(int i = 0; i < 10; i++){
    arr[i] = rand() % 100; // 0-99
  }
  printf("\nHere are your random numbers: ");
  for(int i = 0; i < 10; i++){
    printf("%d ",arr[i]);
  }

  /*
  int *shrinked;
  shrinked = (int *)realloc(arr, 5 * sizeof(int));
  if(shrinked == NULL) {
    printf("Memory Error");
    return 1;
  }
  printf("\nNumbers after realloc");
  printf("\nHere are your random numbers: ");
  for(int i = 0; i < 5; i++){
    printf("%d ",arr[i]);
  }
  */

  arr = (int *)realloc(arr, 5 * sizeof(int));
  printf("\nNumbers after realloc!!");
  printf("\nHere are your random numbers: ");
  for(int i = 0; i < 5; i++){
    printf("%d ",arr[i]);
  }

  free(arr);
  arr = NULL;
  return 0;
}
#include<stdio.h>

void minmax(int*, int*, int*, int*);

int main() {
  int first, second, min, max;
  printf("Enter the first number: ");
  scanf("%d",&first);
  printf("Enter the second number: ");
  scanf("%d",&second);

  minmax(&first, &second, &min, &max);
  printf("Between %d and %d, minimun is %d and maximum is %d", first, second, min, max);

  return 0;
}

void minmax(int *a, int *b, int *min, int *max) {
  if(*a < *b) {
    *min = *a;
    *max = *b;
  }
  else {
    *min = *b;
    *max = *a;
  }

}
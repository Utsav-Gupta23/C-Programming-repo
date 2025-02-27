#include<stdio.h>
#include<limits.h>

int main() {
  unsigned int positive = UINT_MAX;
  int normal = INT_MAX;

  printf("Max values of unsigned int is: %d\n", positive);
  printf("Max value of normal int is: %d\n",normal);

  positive++;
  printf("\n");
  normal++;

  printf("Max values of unsigned int is: %d\n", positive);
  printf("Max value of normal int is: %d\n",normal);
  return 0;
}
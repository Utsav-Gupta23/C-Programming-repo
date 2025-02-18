#include <stdio.h>

// int main()
// {
//   int c;
//   printf("Enter your Char:- ");
//   scanf("%c",&c);

//   printf("You char is: %c", c);
// }

// Sum of two numbers

int main()
{
  int sum, num1, num2;

  printf("Enter your First Num: \n ");
  scanf("%d", &num1);

  printf("Enter your Second Num: \n ");
  scanf("%d", &num2);

  sum = num1+num2;

  printf("The sum of %d and %d is: %d\n", num1, num2, sum);

  return 0;
}
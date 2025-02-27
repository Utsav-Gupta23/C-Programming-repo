// Recursion
#include<stdio.h>

// int fib(int);
int palindrome(int, int);

int main() {
  // printf("Enter the last index: ");
  // scanf("%d", &n);
  // printf("The fibonacci series till %d is: ",n);
  // for (int i = 0; i < n; i++) {
  //   printf("%d ",fib(i));
  // }
  // printf("\n");
  printf("Welcome to Check Palindrome \n");
  int n;
  printf("Please enter the number: ");
  scanf("%d",&n);

  int rev = palindrome(n, 0);
  if (n == rev) {
    printf("%d is palindrome",n);
  }
  else {
    printf("%d is not palindrome",n);
  }
  
}

// int fib(int n){

//   if (n==0) {
//     return 0;
//   }
//   if(n == 1) {
//     return 1;
//   }

//   return fib(n-1) + fib(n-2);
// }

int palindrome(int n, int rev) {

  if(n == 0) {
    return rev;
  }
  int remainder = n % 10;
  int newNum = n / 10;
  int new_rev = rev * 10 + remainder;
  return palindrome(newNum, new_rev);
}

#include<stdio.h>
#include <math.h>

int main() {
  // 31. Multiplication Table
  // int num;

  // printf("Enter the number: ");
  // scanf("%d",&num);

  // printf("The multiplication Table of %d if\n", num);
  // int i = 1;
  // while (i <= 10) {
  //   printf("%d * %d = %d\n",num,i, num * i);
  //   i++;
  // }

  // 32. Sum of all odd numbers till N
  // int n;
  // printf("Enter the limit: ");
  // scanf("%d",&n);

  // int i;
  // int sum = 0;
  // for(i=1;i<=n;i++){
  //   if(i%2 != 0) {
  //     sum = sum + i;
  //   }
  // }
  // printf("The sum of Odd numbers is: %d",sum);

  // // 33. Factorial
  // int n;
  // printf("Enter the number: ");
  // scanf("%d",&n);

  // int fact = 1;
  // for(int i = 1; i<=n; i++) {
  //   fact = fact * i;
  // }
  // printf("The factorial of %d is %d", n, fact);

  // 34. Sum of Digits
  // int n;
  // printf("Enter the number: ");
  // scanf("%d",&n);

  // int sum = 0;
  // while (n > 0) {
  //   sum = sum + (n % 10);
  //   n = n / 10;
  // }
  // printf("%d", sum);

  // 35.
  // int num1, num2;
  // int lcm;

  // printf("Enter num1: ");
  // scanf("%d",&num1);

  // printf("Enter num2: ");
  // scanf("%d",&num2);

  // if(num1 > num2) {
  //   int temp;
  //   temp = num1;
  //   num1 = num2;
  //   num2 = temp;
  // }
  // printf("%d\n", num1);
  // printf("%d\n", num2);

  // for(int i = num2; i<=num1*num2;i++) {
  //   if(i % num1 == 0 && i % num2 == 0) {
  //     lcm = i;
  //     break;
  //   }
  // }
  // printf("%d is LCM", lcm);

  // int num1, num2;
  // int gcd, lcm;

  // printf("Enter num1: ");
  // scanf("%d",&num1);

  // printf("Enter num2: ");
  // scanf("%d",&num2);

  // if(num1 > num2) {
  //   int temp;
  //   temp = num1;
  //   num1 = num2;
  //   num2 = temp;
  // }
  // for(int i = num1; i >= 1; i--) {
  //   if(num1 % i == 0 && num2 % i == 0) {
  //     gcd = i;
  //     break;
  //   }
  // }
  // lcm = (num1 * num2) / gcd;
  // // Print results
  // printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
  // printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

  // // 37.Prime number
  // int n, isPrime = 1;  // Assume n is prime

  //   printf("Enter a number: ");
  //   scanf("%d", &n);

  //   if (n < 2) {
  //       printf("%d is Not Prime\n", n);
  //       return 0;  // Exit early for numbers < 2
  //   }

  //   // Check divisibility from 2 to sqrt(n)
  //   for (int i = 2; i <= sqrt(n); i++) {
  //       if (n % i == 0) {
  //           isPrime = 0;  // Found a divisor, so n is not prime
  //           break;
  //       }
  //   }

  //   // Print result based on isPrime flag
  //   if (isPrime)
  //       printf("%d is a Prime number\n", n);
  //   else
  //       printf("%d is Not Prime\n", n);

  //   return 0;

  // // 38. Reverse the digit of numbers
  // int n;
  // int n1 = 0;
  // printf("Enter the number: ");
  // scanf("%d", &n);

  // while (n > 0) {
  //   n1 = n1 * 10 + (n % 10);
  //   n = n / 10;
  // }
  // printf("The reverse number is %d", n1);

  // 39. Fibonnaci Series
  // int n;
  // printf("Enter the last index for fib: ");
  // scanf("%d",&n);
  // int a = 0;
  // int b = 1;
  // int c;
  // printf("The fib series till %d is:",n);
  // for(int i = 0; i < n; i++) {
  //   if(i == 0) {
  //     printf("%d ", a);
  //   } else if (i == 1) {
  //     printf("%d ", b);
  //   } else {
  //     c = a + b;
  //     printf("%d ", c);
  //     a = b;
  //     b = c;
  //   }
  // }

  // 40. Armstrong Number
  // int n, original_n, sum = 0, length;

  //   // Input number
  //   printf("Enter your number: ");
  //   scanf("%d", &n);

  //   original_n = abs(n);  // Store original value (handle negatives)
    
  //   // Calculate the number of digits dynamically
  //   if (original_n == 0)
  //       length = 1;
  //   else
  //       length = (int)log10(original_n) + 1;

  //   // Check if Armstrong Number
  //   while (n > 0) {
  //       sum += pow(n % 10, length); // Raise each digit to the power of length
  //       n /= 10; // Remove last digit
  //   }

  //   // Compare sum with original number
  //   if (sum == original_n)
  //       printf("The number is an Armstrong Number\n");
  //   else
  //       printf("Not an Armstrong Number\n");

  //   return 0;

  // 42.
  // int n;
  // printf("Enter n: ");
  // scanf("%d",&n);

  // for(int i = 0; i <= n; i++) {
  //   for(int j = 0; j < i; j++){
  //     printf("* ");
  //   }
  //   printf("\n");
  // }

  // int n;
  // printf("Enter n: ");
  // scanf("%d",&n);

  // for(int i = n; i >= 0; i--) {
  //   for(int j = 0; j < i; j++){
  //     printf("* ");
  //   }
  //   printf("\n");
  // }

  // int n;
  // printf("Enter n: ");
  // scanf("%d",&n);

  // for(int i = 1; i <= n; i++) {
  //   for(int j = 0; j < n-i; j++){
  //     printf(" ");
  //   }
  //   for(int j = 0; j < i; j++) {
  //     printf("*");
  //   }
  //   printf("\n");
  // }

  // 43.
  // int n;
  // do {
  //   printf("Enter a Negative Number: ");
  //   scanf("%d",&n);
  // } while(n >= 0);

  // 44.
  // int n;
  // int sum = 0;
  // printf("To Stop enter zero(0)\n");
  // do {
  //   printf("Enter a Number: ");
  //   scanf("%d",&n);
  //   sum += n;
  // } while(n != 0);
  // printf("%d", sum);

  // 47
  // int n; int sum=0;
  
  // while(1) {
  //   printf("To stop enter zero!\n");
  //   printf("Enter only positive number: ");
  //   scanf("%d",&n);

  //   if(n == 0) {
  //     break;
  //   }
  //   if(n < 0) {
  //     continue;
  //   }
    
  //   sum += n;
  // }
  // printf("Sum of all positive numbers is = %d",sum);

  // 48
  // int n;

  //   while(1) {
  //     printf("To stop enter zero!\n");
  //     printf("Enter a number: ");
  //     scanf("%d",&n);
  
  //     if(n % 2 == 0) {
  //       printf("Even");
  //       break;
  //     }
  //     if(n % 2 == 1) {
  //       continue;
  //     }
  //   }

  // 49.
  // double n;
  // double sq;

  //   while(1) {
  //     printf("To stop enter zero!\n");
  //     printf("Enter number: ");
  //     scanf("%lf",&n);
  
  //     if(n == 0) {
  //       break;
  //     }
  //     sq = pow(n,2);
  //     printf("The square of %.2lf is %.2lf\n", n,sq);
  //   }




}
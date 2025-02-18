// 1.
#include <stdio.h>
#define PI 3.14159
int main() {
  printf("*\n");
  printf("* *\n");
  printf("* * *\n");
  printf("* * * *\n");
  printf("* * * * *\n");

  printf("\n");

  printf("* * * * *\n");
  printf("* * * * \n");
  printf("* * *\n");
  printf("* *\n");
  printf("*\n");

  printf("\n");

  printf("\t*\n");
  printf("      * *\n");
  printf("    * * *\n");
  printf("  * * * *\n");
  printf("* * * * *\n");

  //2. Printing using single print statement
  printf("\n");

  printf("*\n* *\n* * *\n* * * *\n* * * * *\n");

  printf("\n");

  printf("* * * * *\n* * * *\n* * *\n* *\n*\n");

  printf("\n");

  printf("\t*\n\t\b\b* *\n\t\b\b\b\b* * *\n\t\b\b\b\b\b\b* * * *\n* * * * *\n");

  printf("\n");
  // 3. 
  char name[50];
  printf("Enter your name: \n");
  scanf(" %[^\n]", name);

  printf("Welcome %s to KG Coding",name);

  printf("\n");
  // 4.
  int a, b;
    a = 4;
    b = 6;

    printf("The integer one and two is %d, %d\n", a, b);  // Correct usage

    // 5.
    int A = 4;
    float B = 4.6;
    char C = 'A';
    double D = 3553;

    printf("The size of a is %lu bytes\n", sizeof(A));
    printf("The size of b is %lu bytes\n", sizeof(B));
    printf("The size of c is %lu bytes\n", sizeof(C));
    printf("The size of d is %lu bytes\n", sizeof(D));

    printf("\n");
    // 6.
    char first_name[50], last_name[50];
    int age;
    printf("Enter First name:\n");
    scanf("%s",first_name);

    printf("Enter last name:\n");
    scanf("%s",last_name);

    printf("Enter your age:\n");
    scanf("%d", &age);

    printf("Your name is %s %s and age is %d", first_name,last_name,age);
    printf("\n");
    printf("\n");
    // 7.
    int length = 8;
    int area = length * length;
    printf("The area of square is %d\n",area);
    printf("\n");

    // 8.
    int rad = 5;
    printf("Circumference of Circle is %.4f\n", 2*PI*rad);
    printf("\n");
    // 9.
    int rad1 = 5;
    printf("Area of Circle is %.4f\n", PI*(rad1*rad1));
    printf("\n");
    // Swapping Two numbers;
    int num1,num2;
    num1 = 15;
    num2 = 87;
    printf("Before swapping num1 = %d and num2 = %d\n", num1, num2);
    num1 = num1+num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swapping num1 = %d and num2 = %d\n", num1, num2);
}


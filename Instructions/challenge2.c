#include <stdio.h>

int main()
{
  // 11.
  int a, b;
  printf("Enter num1: ");
  scanf("%d",&a);

  printf("Enter num2: ");
  scanf("%d",&b);

  printf("The sum of two numbers is: %d\n",a+b);
  printf("The difference of two numbers is: %d\n",a-b);
  printf("The division of two numbers is: %d\n",a/b);
  printf("The modulo of two numbers is: %d\n",a%b);

  // 12.
  int c = 3;
  printf("Integer: %d\n",c);
  printf("Float: %f\n",(float)c);

  // 13.
  float d = 4.5, e = 5.7;
  printf("Multipication of two floating point numbers are: %f\n", d * e);

  // 14. 
  float A = 3.4, B = 4, C = 3.4, D = 4;
  printf("The perimeter of ABCD is: %f\n", A+B+C+D);

  // 15. Area of Traingle
  float length, height;
  printf("Enter length: ");
  scanf("%d",&length);

  printf("Enter height: ");
  scanf("%d",&height);

  printf("The area of triangle is: %d\n", 0.5*height*length);

  // 16.
  float P, T, R;
  printf("Enter P: ");
  scanf("%f",&P);

  printf("Enter T: ");
  scanf("%f",&T);

  printf("Enter R: ");
  scanf("%f",&R);

  printf("The simple interest is: %f\n", (P*T*R)/100);

  // 17.
  float p, t, r;
  printf("Enter p: ");
  scanf("%f",&p);

  printf("Enter t: ");
  scanf("%f",&t);

  printf("Enter r: ");
  scanf("%f",&r);

  printf("The Compound interest is: %f\n", p*(1+r/100)*100);

  // 18.
  float fahr;
  printf("Enter Fahrenheit: ");
  scanf("%f",&fahr);
  printf("The celsius degree is: %f", (fahr-32)*(5/9));
}
// Function

#include <stdio.h>
#include <time.h>

void greet();
int sum(int, int, int, int);
int square(int);
void print_date();
float max(float ,float );
int increment(int);
int increment(int);
float average_of_5_numbers(int, int , int , int, int);

int main() {
  greet();

  int addition = sum(4,5,6,7);
  printf("\nThe sum of 4 integers are %d",addition);

  int sq = square(4);
  printf("\nThe square of a number is %d\n",sq);

  print_date();

  float maximum = max(5,9);
  printf("\nThe max is %.2f:",maximum);

  int x = 9;
  printf("\nThe number before increment: %d\n",x);
  int increase = increment(x);
  printf("\nThe number after increasing 5: %d",increase);
  printf("\nThe number after increment: %d\n",x);

  float avg = average_of_5_numbers(7, 9, 10, 32, 14);
  printf("\nThe average of 5 numbers is: %.2f\n", avg);
}

void greet() {
  printf("Hello World!");
}

int sum(int a, int b, int c, int d) {
  int add = a + b + c + d;
  return add;
}

int square(int a){
  int square = a * a;
  return square;
}

void print_date() {
  time_t t;
  time(&t);

  printf("Current Date & Time: ",asctime(localtime(&t)));
}

float max(float a, float b){
  if(a>b){
    return a;
  }else{
    return b;
  }
}

int increment(int n){
  return n + 5;
}

float average_of_5_numbers(int a, int b, int c, int d, int f) {
  float average = (a+b+c+d+f)/5.0;
  return average;
}

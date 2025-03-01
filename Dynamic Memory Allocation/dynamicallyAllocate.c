#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Car {
  char make[50];
  char model[50];
  int year;
  char color[20];
};

typedef struct Car Car;

void inputCar(Car *c);
void displayCar(Car *c);

int main() {
  int no_of_cars;
  printf("Welcome to Our Dynamic Island.\n");
  printf("Enter total number of cars you want to enter: ");
  scanf("%d", &no_of_cars);
  getchar(); // Clear buffer

  // Dynamically allocate memory for an array of cars
  Car *cars = (Car *)malloc(no_of_cars * sizeof(Car));

  if (cars == NULL) {
    printf("Memory allocation failed!\n");
    return 1; 
  }

  // Take input for each car
  printf("\n____ Enter Car Details! ____\n");
  for (int i = 0; i < no_of_cars; i++) {
    printf("\nEnter details of Car %d:\n", i + 1);
    inputCar(&cars[i]);
  }

  // Display all cars
  printf("\n____ Car Details ____\n");
  for (int i = 0; i < no_of_cars; i++) {
    printf("\nCar %d Details:\n", i + 1);
    displayCar(&cars[i]);
  }

  // Free allocated memory
  free(cars);
  cars = NULL;

  return 0;
}

void inputCar(Car *c) {
  printf("  Enter name of Car company: ");
  fgets(c->make, sizeof(c->make), stdin);
  c->make[strcspn(c->make, "\n")] = '\0';

  printf("  Enter model of Car: ");
  fgets(c->model, sizeof(c->model), stdin);
  c->model[strcspn(c->model, "\n")] = '\0';

  printf("  Enter year of Car: ");
  scanf("%d", &c->year);
  getchar(); // Clear buffer

  printf("  Enter color of Car: ");
  fgets(c->color, sizeof(c->color), stdin);
  c->color[strcspn(c->color, "\n")] = '\0';
}

void displayCar(Car *c) {
  printf("  The %s car is of %s company, manufactured in year %d, with color %s.\n",
         c->model, c->make, c->year, c->color);
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
  int x;
  int y;
} Point;

void insertPoints(Point *p) {
  printf("Enter X coordinate: ");
  scanf("%d", &p->x);
  printf("Enter Y coordinate: ");
  scanf("%d", &p->y);
}

void distancePoints(Point *start, Point *end) {
  float dist;
  dist = sqrt(pow((end->x - start->x), 2) + pow((end->y - start->y), 2)); // Corrected formula
  printf("Distance between points: %.2f\n", dist);
}

int main() {
  printf("Welcome to Dynamic Points\n");

  Point *start = (Point *)malloc(sizeof(Point));
  Point *end = (Point *)malloc(sizeof(Point));

  if ((start == NULL) || (end == NULL)) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  printf("Enter starting point\n");
  insertPoints(start);
  printf("Enter ending point\n");
  insertPoints(end);

  printf("Now distance between two points is:\n");
  distancePoints(start, end);

  free(start);
  free(end);
  start = end = NULL;
  return 0;
}


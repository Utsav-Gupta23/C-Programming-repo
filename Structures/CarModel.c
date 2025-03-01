#include <stdio.h>
#include <string.h>

struct Car {
    char make[50];
    char model[50];
    int year;
    char color[20];
};  

typedef struct Car Car;

void inputDetails(Car *car) {
    printf("Enter Car Make: ");
    fgets(car->make, sizeof(car->make), stdin);
    car->make[strcspn(car->make, "\n")] = '\0';  // Remove newline

    printf("Enter Car Model: ");
    fgets(car->model, sizeof(car->model), stdin);
    car->model[strcspn(car->model, "\n")] = '\0';  // Remove newline

    printf("Enter Car Year: ");
    scanf("%d", &car->year);

    getchar(); // Consume newline character left by scanf

    printf("Enter Car Color: ");
    fgets(car->color, sizeof(car->color), stdin);
    car->color[strcspn(car->color, "\n")] = '\0';  // Remove newline

}

void printCar(Car *car) {
    printf("\nCar Make: %s\nModel: %s\nYear: %d\nColor: %s\n", car->make, car->model, car->year, car->color);
}

int main() {
    int no;
    printf("Enter number of cars you want to enter: ");
    scanf("%d", &no);
    getchar(); // Consume the newline character left by scanf

    Car cars[no];

    for (int i = 0; i < no; i++) {
        printf("\nEnter Car %d details:\n", i + 1);
        inputDetails(&cars[i]);
    }

    printf("\n---- Car Details ----\n");
    for (int i = 0; i < no; i++) {
        printCar(&cars[i]);
    }

    return 0;
}

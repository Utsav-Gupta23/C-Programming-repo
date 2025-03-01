#include <stdio.h>
#include <string.h>

typedef struct {
    char title[50];
    char author[50];
    float price;
} Book;

typedef struct {
    int id;
    char name[50];
    int year;
    float gpa;
    int books_borrowed;
    Book borrowed_books[3];
} Student;

void inputDetails(Student *s);
void printDetails(Student *s, int n);

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); // Consume newline

    Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        inputDetails(&students[i]);
    }

    printDetails(students, n);
    return 0;
}

void inputDetails(Student *s) {

    printf("ID: ");
    scanf("%d", &s->id);
    getchar();

    printf("Name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';

    printf("Year: ");
    scanf("%d", &s->year);

    printf("GPA: ");
    scanf("%f", &s->gpa);

    printf("Books borrowed (0-3): ");
    scanf("%d", &s->books_borrowed);
    getchar();

    for (int i = 0; i < s->books_borrowed && i < 3; i++) {
        printf("\nBook %d:\n  Title: ", i + 1);
        fgets(s->borrowed_books[i].title, sizeof(s->borrowed_books[i].title), stdin);
        s->borrowed_books[i].title[strcspn(s->borrowed_books[i].title, "\n")] = '\0';
        
        printf("  Author: ");
        fgets(s->borrowed_books[i].author, sizeof(s->borrowed_books[i].author), stdin);
        s->borrowed_books[i].author[strcspn(s->borrowed_books[i].author, "\n")] = '\0';

        printf("  Price: ");
        scanf("%f", &s->borrowed_books[i].price);
        getchar();
    }
}

void printDetails(Student *s, int n) {

    printf("\n---- Student Details ----\n");

    for (int i = 0; i < n; i++) {
        printf("\n%s (ID: %d, Year: %d, GPA: %.2f)\n", s[i].name, s[i].id, s[i].year, s[i].gpa);
        printf("Books borrowed:");
        if (s[i].books_borrowed == 0)
            printf(" Book Borrowed None\n");
        else {
            for (int j = 0; j < s[i].books_borrowed; j++) {
                printf("\n  '%s' by %s, Rs%.2f", 
                    s[i].borrowed_books[j].title, 
                    s[i].borrowed_books[j].author, 
                    s[i].borrowed_books[j].price);
            }
        }
        printf("\n");
    }
}

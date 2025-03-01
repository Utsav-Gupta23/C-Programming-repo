#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};  

typedef struct Book Book;

void inputDetails(Book *book) {

    printf("Enter your Book Title: ");
    fgets(book->title, sizeof(book->title), stdin);
    book->title[strcspn(book->title, "\n")] = '\0';  

    printf("Enter Your Book Author: ");
    fgets(book->author, sizeof(book->author), stdin);
    book->author[strcspn(book->author, "\n")] = '\0';  

    printf("Enter your Book Price: ");
    scanf("%f", &book->price);

    while (getchar() != '\n'); // Clear input buffer
}

void printBook(Book *book) {
    printf("\n'%s' is written by %s, and is sold for Rs%.2f\n", book->title, book->author, book->price);
}

int main() {
    int no;
    printf("Enter number of books you want to enter: ");
    scanf("%d", &no);
    getchar(); // Consume the newline character left by scanf

    Book books[no];

    for (int i = 0; i < no; i++) {
        printf("\nEnter Book %d details:\n", i + 1);
        inputDetails(&books[i]);
    }

    printf("\n---- Book Details ----\n");
    for (int i = 0; i < no; i++) {
        printBook(&books[i]);
    }
 

    return 0;
}

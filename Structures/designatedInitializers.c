#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};  

typedef struct Book Book;

void printBook(Book *book) {
    printf("\n'%s' is written by %s, and is sold for Rs%.2f\n", book->title, book->author, book->price);
}

int main() {

    Book books[3] = {
        {.title = "Atomic Habits", .author = "James Clear", .price = 499.00},
        {.title = "The Alchemist", .author = "Paulo Coelho", .price = 399.50},
        {.title = "Rich Dad Poor Dad", .author = "Robert Kiyosaki", .price = 350.50}
    };

    printf("\n---- Book Details ----\n");
    for (int i = 0; i < 3; i++) {  // Fix: Replace 'no' with '3'
        printBook(&books[i]);
    }

    return 0;
}


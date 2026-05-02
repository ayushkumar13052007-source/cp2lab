#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[30];
    int pages;
    float price;
};

void printBook(struct Book *b) {
    printf("Title: %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Pages: %d\n", b->pages);
    printf("Price: Rs.%.2f\n\n", b->price);
}

int main() {
    struct Book books[5] = {
        {"C Programming", "Dennis Ritchie", 800, 450.00},
        {"Data Structures", "Seymour Lipschutz", 650, 380.00},
        {"Algorithms", "Cormen", 1200, 850.00},
        {"Operating System", "Galvin", 900, 520.00},
        {"Computer Networks", "Tanenbaum", 950, 680.00}
    };
    
    struct Book *ptr = books;
    
    printf("Book Details:\n");
    for (int i = 0; i < 5; i++) {
        printBook(ptr + i);
    }
    
    return 0;
}
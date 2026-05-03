#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("\nEnter details of book %d\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", b[i].title);
        printf("Author: ");
        scanf(" %[^\n]", b[i].author);
        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    printf("\nBook Details:\n");
    for(i = 0; i < 10; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Price: %.2f\n", b[i].price);
    }

    return 0;
}
#include <stdio.h>

struct Owner {
    char ownerName[50];
    char ownerAddress[100];
};

struct Car {
    char make[30];
    char model[30];
    int year;
    struct Owner owner;
};

int main() {
    struct Car c;

    printf("Enter car make: ");
    scanf(" %[^\n]", c.make);

    printf("Enter car model: ");
    scanf(" %[^\n]", c.model);

    printf("Enter car year: ");
    scanf("%d", &c.year);

    printf("Enter owner name: ");
    scanf(" %[^\n]", c.owner.ownerName);

    printf("Enter owner address: ");
    scanf(" %[^\n]", c.owner.ownerAddress);

    printf("\nCar Details\n");
    printf("Make: %s\n", c.make);
    printf("Model: %s\n", c.model);
    printf("Year: %d\n", c.year);
    printf("Owner Name: %s\n", c.owner.ownerName);
    printf("Owner Address: %s\n", c.owner.ownerAddress);

    return 0;
}
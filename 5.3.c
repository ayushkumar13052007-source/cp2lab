#include <stdio.h>

int main() {
    char ch;
    char *p = &ch;

    printf("Enter a character: ");
    scanf(" %c", p);

    printf("Character is: %c\n", *p);

    return 0;
}
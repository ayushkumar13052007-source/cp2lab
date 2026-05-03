#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    *p = 25;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);

    return 0;
}
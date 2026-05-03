#include <stdio.h>

void changeValue(int *p) {
    *p = 99;
}

int main() {
    int a = 10;

    changeValue(&a);

    printf("a = %d\n", a);
    return 0;
}
#include <stdio.h>

int main() {
    long num = 1000;
    long *p = &num;

    *p = 5000;

    printf("num = %ld\n", num);
    return 0;
}
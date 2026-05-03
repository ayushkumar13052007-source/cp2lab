#include <stdio.h>

int main() {
    short s = 15;
    short *p = &s;
    short **pp = &p;

    **pp = 45;

    printf("s = %hd\n", s);
    printf("*p = %hd\n", *p);
    printf("**pp = %hd\n", **pp);

    return 0;
}
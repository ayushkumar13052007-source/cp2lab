#include <stdio.h>

union Test {
    unsigned int n;
    struct {
        unsigned int a : 4;
        unsigned int b : 4;
    } bits;
};

int main() {
    union Test t;
    t.bits.a = 5;
    t.bits.b = 10;

    printf("a = %u, b = %u\n", t.bits.a, t.bits.b);
    printf("n = %u\n", t.n);
    return 0;
}
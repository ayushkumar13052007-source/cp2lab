#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

void incrComplex(struct Complex *c) {
    c->real += 1;
    c->imag += 1;
}

int main() {
    struct Complex num = {5.2, 3.7};
    
    printf("Before: %.1f + %.1fi\n", num.real, num.imag);
    incrComplex(&num);
    printf("After:  %.1f + %.1fi\n", num.real, num.imag);
    
    return 0;
}
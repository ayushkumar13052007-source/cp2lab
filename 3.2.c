#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

int main() {
    struct Complex c1 = {3.5, 4.2};
    struct Complex c2 = {2.1, -1.8};
    struct Complex sum;
    
    sum = addComplex(c1, c2);
    
    printf("C1 = %.1f + %.1fi\n", c1.real, c1.imag);
    printf("C2 = %.1f + %.1fi\n", c2.real, c2.imag);
    printf("Sum = %.1f + %.1fi\n", sum.real, sum.imag);
    
    return 0;
}
#include <stdio.h>

struct Distance {
    int km, meter, cm;
};

void swapDistance(struct Distance *a, struct Distance *b) {
    struct Distance temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    struct Distance d1 = {1, 200, 50};
    struct Distance d2 = {3, 500, 100};
    
    printf("Before swap:\n");
    printf("D1: %d km %d m %d cm\n", d1.km, d1.meter, d1.cm);
    printf("D2: %d km %d m %d cm\n", d2.km, d2.meter, d2.cm);
    
    swapDistance(&d1, &d2);
    
    printf("\nAfter swap:\n");
    printf("D1: %d km %d m %d cm\n", d1.km, d1.meter, d1.cm);
    printf("D2: %d km %d m %d cm\n", d2.km, d2.meter, d2.cm);
    
    return 0;
}
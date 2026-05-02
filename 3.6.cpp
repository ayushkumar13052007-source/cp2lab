#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    struct {
        int day, month, year;
    } dob;
};

typedef struct Complex {
    float real, imag;
} Complex;

int main() {
    struct Student s = {"Ayush", 5, {15, 3, 2005}};
    Complex c = {5.5, 3.2};
    
    printf("=== Structure Demo ===\n");
    printf("Student: %s (Roll %d)\n", s.name, s.roll);
    printf("DOB: %02d/%02d/%04d\n", s.dob.day, s.dob.month, s.dob.year);
    printf("Complex: %.1f + %.1fi\n", c.real, c.imag);
    
    printf("\nSize optimizations:\n");
    printf("Student: %lu bytes\n", sizeof(s));
    printf("Complex (typedef): %lu bytes\n", sizeof(c));
    
    return 0;
}
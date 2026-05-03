#include <stdio.h>

struct Data {
    unsigned int value : 4;
};

int main() {
    struct Data d;
    d.value = 15;
    printf("Value = %u\n", d.value);
    return 0;
}
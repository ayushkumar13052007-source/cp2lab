#include <stdio.h>

enum Day {
    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};

int main() {
    enum Day d = Wednesday;
    printf("Day value = %d\n", d);
    return 0;
}
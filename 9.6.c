#include <stdio.h>

void reverseNumber(int *n) {
    int rev = 0, rem;
    while(*n > 0) {
        rem = *n % 10;
        rev = rev * 10 + rem;
        *n = *n / 10;
    }
    *n = rev;
}

int main() {
    int num;
    scanf("%d", &num);

    reverseNumber(&num);

    printf("%d", num);
    return 0;
}
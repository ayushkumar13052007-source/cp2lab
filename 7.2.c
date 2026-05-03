#include <stdio.h>

int main() {
    char src[100], dest[100];
    char *p1, *p2;

    scanf(" %[^\n]", src);

    p1 = src;
    p2 = dest;

    while (*p1 != '\0') {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';

    printf("%s", dest);
    return 0;
}
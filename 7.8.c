#include <stdio.h>

int main() {
    char str[200], *p;
    int shift;

    scanf(" %[^\n]", str);
    scanf("%d", &shift);

    p = str;

    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            *p = ((*p - 'a' + shift) % 26) + 'a';
        } else if (*p >= 'A' && *p <= 'Z') {
            *p = ((*p - 'A' + shift) % 26) + 'A';
        }
        p++;
    }

    printf("%s", str);
    return 0;
}
#include <stdio.h>

int main() {
    char str[100], *p;

    scanf(" %[^\n]", str);
    p = str;

    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            *p = *p - 32;
        }
        p++;
    }

    printf("%s", str);
    return 0;
}
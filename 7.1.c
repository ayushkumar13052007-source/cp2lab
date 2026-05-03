#include <stdio.h>

int main() {
    char str[100], *p;
    int len = 0;

    scanf(" %[^\n]", str);
    p = str;

    while (*p != '\0') {
        len++;
        p++;
    }

    printf("%d", len);
    return 0;
}
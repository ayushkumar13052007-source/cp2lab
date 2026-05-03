#include <stdio.h>

int main() {
    char str[100], ch, *p;
    int count = 0;

    scanf(" %[^\n]", str);
    scanf(" %c", &ch);

    p = str;

    while (*p != '\0') {
        if (*p == ch) {
            count++;
        }
        p++;
    }

    printf("%d", count);
    return 0;
}
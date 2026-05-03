#include <stdio.h>

int main() {
    char str[100], *p;
    int count = 0;

    scanf(" %[^\n]", str);
    p = str;

    while (*p != '\0') {
        char ch = *p;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
        p++;
    }

    printf("%d", count);
    return 0;
}
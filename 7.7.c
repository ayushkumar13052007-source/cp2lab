#include <stdio.h>

int main() {
    char str[200], *p;
    int words = 0;

    scanf(" %[^\n]", str);
    p = str;

    while (*p != '\0') {
        if ((*p != ' ' && *(p + 1) == ' ') || (*p != ' ' && *(p + 1) == '\0')) {
            words++;
        }
        p++;
    }

    printf("%d", words);
    return 0;
}
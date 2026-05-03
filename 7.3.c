#include <stdio.h>

int compareStrings(char *s1, char *s2) {
    while (*s1 && *s2 && (*s1 == *s2)) {
        s1++;
        s2++;
    }

    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main() {
    char str1[100], str2[100];

    scanf(" %[^\n]", str1);
    scanf(" %[^\n]", str2);

    if (compareStrings(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
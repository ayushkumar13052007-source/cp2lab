#include <stdio.h>

int main() {
    char str[200];
    int i;

    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("%s", str);
    return 0;
}
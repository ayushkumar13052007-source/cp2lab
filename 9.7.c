#include <stdio.h>

void removeSpaces(char *str) {
    int i = 0, j = 0;
    while(str[i] != '\0') {
        if(str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[200];
    scanf(" %[^\n]", str);

    removeSpaces(str);

    printf("%s", str);
    return 0;
}
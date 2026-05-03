#include <stdio.h>

int main() {
    char str[200];
    int i, words = 0;

    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++) {
        if((i == 0 && str[i] != ' ') || (str[i] != ' ' && str[i - 1] == ' ')) {
            words++;
        }
    }

    printf("%d", words);
    return 0;
}
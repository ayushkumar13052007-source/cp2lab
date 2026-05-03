#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int i = 0, j = strlen(str) - 1;
    char temp;

    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[100];
    scanf(" %[^\n]", str);

    reverse(str);

    printf("%s", str);
    return 0;
}
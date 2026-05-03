#include <stdio.h>

int main() {
    char a[50], b[50], result[100];
    int i = 0, j = 0, k = 0;

    scanf("%s", a);
    scanf("%s", b);

    while(a[i] != '\0' || b[j] != '\0') {
        if(a[i] != '\0') {
            result[k++] = a[i++];
        }
        if(b[j] != '\0') {
            result[k++] = b[j++];
        }
    }

    result[k] = '\0';
    printf("%s", result);
    return 0;
}
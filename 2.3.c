#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    int len = strlen(str);
    
    printf("String: \"%s\"\n", str);
    printf("Length: %d characters\n", len);
    return 0;
}
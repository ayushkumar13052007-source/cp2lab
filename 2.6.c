#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    
    printf("Original: \"%s\"\n", str);
    strupr(str);
    printf("Uppercase: \"%s\"\n", str);
    return 0;
}
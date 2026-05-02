#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HELLO WORLD";
    
    printf("Original: \"%s\"\n", str);
    strlwr(str);
    printf("Lowercase: \"%s\"\n", str);
    return 0;
}
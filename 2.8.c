#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World Programming";
    char substr[] = "World";
    char *pos;
    
    pos = strstr(str, substr);
    
    if (pos != NULL) {
        printf("Substring \"%s\" found at position: %ld\n", 
               substr, pos - str);
    } else {
        printf("Substring not found!\n");
    }
    return 0;
}
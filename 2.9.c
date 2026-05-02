#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Programming";
    char substr[10];
    
    
    strncpy(substr, str + 3, 5);
    substr[5] = '\0';
    
    printf("Original: \"%s\"\n", str);
    printf("Substring (positions 3-7): \"%s\"\n", substr);
    return 0;
}
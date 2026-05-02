#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Programming in C";
    char destination[50];
    
    strcpy(destination, source);
    
    printf("Source: \"%s\"\n", source);
    printf("Copied: \"%s\"\n", destination);
    return 0;
}
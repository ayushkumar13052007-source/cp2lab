#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello ";
    char str2[] = "World!";
    
    printf("Before: str1 = \"%s\"\n", str1);
    strcat(str1, str2);
    printf("After strcat: str1 = \"%s\"\n", str1);
    return 0;
}
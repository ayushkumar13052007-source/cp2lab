#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Apple";
    char str2[] = "Apple";
    char str3[] = "Banana";
    
    printf("strcmp(str1, str2) = %d (Equal)\n", strcmp(str1, str2));
    printf("strcmp(str1, str3) = %d (str1 < str3)\n", strcmp(str1, str3));
    printf("strcmp(str3, str1) = %d (str3 > str1)\n", strcmp(str3, str1));
    return 0;
}
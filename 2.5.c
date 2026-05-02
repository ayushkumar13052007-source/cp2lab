#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "radar";
    char temp[50];
    
    strcpy(temp, str);
    strrev(temp);
    
    printf("Original: \"%s\"\n", str);
    printf("Reversed: \"%s\"\n", temp);
    
    if (strcmp(str, temp) == 0) {
        printf("String is a palindrome!\n");
    } else {
        printf("String is not a palindrome!\n");
    }
    return 0;
}
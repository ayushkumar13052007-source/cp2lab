#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char numStr[] = "12345";
    char numStr2[] = "-678";
    
    int num1 = atoi(numStr);
    int num2 = atoi(numStr2);
    
    printf("String \"%s\" -> Integer: %d\n", numStr, num1);
    printf("String \"%s\" -> Integer: %d\n", numStr2, num2);
    printf("Sum: %d\n", num1 + num2);
    return 0;
}
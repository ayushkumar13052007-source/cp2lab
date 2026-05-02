#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }
    
    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    
    fclose(file);
    return 0;
}
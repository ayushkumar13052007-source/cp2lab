#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int lines = 0, words = 0, chars = 0;
    int inWord = 0;
    
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }
    
    while ((ch = fgetc(file)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }
    
    printf("Lines: %d\n", lines + 1);  // +1 for last line
    printf("Words: %d\n", words);
    printf("Characters: %d\n", chars);
    
    fclose(file);
    return 0;
}
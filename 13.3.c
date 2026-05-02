#include <stdio.h>

int main() {
    FILE *file;
    char text[] = "This text is appended to the file.\n";
    
    file = fopen("input.txt", "a");  // 'a' for append mode
    if (file == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }
    
    fputs(text, file);
    printf("Text appended successfully!\n");
    
    fclose(file);
    return 0;
}
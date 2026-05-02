#include <stdio.h>

int compareFiles(char *file1, char *file2) {
    FILE *f1, *f2;
    char ch1, ch2;
    
    f1 = fopen(file1, "r");
    f2 = fopen(file2, "r");
    
    if (f1 == NULL || f2 == NULL) {
        printf("Error opening files!\n");
        if (f1) fclose(f1);
        if (f2) fclose(f2);
        return 0;
    }
    
    while ((ch1 = fgetc(f1)) != EOF && (ch2 = fgetc(f2)) != EOF) {
        if (ch1 != ch2) {
            printf("Files are NOT identical!\n");
            fclose(f1);
            fclose(f2);
            return 0;
        }
    }
    
    // Check if both files ended together
    int f1End = feof(f1);
    int f2End = feof(f2);
    
    fclose(f1);
    fclose(f2);
    
    if (f1End && f2End) {
        printf("Files are identical!\n");
        return 1;
    } else {
        printf("Files are NOT identical (different lengths)!\n");
        return 0;
    }
}

int main() {
    compareFiles("file1.txt", "file2.txt");
    return 0;
}
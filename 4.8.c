#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[10];
    int i, pos = 0;

    for(i = 0; i < 10; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for(i = 1; i < 10; i++) {
        if(s[i].marks > s[pos].marks) {
            pos = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[pos].name);
    printf("Roll No: %d\n", s[pos].roll);
    printf("Marks: %.2f\n", s[pos].marks);

    return 0;
}
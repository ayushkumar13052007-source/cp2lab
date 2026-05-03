#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s[3] = {
        {1, "Aman", 89.5},
        {2, "Rohit", 92.0},
        {3, "Sita", 85.5}
    };

    int i;
    for(i = 0; i < 3; i++) {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
    return 0;
}
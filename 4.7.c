#include <stdio.h>
#include <string.h>

struct Department {
    char deptName[30];
    char location[30];
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Department dept;
};

int main() {
    struct Employee emp[10], temp;
    int i, j;

    for(i = 0; i < 10; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("Department Name: ");
        scanf(" %[^\n]", emp[i].dept.deptName);
        printf("Location: ");
        scanf(" %[^\n]", emp[i].dept.location);
    }

    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(emp[j].salary > emp[j + 1].salary) {
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }

    printf("\nEmployees sorted by salary:\n");
    for(i = 0; i < 10; i++) {
        printf("\nName: %s\n", emp[i].name);
        printf("ID: %d\n", emp[i].id);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("Department: %s\n", emp[i].dept.deptName);
        printf("Location: %s\n", emp[i].dept.location);
    }

    return 0;
}
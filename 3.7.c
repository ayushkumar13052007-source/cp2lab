#include <stdio.h>
#include <string.h>

struct Department {
    char deptName[30];
};

struct Employee {
    char name[50];
    int id;
    struct Department dept;
};

int main() {
    struct Employee emp[100];
    int n, i, count = 0;
    char searchDept[30];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Department: ");
        scanf(" %[^\n]", emp[i].dept.deptName);
    }

    printf("\nEnter department to search: ");
    scanf(" %[^\n]", searchDept);

    for(i = 0; i < n; i++) {
        if(strcmp(emp[i].dept.deptName, searchDept) == 0) {
            count++;
        }
    }

    printf("\nNumber of employees in %s department = %d\n", searchDept, count);
    return 0;
}
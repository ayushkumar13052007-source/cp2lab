#include <stdio.h>
#include <string.h>

typedef struct { 
    char name[50];
    int age;
    float salary;
} Employee;

typedef struct {
    int day, month, year;
} MyDate;

int main() {
    Employee emp1 = {"Ayush", 20, 25000.0};
    MyDate today = {2, 5, 2026};
    
    
    printf("Employee: %s, Age: %d, Salary: Rs.%.2f\n", 
           emp1.name, emp1.age, emp1.salary);
    printf("Date: %d/%d/%d\n", today.day, today.month, today.year);
    
    return 0;
}
#include <stdio.h>
#include <string.h>

struct Address {
    char street[50];
    char city[30];
    int pincode;
};

struct Student {
    char name[50];
    int rollNo;
    struct Address addr;  
};

int main() {
    struct Student s = {
        "Ayush Kumar Nayak",
        5,
        {"MG Road", "Bhubaneswar", 751001}
    };
    
    printf("Student: %s\n", s.name);
    printf("Roll No: %d\n", s.rollNo);
    printf("Address: %s, %s - %d\n", 
           s.addr.street, s.addr.city, s.addr.pincode);
    
    return 0;
}
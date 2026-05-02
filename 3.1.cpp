#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

void displayDate(struct Date d) {
    printf("%02d/%02d/%04d\n", d.day, d.month, d.year);
}

int main() {
    struct Date today = {2, 5, 2026};
    
    printf("Date in DD/MM/YYYY format: ");
    displayDate(today);
    return 0;
}
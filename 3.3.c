#include <stdio.h>

struct Settings {
    unsigned int active : 1;      
    unsigned int readOnly : 1;    
    unsigned int visible : 1;     
    unsigned int priority : 3;    
    unsigned int reserved : 10;   
};

int main() {
    struct Settings flags = {1, 0, 1, 5, 0};
    
    printf("Size of Settings: %lu bytes\n", sizeof(struct Settings));
    printf("Active: %u\n", flags.active);
    printf("ReadOnly: %u\n", flags.readOnly);
    printf("Visible: %u\n", flags.visible);
    printf("Priority: %u\n", flags.priority);
    
    return 0;
}
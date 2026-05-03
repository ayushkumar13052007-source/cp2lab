#include <stdio.h>

int main() {
    double arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double *p = arr;
    int i;

    for(i = 0; i < 5; i++) {
        printf("%.1lf ", *(p + i));
    }

    return 0;
}
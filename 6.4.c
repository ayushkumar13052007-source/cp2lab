#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    for(i = 0; i < n; i++) {
        sum += *(p + i);
    }

    printf("Sum = %d\n", sum);
    return 0;
}
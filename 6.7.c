#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n], first;
    int *p = arr;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    first = *p;
    for(i = 0; i < n - 1; i++) {
        *(p + i) = *(p + i + 1);
    }
    *(p + n - 1) = first;

    printf("Left rotated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}
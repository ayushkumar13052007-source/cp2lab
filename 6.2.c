#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    int max = *p;
    for(i = 1; i < n; i++) {
        if(*(p + i) > max)
            max = *(p + i);
    }

    printf("Largest element = %d\n", max);
    return 0;
}
#include <stdio.h>

int main() {
    int n, i, key, count = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(*(p + i) == key)
            count++;
    }

    printf("Frequency of %d = %d\n", key, count);
    return 0;
}
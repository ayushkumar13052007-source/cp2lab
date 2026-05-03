#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    int *left = arr;
    int *right = arr + n - 1;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    while(left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}
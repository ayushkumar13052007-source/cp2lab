#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    for(i = 0; i < n; i++) {
        if(*(p + i) % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\nOdd = %d\n", even, odd);
    return 0;
}
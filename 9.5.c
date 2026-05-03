#include <stdio.h>

void transpose(int a[10][10], int t[10][10], int r, int c) {
    int i, j;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }
}

int main() {
    int a[10][10], t[10][10], r, c;
    int i, j;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    transpose(a, t, r, c);

    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
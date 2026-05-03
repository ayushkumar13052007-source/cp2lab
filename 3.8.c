#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1, p2;
    double distance;

    printf("Enter x and y for first point: ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Enter x and y for second point: ");
    scanf("%d %d", &p2.x, &p2.y);

    distance = sqrt((p2.x - p1.x) * (p2.x - p1.x) +
                     (p2.y - p1.y) * (p2.y - p1.y));

    printf("Distance = %.2lf\n", distance);
    return 0;
}
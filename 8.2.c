#include <stdio.h>

struct Distance {
    int km, meter, cm;
};

int totalCm(struct Distance d) {
    return (d.km * 100000) + (d.meter * 1000) + d.cm;
}

int main() {
    struct Distance dist[5] = {
        {2, 500, 50},
        {1, 800, 200},
        {3, 200, 75},
        {0, 950, 300},
        {4, 100, 25}
    };
    
    struct Distance *maxPtr = &dist[0];
    int i;
    
    for (i = 1; i < 5; i++) {
        if (totalCm(dist[i]) > totalCm(*maxPtr)) {
            maxPtr = &dist[i];
        }
    }
    
    printf("Longest distance: %d km %d m %d cm\n", 
           maxPtr->km, maxPtr->meter, maxPtr->cm);
    return 0;
}
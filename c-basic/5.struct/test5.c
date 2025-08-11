#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;


int main() {
    point p;
    p.x = 10;
    p.y = 20;
    printf("Point coordinates: (%d, %d)\n", p.x, p.y);
    
    return 0;
}
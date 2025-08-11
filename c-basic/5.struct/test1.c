#include <stdio.h>

struct point {
    int x;
    int y;
};

int main() {
    struct point p;
    p.x = 10;
    p.y = 20;
    printf("Point coordinates: (%d, %d)\n", p.x, p.y);
    return 0;
}
#include <stdio.h>

struct point {
    int x;
    int y;
};
struct point createPoint(int x, int y) {
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

int main() {
    struct point p;
    p = createPoint(10, 20);

    printf("Point coordinates: (%d, %d)\n", p.x, p.y);
    return 0;
}
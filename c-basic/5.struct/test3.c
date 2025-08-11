#include <stdio.h>

struct point {
    int x;
    int y;
};


int main() {
    struct point p;
    p.x = 10;
    p.y = 20;   

    struct point *pp;
    pp = &p; 

    (*pp).x = 30; // Using dereferencing to modify x
    (*pp).y = 40; // Using dereferencing to modify y    

    printf("Point coordinates after dereferencing: (%d, %d)\n", p.x, p.y);
    printf("Point coordinates using pointer: (%d, %d)\n", pp->x, pp->y);


    return 0;
}
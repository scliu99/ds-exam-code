#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int x;
    int y;
} point;

int main()
{
    point *p;
    p = (point*)malloc(sizeof(point));
    p->x = 5;
    p->y = 10;
    printf("%d\n", p->x);
    printf("%d\n", p->y);
    free(p); // Free the allocated memory
    return 0;
}
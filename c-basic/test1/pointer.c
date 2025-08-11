#include <stdio.h>

int main(void) {
    int n = 10; 
    int *p1 = &n; 
    int **p2 = &p1;
    int ***p3 = &p2;

    printf("n 位址：%p\n", p1);
    printf("p1 位址：%p\n", p2);
    printf("p2的值：%d\n", **p2);
    printf("p3的值：%d\n", ***p3);

    return 0;
}
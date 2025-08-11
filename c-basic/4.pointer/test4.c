#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap: a = %d, b = %d\n", *a, *b);
}

int main()
{
    int m = 5;
    int n = 10;
    swap(&m, &n);
    printf("After swap: m = %d, n = %d\n", m, n);
    return 0;
}

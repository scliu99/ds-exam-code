#include <stdio.h>
int main()
{
    int a;
    int* p;
    a = 5;
    p = &a; // p 現在指向了a的地址
    printf("a 的值是: %d\n", a);
    printf("a 的地址是: %p\n", (void*)&a);
    printf("p 的值(地址)是: %p\n", (void*)p);
    printf("p 指向的值是: %d\n", *p);
}
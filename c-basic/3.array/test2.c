#include <stdio.h>
int main()
{
    int a[] = {16, 47, 89, 42, 38};
    printf("%p\n", &a);     // 用&來取址，　％p是指標的格式化輸出
    printf("%p\n", &a[0]);
}
#include <stdio.h>
int main()
{
    int a[] = {16, 47, 89, 42, 38};
    printf("%zu\n", sizeof(a));     // 輸出陣列的總大小 
    printf("%zu\n", sizeof(a[0]));     // 輸出陣列中單個元素的大小
    int len = sizeof(a) / sizeof(a[0]); // 計算陣列長度
    printf("Length of array: %d\n", len);
}
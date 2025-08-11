#include <stdio.h>
// swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    printf("temp = %d\n", temp);
    // print a and b addresses
    printf("Address of a: %p, Address of b: %p\n", (void*)a, (void*)b);
    
    *a = *b;
    *b = temp;
}

int main() {
    // call swap function
    int x = 5, y = 10;
    swap(&x, &y);
    printf("交換後的值: x = %d, y = %d\n", x, y);
    return 0;
}


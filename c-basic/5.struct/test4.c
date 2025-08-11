#include <stdio.h>

typedef int myType1;
typedef char myType2;


int main() {
    myType1 a = 10;
    myType2 b = 'A';

    printf("Value of a: %d\n", a);
    printf("Value of b: %c\n", b);


    return 0;
}
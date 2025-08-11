#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));
    *p = 42; // Assigning a value to the allocated memory
    printf("Value: %d\n", *p);

    return 0;
}
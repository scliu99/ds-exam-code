#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
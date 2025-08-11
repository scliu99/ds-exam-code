#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s;
    s = (char *)malloc(10 * sizeof(char)); // Allocate memory for 100 characters
    strcpy(s, "Hello");                    // Copy a string into the allocated memory
    printf("String: %s\n", s);             // Print the string
    return 0;
}
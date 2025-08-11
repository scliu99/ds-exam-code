#include <stdio.h>

int main(int argc, char const *argv[]) 
{
    // sum 1 to 100
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;   
    }
    printf("Sum of 1 to 100 is: %d\n", sum);
    
    return 0;
}
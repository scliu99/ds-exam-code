#include <stdio.h>
int fn(int N)
{
    if(N <= 1)
        return N;
    else
        return fn(N-1) + fn(N-2) + 1;
}
int main(){

    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    
    int result = fn(N);
    printf("Result: %d\n", result);
    
    return 0;

}

#include <stdio.h>
/*
    需求:
    計算1加到100的和,並輸出結果
*/
// 無參數，無回傳值的函式
void sum1to100()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i; // 累加
    }
    // 輸出結果
    printf("Sum of 1 to 100 is: %d\n", sum);
}

int main(int argc, char const *argv[])
{
    // 呼叫函式
    sum1to100();

    return 0;
}
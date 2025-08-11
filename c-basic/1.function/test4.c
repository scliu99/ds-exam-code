#include <stdio.h>
/*
    需求:
    計算1加到100的和,並回傳結果
*/
// 無參數，有回傳值的函式
int sum1to100()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i; // 累加
    }
    // 回傳結果
    return sum;    
}

int main(int argc, char const *argv[])
{
    // 呼叫函式並接收回傳值
    int total = sum1to100();
    // 輸出結果
    printf("Sum of 1 to 100 is: %d\n", total);
    return 0;
}
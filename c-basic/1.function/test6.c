#include <stdio.h>
/*
    需求:
    計算1加到n的和，並回傳結果，n值為呼叫函數時以參數方式傳入
*/
// 有參數，有回傳值的函式
int sum1toN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i; // 累加
    }
    // 回傳結果
    return sum;
}

int main(int argc, char const *argv[])
{
    // 呼叫函式並接收回傳值
    int total = sum1toN(1000);
    // 輸出結果
    printf("Sum of 1 to 1000 is: %d\n", total);
    return 0;
}
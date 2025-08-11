#include <stdio.h>
/*
    需求:
    程式中可能會有多個地方用到1加到100的和,
    每次使用時都寫出完整(相同)的程式碼太麻煩了,
    所以我們可以將這段程式碼寫成一個函式,
    這樣在需要使用的時候只需要呼叫這個函式即可
    這樣可以提高程式碼的重用性和可讀性
    這個函式的功能是計算1加到100的和,
    並返回這個和的值
*/
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
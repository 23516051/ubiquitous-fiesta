#include <stdio.h>

int main(void)
{
    int num1, num2, sum;

    // 2つの数字を入力してもらう
    printf("1つ目の数字を入力してください: ");
    scanf("%d", &num1);

    printf("2つ目の数字を入力してください: ");
    scanf("%d", &num2);

    // 2つの数字を比較
    if (num1 > num2) {
        printf("1つ目の数字 %d は、2つ目の数字 %d より大きいです。\n", num1, num2);
    }
    if (num1 < num2) {
        printf("1つ目の数字 %d は、2つ目の数字 %d より小さいです。\n", num1, num2);
    }
    if (num1 == num2) {
        printf("1つ目の数字 %d と2つ目の数字 %d は等しいです。\n", num1, num2);
    }

    // 2つの数字の和を計算
    sum = num1 + num2;

    // 和が偶数か奇数かを判定
    if (sum % 2 == 0) {
        printf("2つの数字の和 %d は偶数です。\n", sum);
    }
    if (sum % 2 != 0) {
        printf("2つの数字の和 %d は奇数です。\n", sum);
    }

    return 0;
}

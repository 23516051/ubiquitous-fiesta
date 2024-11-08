#include <stdio.h>

int main(void)
{
    int num1, num2;

    // 2つの数字を入力してもらう
    printf("1つ目の数字を入力してください: ");
    scanf("%d", &num1);

    printf("2つ目の数字を入力してください: ");
    scanf("%d", &num2);

    // 数字を比較して判定
    if (num1 > num2) {
        printf("1つ目の数字 %d は、2つ目の数字 %d より大きいです。\n", num1, num2);
    }
    else if (num1 < num2) {
        printf("1つ目の数字 %d は、2つ目の数字 %d より小さいです。\n", num1, num2);
    }
    else {
        printf("1つ目の数字 %d と2つ目の数字 %d は等しいです。\n", num1, num2);
    }

    return 0;
}

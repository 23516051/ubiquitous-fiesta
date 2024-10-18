#include <stdio.h>

int main()
{
int num1, num2, sum;

    printf("一つ目の数字を入力してください");
    scanf("%d", &num1);
    
    printf("二つ目の数字を入力してください");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    printf("足し算の結果 %d + %d = %d\n", num1, num2, sum);
    
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void check_password_strength(const char *password) {
    int length = strlen(password);
    int has_upper = 0, has_lower = 0;

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) has_upper = 1;
        if (islower(password[i])) has_lower = 1;
    }

    if (length < 8) {
        printf("このパスワードは弱いです。\n- 8文字以上である必要があります。\n");
    } else if (!has_lower) {
        printf("このパスワードは弱いです。\n- 小文字を含む必要があります。\n");
    } else if (!has_upper) {
        printf("このパスワードは弱いです。\n- 大文字を含む必要があります。\n");
    } else {
        printf("このパスワードは強いです。\n");
    }
}

int main() {
    char password[256];

    printf("パスワードを入力してください: ");
    scanf("%255s", password); 

    check_password_strength(password);

    return 0;
}

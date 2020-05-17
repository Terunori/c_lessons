#include <stdio.h>

/*
- ポインタ: アドレスを格納するための変数
- ポインタ変数の宣言 * を頭に
- &: アドレス演算子
- &a: aのアドレス、を意味する
- *: 間接演算子: 間接的に値をとってこい
*/

int main(void) {

    int a;
    a = 10;

    int *pa; // pointer for a
    pa = &a; // 代入する際には*は不要

    printf("%d\n", *pa);

    return 0;
}

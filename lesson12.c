#include <stdio.h>

/*
- 変数の有効範囲について
- ブロック内（関数内など）で宣言されたもの：ローカル変数
- 外でも共有したい場合、引数や返り値とするか、
  グローバル変数とする（グローバル変数は非推奨）
*/

void func(void) {
    int a = 0;
    a++;
    printf("a: %d\n", a);
}

int main(void) {

    func();

//     printf("[main]a: %d\n", a); ここでaは呼び出せない。

    return 0;
}

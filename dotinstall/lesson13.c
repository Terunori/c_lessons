#include <stdio.h>

/*
- 変数の有効期限について
- 自動変数: 関数の処理が終わるごとに消滅
- 静的変数: static をつける：次の関数の処理のときに引き継がれる
*/

void func(void) {
    int a = 0; // 自動変数
    static int b = 0;
    a++;
    b++;
    printf("a: %d, b: %d\n", a, b);
}

int main(void) {

    func();
    func();
    func();
    func();

//    printf("b: %d\n", b); もちろんこれはダメ

    return 0;
}

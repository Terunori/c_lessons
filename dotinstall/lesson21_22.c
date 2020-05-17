#include <stdio.h>

/*
- 値渡し    : 変数を直接渡す
- 参照渡し  : アドレスを代わりに渡す

値渡しではメモリ効率は悪いが、ローカル変数としてそれぞれ値を保持する
参照渡しではオリジナルが書き換えられる

参照渡しでしかできないことがある
例えば、入れ替え(swap)

*/

void swap(int *pa, int *pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main(void) {

    int a = 7;
    int b = 10;
    swap(&a, &b); // 普通の関数だと返り値は一つだけだから困る
    printf("a: %d, b: %d\n", a, b);

    return 0;
}

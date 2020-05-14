#include <stdio.h>

/*
- ポインタでメモリを節約する
*/


// 従来方法
void f(long a) {    // 引数でもまた8アドレス分必要（ローカル変数が作られる）
    a += 100;       // ここではローカル変数の方を変更
    printf("%ld\n", a);
}

int main(void) {

    long a = 1000;  // long型は8アドレス分領域が必要
    f(a);

    printf("%ld\n", a); // 1000のまま

    return 0;
}

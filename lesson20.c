#include <stdio.h>

/*
- ポインタでメモリを節約する
- lesson19をアドレスを使うとどうなるか
- 高速化もはかれる
*/

// 従来方法
void f(long *pa) { // 引数ではアドレス、つまり4個分の領域で済む！！
    *pa = *pa + 100; // ここではaの値を直接変更
    printf("%ld\n", *pa);
}

int main(void){

    long a = 1000; // long型は8アドレス分領域が必要
    f(&a);

    printf("%ld\n", a); // 1100になっている

    return 0;
}

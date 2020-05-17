#include <stdio.h>

/*
- ポインタ
- ポインタ変数 *paは4アドレス分領域を確保
- &a はaが占める領域の先頭のアドレス(例: #0001)
- pa = &a // pa = #0001
- 間接演算子 *paによって、
  paの値(#0001)がアドレスとして示している値(aの値)を持ってくる
- つまり、a と *pa は同じもの
*/

int main(void) {

    int a;
    a = 10;

    int *pa; // pointer for a
    pa = &a; // 代入する際には*は不要

    printf("%d\n", *pa);

    return 0;
}

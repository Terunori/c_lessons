#include <stdio.h>

/*
- 配列
- 複数データを一つの変数名で格納
- 型 変数名[個数]; // 領域確保
- 格納や呼び出しは0スタート

- 宣言時にまとめて格納もできる

*/

int main(void) {

    int sales[3];

    sales[0] = 200;
    sales[1] = 500;
    sales[2] = 300;
    // sales[3] = 100; これは暴走するのでやってはならない

    int sales2[3] = {200, 100};
    int sales3[] = {200, 400, 100, 500}; // 自動で個数は4となる

    printf("%d\n", sales[1]);
    printf("%d\n", sales2[2]); // 0 : 確保されているため
    printf("%d\n", sales3[3]);

    return 0;
}

#include <stdio.h>

/*
黒板に N 個の正の整数 A1,...,AN

が書かれています．

すぬけ君は，黒板に書かれている整数がすべて偶数であるとき，次の操作を行うことができます．

    黒板に書かれている整数すべてを，2

    で割ったものに置き換える．

すぬけ君は最大で何回操作を行うことができるかを求めてください．
*/

int main(void) {
    int n;
    int i = -1;
    int flag = 0;

    scanf("%d", &n);
    int listn[n];

    // input
    for (int j=0; j < n; j++) {
        scanf("%d", &listn[j]);
    }

    // iterate
    // Do while 文の方がスムーズ？
    while(flag==0) {
        i++;
        for (int j = 0; j < n; j++)
        {
            if (listn[j] % 2 == 0) {
                listn[j] /= 2;
            }
            else {
                flag++;
                break;
            }
        }
    }

    printf("%d\n", i);
    return 0;
}

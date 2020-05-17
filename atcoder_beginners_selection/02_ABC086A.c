#include <stdio.h>

/*
シカのAtCoDeerくんは二つの正整数 a,b を見つけました。 a と b の積が偶数か奇数か判定してください。
*/

int main(void) {

    int a, b;

    scanf("%d %d", &a, &b);
    if ((a*b)%2 == 0) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }

    return 0;
}

#include <stdio.h>

/*
- 引数や返り値のない関数
- メイン関数をまず実行するようになっている
- 何もなければ（正常終了したら）0を返す慣習
- 関数を書く順序について、
  C言語では未定義のものをあとに書くなら
  プロトタイプ宣言が必要
*/

// プロトタイプ宣言
void sayHi(void);
float getMax(float a, float b);

int main(void) {

    sayHi();
    printf("%f is larger.\n", getMax(3, 2.3));

    return 0;
}

void sayHi(void)
{
    printf("hi!\n");
}

float getMax(float a, float b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

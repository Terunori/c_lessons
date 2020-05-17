#include <stdio.h>

/*
 高橋君はデータの加工が行いたいです。

整数 a,b,c
と、文字列 s が与えられます。 a+b+c の計算結果と、文字列 s を並べて表示しなさい。 
*/

int main(void) {

    int a, b, c;
    char s[101];

    scanf("%d", &a);
    scanf("%d %d", &b, &c);

    scanf("%s", s);

    printf("%d %s\n", a+b+c,s);

    return 0;
}

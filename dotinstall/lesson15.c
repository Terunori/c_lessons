#include <stdio.h>

/*
- 文字列: charの配列（※終端は「\０」）

int i;
× string s;

"abc"

char s[] = {'a', 'b', 'c', '\0'};
char s[] = "abc";
char s[4] = "abc"; // 4文字であることに注意

*/

int main(void) {

    char s[] = "abc";

    printf("s[1] is %c\n", s[1]);
    printf("s[3] is %c\n", s[3]);

    return 0;
}

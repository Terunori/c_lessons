#include <stdio.h>
#include <string.h>

/*
英小文字からなる文字列 S が与えられます。
Tが空文字列である状態から始め、以下の操作を好きな回数繰り返すことで S=T

とすることができるか判定してください。

    Tの末尾に dream dreamer erase eraser のいずれかを追加する。
*/

int main(void) {

  char S[100001], t[8]={}, t2[11] = {};
  scanf("%s", S);

  int i = 0;
  char c = S[0];

  int flag = 1;

  while (c != '\0') {
    strncpy(t, S + i, 7);
    t[7]='\0';
    strncpy(t2, S + i, 10);
    t2[10] = '\0';

    if (strcmp(t, "dreamer") == 0 && strcmp(t2, "dreamerase") != 0) {
      i += 7;
      c = S[i];
    } else {
      strncpy(t, S + i, 6);
      t[6] = '\0';
      strncpy(t2, S + i, 10);
      t2[10] = '\0';

      if (strcmp(t, "eraser") == 0 && strcmp(t2, "eraseerase") != 0) {
        i += 6;
        c = S[i];
      } else {
        strncpy(t, S + i, 5);
        t[5] = '\0';

        if (strcmp(t, "dream") == 0 || strcmp(t, "erase") == 0) {
          i += 5;
          c = S[i];
        } else {
          flag = 0;
          break;
        }
      }
    }
  }

  if (flag == 0) {
    printf("NO\n");
  } else {
    printf("YES\n");
  }

  return 0;
}

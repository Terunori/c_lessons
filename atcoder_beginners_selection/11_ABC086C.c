#include <stdio.h>
#include <stdlib.h>

/*
シカのAtCoDeerくんは二次元平面上で旅行をしようとしています。
AtCoDeerくんの旅行プランでは、時刻 0 に 点 (0,0) を出発し、 1 以上 N 以下の各 i
に対し、時刻 ti に 点 (xi,yi) を訪れる予定です。

AtCoDeerくんが時刻 t
に 点 (x,y) にいる時、 時刻 t+1 には 点 (x+1,y), (x−1,y), (x,y+1), (x,y−1)
のうちいずれかに存在することができます。
その場にとどまることは出来ないことに注意してください。
AtCoDeerくんの旅行プランが実行可能かどうか判定してください。
*/

int main(void) {

  int N;
  scanf("%d", &N);

  int t = 0, x = 0, y = 0;
  int old_t = 0, old_x = 0, old_y = 0;
  int flag = 1;

  for (int i = 0; i < N; i++) {

    scanf("%d %d %d", &t, &x, &y);

    t-=old_t;
    x-=old_x;
    y-=old_y;

    if (abs(x)+abs(y) > t || abs(x+y)%2 != t%2) {
      flag = 0;
      break;
    }

    old_t += t;
    old_x += x;
    old_y += y;
  }

  if (flag == 1) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}

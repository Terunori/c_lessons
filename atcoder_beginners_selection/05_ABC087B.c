#include <stdio.h>

/*
あなたは、500 円玉を A 枚、100 円玉を B 枚、50 円玉を C 枚持っています。
これらの硬貨の中から何枚かを選び、合計金額をちょうど X

円にする方法は何通りありますか。

同じ種類の硬貨どうしは区別できません。2
通りの硬貨の選び方は、ある種類の硬貨についてその硬貨を選ぶ枚数が異なるとき区別されます。
*/

int maxCoin(int *num, int *amount, int coin) {
  if (*amount/coin >= *num) {
    return *num;
  } else {
    return *amount / coin;
  }
}

int main(void) {
  int A, B, C, X;
  int tmp, tmp2;
  int ans = 0;

  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  scanf("%d", &X);

  for (int i = 0; i <= maxCoin(&A, &X, 500); i++) {
    tmp = X - i * 500;
    for (int j = 0; j <= maxCoin(&B, &tmp, 100); j++) {
      tmp2 = tmp - j * 100;
      if (tmp2 / 50 <= C){
        ans++;
      }
    }
  }

  printf("%d\n", ans);
  return 0;
}

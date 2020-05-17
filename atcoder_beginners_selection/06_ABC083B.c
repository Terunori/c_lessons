#include <stdio.h>

/*
1 以上 N 以下の整数のうち、10 進法での各桁の和が A 以上 B
以下であるものの総和を求めてください。
*/

int digsum(int *i) {
  int ans = 0;
  int num = *i;
  while (num > 0) {
    ans += num % 10;
    num /= 10;
  }
  return ans;
}

int main(void) {

  int N, A, B, sum, dsum;
  scanf("%d", &N);
  scanf("%d", &A);
  scanf("%d", &B);

  for (int i = 0; i < N+1; i++) {
    dsum = digsum(&i);
    if (dsum >= A && dsum <= B) {
      sum += i;
    }
  }

  printf("%d", sum);
  return 0;
}

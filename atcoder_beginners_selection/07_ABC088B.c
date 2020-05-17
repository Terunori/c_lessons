#include <stdio.h>

/*
N 枚のカードがあります. i 枚目のカードには, ai という数が書かれています.
Alice と Bob は, これらのカードを使ってゲームを行います. ゲームでは, Alice と
Bob が交互に 1 枚ずつカードを取っていきます. Alice が先にカードを取ります. 2
人がすべてのカードを取ったときゲームは終了し,
取ったカードの数の合計がその人の得点になります. 2
人とも自分の得点を最大化するように最適な戦略を取った時, Alice は Bob
より何点多く取るか求めてください.
*/

void bubble_sort(int array[], int *len);

int main(void) {
  int N;
  int oddsum = 0;
  int evensum = 0;
  scanf("%d", &N);

  int lista[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &lista[i]);
  }

  bubble_sort(lista, &N);  // lista と &lista[0] は一緒

  // for (int i = 0; i < N; i++) {
  //   printf("%d ", lista[i]);
  // }
  // printf("\n");

  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      oddsum += lista[i];
    } else {
      evensum += lista[i];
    }
  }

  printf("%d", oddsum - evensum);
  return 0;
}

void bubble_sort(int array[], int *len) {
  int tmp;

  for (int i = 0; i < *len-1; i++) {
    for (int j = *len - 1; j > i; j--) {
      if (array[j-1] < array[j]) {
        tmp = array[j-1];
        array[j-1] = array[j];
        array[j] = tmp;
      }
    }
  }
}

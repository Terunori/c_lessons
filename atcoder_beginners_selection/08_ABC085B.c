#include <stdio.h>

/*
X 段重ねの鏡餅 (X≥1) とは、X
枚の円形の餅を縦に積み重ねたものであって、どの餅もその真下の餅より直径が小さい（一番下の餅を除く）もののことです。例えば、直径
10、8、6 センチメートルの餅をこの順に下から積み重ねると 3
段重ねの鏡餅になり、餅を一枚だけ置くと 1

段重ねの鏡餅になります。

ダックスフンドのルンルンは N
枚の円形の餅を持っていて、そのうち i 枚目の餅の直径は di
センチメートルです。これらの餅のうち一部または全部を使って鏡餅を作るとき、最大で何段重ねの鏡餅を作ることができるでしょうか。
*/

int main(void) {
  int N;
  scanf("%d", &N);

  int d[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &d[i]);
  }

  int unique_d[N];
  int flag = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < i; j++) {
      if (d[i]==unique_d[j]) {
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      unique_d[i] = d[i];
    } else {
      unique_d[i] = 0;
    }
    flag = 0;
  }

  int ans = 0;
  for (int i=0; i < N; i++) {
    if (unique_d[i] != 0) {
      ans++;
    }
  }
  printf("%d\n", ans);
  return 0;
}

// かしこい。配列に格納されていれば重複として除く。
/*
    #include <stdio.h>
    int main(void){

      int N=0;
      int i=0;
      int ret=0;
      int ans=0;
      scanf("%d",&N);
      int d[101] = {};

      for(i=0;i<N;i++){
        scanf("%d",&ret);
        if(d[ret] == 0){
          ans++;
          d[ret]=1;
        }
      }

      printf("%d",ans);

     return 0;
    }
*/

#include <stdio.h>
#include <math.h>

/*
すぬけ君は 1,2,3 の番号がついた 3 つのマスからなるマス目を持っています。 各マスには 0 か 1 が書かれており、マス i には si が書かれています。

すぬけ君は 1 が書かれたマスにビー玉を置きます。 ビー玉が置かれるマスがいくつあるか求めてください。
*/

int main(void) {

    int in;
    int ans = 0;
    int digit;

    scanf("%d", &in);

    for (int i = 0; i < 3; i++){
        digit = in / pow(10, 2 - i);
        ans += digit;
        in -= digit * pow(10, 2 - i);
    }

    printf("%d\n", ans);

    return 0;
}

/*

    #include<stdio.h>
    int main(){
      int i, j;
      char c;
      for(i=j=0; i<3; i++){
        scanf("%c", &c);
        j+=c=='1'?1:0;}
      printf("%d", j);
      return 0;
    }

*/

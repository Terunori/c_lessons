#include <stdio.h>

/*
- 三項演算子

- if () {
    return a;
  } else {
    return b;
  }
  を一文で示す

  返り値 = (条件) ? A : B;

- 本当に単純なときだけ使う

*/

float getMax(float a, float b);

int main(void) {

    float result = getMax(5.3, 2.6);
    printf("%f\n", result);

    return 0;
}

float getMax(float a, float b){
    return (a >= b) ? a : b;
    // if (a >= b)
    // {
    //     return a;
    // }
    // else
    // {
    //     return b;
    // }
}

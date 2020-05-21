#include <stdio.h>
#define LENGTH 5

int main(void) {
  int i, j;

  for (i = 0; i < LENGTH; i++) {
    for (j = 0; j < LENGTH; j++) {
      printf("■ ");
    }
    printf("\n");
  }

  return 0;
}

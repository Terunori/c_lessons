#include <stdio.h>

/*
- 条件分岐 if
- < > <= >= == !=
*/

int main(void) {

    int score = 57;

    if (score >= 60) {
        printf("OK!\n");
    } else if (score >= 55) {
        printf("So so!\n");
    } else {
        printf("NG\n");
    }

    return 0;
}

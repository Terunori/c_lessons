#include <stdio.h>

/*
- for loop

- continue  : skip once
- break     : get out of the loop
*/

int main(void) {

    for (int m = 0; m < 10; m++) {
        if (m % 3 == 0) {
            continue;
        } else if (m == 8) {
            break;
        }
        printf("m: %d\n", m);
    }
    return 0;
}

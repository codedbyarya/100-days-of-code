#include <stdio.h>
int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {          // rows (from 5 to 1)
        for (j = 1; j <= i; j++) {      // print stars equal to row number
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

enum Example {A = 10, B, C, D = 20, E};

int main() {
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);
    return 0;
}

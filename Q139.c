#include <stdio.h>

enum Test {ONE = 1, TWO = 5, THREE = 10};

int main() {
    enum Test t1 = ONE, t2 = TWO, t3 = THREE;
    printf("ONE = %d\n", t1);
    printf("TWO = %d\n", t2);
    printf("THREE = %d\n", t3);
    return 0;
}

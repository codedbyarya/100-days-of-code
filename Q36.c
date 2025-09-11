#include <stdio.h>
int main() {
    int a, b, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    hcf = a; // now a==b
    printf("HCF = %d\n", hcf);
    return 0;
}

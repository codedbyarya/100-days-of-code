#include <stdio.h>
int main() {
    int n, rem, product = 1, hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        if (rem % 2 != 0) {   // check odd
            product *= rem;
            hasOdd = 1;
        }
        n /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits in the number\n");

    return 0;
}

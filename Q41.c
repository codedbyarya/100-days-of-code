#include <stdio.h>
#include <math.h>
int main() {
    int n, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;              // extract last digit
    digits = (int)log10(n);     // number of digits - 1
    first = n / pow(10, digits);

    swapped = last * pow(10, digits) + (n % (int)pow(10, digits)) - last + first;

    printf("Number after swapping first and last digit = %d\n", swapped);
    return 0;
}

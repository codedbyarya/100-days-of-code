#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, temp, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }

    if (sum == n)
        printf("%d is a Strong Number\n", n);
    else
        printf("%d is NOT a Strong Number\n", n);

    return 0;
}

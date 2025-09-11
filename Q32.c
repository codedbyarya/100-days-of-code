#include <stdio.h>
int main() {
    int n, rev = 0, temp, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (rev == n)
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is NOT a Palindrome\n", n);
    return 0;
}

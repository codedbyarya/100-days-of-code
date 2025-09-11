#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (float)(2 * i - 1) / (2 * i);  // odd/even
    }

    printf("Sum of series = %.4f\n", sum);
    return 0;
}

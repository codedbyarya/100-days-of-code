#include <stdio.h>
int main() {
    long long bin, onesComp = 0, place = 1;
    int digit;
    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    while (bin != 0) {
        digit = bin % 10;
        if (digit == 0)
            onesComp += 1 * place;  // flip 0 → 1
        else
            onesComp += 0 * place;  // flip 1 → 0
        bin /= 10;
        place *= 10;
    }

    printf("1's Complement = %lld\n", onesComp);
    return 0;
}

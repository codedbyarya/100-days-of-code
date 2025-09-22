#include <stdio.h>
int main() {
    int num, digit, freq[10] = {0}, maxFreq = 0, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }

    printf("Digit with maximum frequency = %d (appears %d times)\n", result, maxFreq);
    return 0;
}

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int xor1=0, xor2=0;
    for(int i=0;i<n;i++) {
        xor1 ^= arr[i];
        xor2 ^= i;
    }
    printf("%d", xor1 ^ xor2);
    return 0;
}

#include <stdio.h>
int main() {
    int arr[100], n, i, max1, max2;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    max1 = max2 = -1e9; // very small
    for (i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == -1e9) printf("No second largest element\n");
    else printf("Second largest = %d\n", max2);
    return 0;
}


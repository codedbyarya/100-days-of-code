#include <stdio.h>
int main() {
    int n, i, arr[100], num, pos;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &num);

    // Find position to insert
    for (pos = n - 1; pos >= 0 && arr[pos] > num; pos--) {
        arr[pos + 1] = arr[pos];  // Shift elements right
    }
    arr[pos + 1] = num; // Insert element

    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}

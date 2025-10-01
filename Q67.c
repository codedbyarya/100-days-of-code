#include <stdio.h>
int main() {
    int arr[100], n, i, pos, num;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter position (1-based): ");
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &num);

    for (i = n; i >= pos; i--) arr[i] = arr[i-1]; // Shift right
    arr[pos-1] = num;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}

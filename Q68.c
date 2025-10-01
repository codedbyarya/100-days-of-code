#include <stdio.h>
int main() {
    int arr[100], n, i, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter position to delete (1-based): ");
    scanf("%d", &pos);

    for (i = pos-1; i < n-1; i++) arr[i] = arr[i+1]; // Shift left
    n--;

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}

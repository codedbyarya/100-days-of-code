#include <stdio.h>
int main() {
    int n1, n2, i, arr1[50], arr2[50], merged[100];

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    for (i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    for (i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    for (i = 0; i < n1; i++) merged[i] = arr1[i];
    for (i = 0; i < n2; i++) merged[n1 + i] = arr2[i];

    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) printf("%d ", merged[i]);

    return 0;
}

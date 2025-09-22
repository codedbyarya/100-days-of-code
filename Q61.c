#include <stdio.h>
int main() {
    int n, i, arr[100], key, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (!found) printf("Not found\n");
    return 0;
}

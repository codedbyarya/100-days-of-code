#include <stdio.h>
int main() {
    int a[10][10], r, c, i, j;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for (i=0;i<r;i++)
        for (j=0;j<c;j++) scanf("%d",&a[i][j]);

    printf("Matrix:\n");
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}

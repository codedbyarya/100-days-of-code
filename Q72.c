#include <stdio.h>
int main() {
    int a[10][10], r, c, i, j, sum=0;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
            sum += a[i][j];
        }

    printf("Sum = %d\n", sum);
    return 0;
}

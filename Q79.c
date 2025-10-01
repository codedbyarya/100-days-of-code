#include <stdio.h>
int main() {
    int a[10][10], r, c, i, j, k;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++) scanf("%d",&a[i][j]);

    printf("Diagonal Traversal:\n");
    for(k=0;k<r+c-1;k++) {
        for(i=0;i<r;i++) {
            j = k - i;
            if(j>=0 && j<c) printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

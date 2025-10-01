#include <stdio.h>
int main() {
    int a[10][10], n, i, j, diag[100], k=0, distinct=1;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
            if(i==j) diag[k++]=a[i][j];
        }

    for(i=0;i<k;i++)
        for(j=i+1;j<k;j++)
            if(diag[i]==diag[j]) distinct=0;

    if(distinct) printf("Diagonal elements are distinct\n");
    else printf("Diagonal elements are NOT distinct\n");
    return 0;
}

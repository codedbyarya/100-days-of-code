#include <stdio.h>

void sort(int arr[], int n) {
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1]) {
                int t=arr[j]; arr[j]=arr[j+1]; arr[j+1]=t;
            }
}

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    sort(arr,n);
    printf("%d", arr[k-1]);
    return 0;
}

#include <stdio.h>

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int max=0, sum=0;
    for(int i=0;i<k;i++) sum+=arr[i];
    max=sum;
    for(int i=k;i<n;i++) {
        sum+=arr[i]-arr[i-k];
        if(sum>max) max=sum;
    }
    printf("%d", max);
    return 0;
}

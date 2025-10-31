#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int count=0, candidate=-1;
    for(int i=0;i<n;i++) {
        if(count==0) candidate=arr[i];
        count += (arr[i]==candidate)?1:-1;
    }
    count=0;
    for(int i=0;i<n;i++) if(arr[i]==candidate) count++;
    if(count > n/2) printf("%d", candidate);
    else printf("-1");
    return 0;
}

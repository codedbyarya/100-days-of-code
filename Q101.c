#include <stdio.h>

int firstOccurrence(int arr[], int n, int x) {
    int low = 0, high = n-1, res = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == x) { res = mid; high = mid - 1; }
        else if(arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return res;
}

int lastOccurrence(int arr[], int n, int x) {
    int low = 0, high = n-1, res = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == x) { res = mid; low = mid + 1; }
        else if(arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return res;
}

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&x);
    int first = firstOccurrence(arr,n,x);
    int last = lastOccurrence(arr,n,x);
    printf("%d %d", first, last);
    return 0;
}

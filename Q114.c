#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int n=strlen(s), max=0;
    for(int i=0;i<n;i++) {
        int freq[256]={0}, len=0;
        for(int j=i;j<n;j++) {
            if(freq[(int)s[j]]) break;
            freq[(int)s[j]]=1; len++;
            if(len>max) max=len;
        }
    }
    printf("%d", max);
    return 0;
}

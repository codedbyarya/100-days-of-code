#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);
    if(strlen(s1)!=strlen(s2)) { printf("Not Anagram"); return 0; }
    int count[26]={0};
    for(int i=0;s1[i];i++) count[s1[i]-'a']++;
    for(int i=0;s2[i];i++) count[s2[i]-'a']--;
    for(int i=0;i<26;i++) if(count[i]!=0) { printf("Not Anagram"); return 0; }
    printf("Anagram");
    return 0;
}

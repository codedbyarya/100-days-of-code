#include <stdio.h>
int main() {
    char str[200];
    int freq[26]={0}, i;
    printf("Enter a lowercase string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++) {
        int index = str[i]-'a';
        if(index>=0 && index<26) {
            freq[index]++;
            if(freq[index]==2) {
                printf("First repeating lowercase letter: %c\n", str[i]);
                return 0;
            }
        }
    }
    printf("No repeating lowercase alphabet found.\n");
    return 0;
}

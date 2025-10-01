#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    int i, len;
    printf("Enter a string: ");
    gets(str);

    len=0;
    while(str[len]!='\0') len++;

    for(i=0;i<len;i++) rev[i]=str[len-1-i];
    rev[len]='\0';

    printf("Reversed: %s\n", rev);
    return 0;
}

#include <stdio.h>
int main() {
    char str[100];
    int i=0;
    printf("Enter lowercase string: ");
    gets(str);

    while(str[i]!='\0') {
        if(str[i]>='a' && str[i]<='z')
            str[i] = str[i]-32; // ASCII difference
        i++;
    }

    printf("Uppercase: %s\n", str);
    return 0;
}

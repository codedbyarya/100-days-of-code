#include <stdio.h>
int main() {
    char str[200];
    int i=0, spaces=0, digits=0, special=0;
    printf("Enter a string: ");
    gets(str);

    while(str[i]!='\0') {
        if(str[i]==' ')
            spaces++;
        else if(str[i]>='0' && str[i]<='9')
            digits++;
        else if(!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')))
            special++;
        i++;
    }

    printf("Spaces: %d\nDigits: %d\nSpecial Characters: %d\n", spaces, digits, special);
    return 0;
}

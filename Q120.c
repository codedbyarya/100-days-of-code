#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    gets(str);
    int newWord=1;
    for(int i=0;str[i]!='\0';i++) {
        if(newWord && isalpha(str[i])) {
            str[i]=toupper(str[i]);
            newWord=0;
        } else str[i]=tolower(str[i]);
        if(str[i]=='.' || str[i]=='!' || str[i]=='?') newWord=1;
    }
    printf("%s", str);
    return 0;
}

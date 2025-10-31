#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    gets(name);
    int len = strlen(name), i;
    printf("%c.", name[0]);
    for(i = 0; i < len; i++) {
        if(name[i] == ' ' && name[i+1] != '\0')
            break;
    }
    printf(" %s", &name[i+1]);
    return 0;
}

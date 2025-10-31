#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while(start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[200];
    gets(str);
    char *word_start = str;
    char *temp = str;

    while(*temp) {
        temp++;
        if(*temp == ' ' || *temp == '\0') {
            reverse(word_start, temp - 1);
            word_start = temp + 1;
        }
    }
    printf("%s", str);
    return 0;
}

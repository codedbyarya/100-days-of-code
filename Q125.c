#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();  // clear buffer
    gets(text);

    fprintf(fp, "\n%s", text);
    fclose(fp);

    printf("Text appended successfully!\n");
    return 0;
}

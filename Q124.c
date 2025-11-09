#include <stdio.h>

int main() {
    FILE *src, *dest;
    char srcName[50], destName[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", srcName);
    printf("Enter destination filename: ");
    scanf("%s", destName);

    src = fopen(srcName, "r");
    dest = fopen(destName, "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    printf("File copied successfully!\n");

    fclose(src);
    fclose(dest);
    return 0;
}

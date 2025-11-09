#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);
    printf("File converted to uppercase successfully!\n");
    return 0;
}

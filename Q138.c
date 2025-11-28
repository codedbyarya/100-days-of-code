#include <stdio.h>

enum Color {RED_C, GREEN_C, BLUE_C, YELLOW_C, BLACK_C};

int main() {
    enum Color c;
    const char *names[] = {"RED_C", "GREEN_C", "BLUE_C", "YELLOW_C", "BLACK_C"};

    for (c = RED_C; c <= BLACK_C; c++) {
        printf("%s = %d\n", names[c], c);
    }
    return 0;
}

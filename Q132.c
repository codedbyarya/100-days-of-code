#include <stdio.h>

enum Traffic {RED, YELLOW, GREEN};

int main() {
    enum Traffic t;
    scanf("%d", (int*)&t);  // 0=RED,1=YELLOW,2=GREEN

    if (t == RED)
        printf("Stop\n");
    else if (t == YELLOW)
        printf("Wait\n");
    else if (t == GREEN)
        printf("Go\n");
    else
        printf("Invalid value\n");

    return 0;
}

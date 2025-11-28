#include <stdio.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum Status s;
    scanf("%d", (int*)&s);  // 0,1,2

    switch (s) {
        case SUCCESS: printf("Operation Successful\n"); break;
        case FAILURE: printf("Operation Failed\n"); break;
        case TIMEOUT: printf("Operation Timed Out\n"); break;
        default: printf("Unknown Status\n");
    }
    return 0;
}

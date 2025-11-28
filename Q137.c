#include <stdio.h>

enum Role {ADMIN, USER, GUEST};

int main() {
    enum Role r;
    scanf("%d", (int*)&r);  // 0=ADMIN,1=USER,2=GUEST

    switch (r) {
        case ADMIN: printf("Welcome, Admin! Full access granted.\n"); break;
        case USER:  printf("Welcome, User! Limited access.\n"); break;
        case GUEST: printf("Welcome, Guest! View-only access.\n"); break;
        default:    printf("Unknown role.\n");
    }
    return 0;
}

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    for (int i = 0; i < 5; i++) {
        scanf("%s%d%f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    for (int i = 0; i < 5; i++) {
        printf("Student %d: %s %d %.2f\n", i+1, s[i].name, s[i].roll_no, s[i].marks);
    }
    return 0;
}

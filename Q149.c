#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student *s = (struct Student*)malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; i++) {
        scanf("%s%d%f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    for (int i = 0; i < n; i++) {
        printf("Student %d: %s %d %.2f\n", i+1, s[i].name, s[i].roll_no, s[i].marks);
    }

    free(s);
    return 0;
}

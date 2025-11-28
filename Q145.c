#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopper(struct Student s[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }
    return s[maxIndex];
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++)
        scanf("%s%d%f", s[i].name, &s[i].roll_no, &s[i].marks);

    struct Student topper = getTopper(s, n);
    printf("Topper: %s %d %.2f\n", topper.name, topper.roll_no, topper.marks);
    return 0;
}

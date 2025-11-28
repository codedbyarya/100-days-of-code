#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;
    scanf("%s%d%f", s1.name, &s1.roll_no, &s1.marks);
    scanf("%s%d%f", s2.name, &s2.roll_no, &s2.marks);

    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks)
        printf("Structures are identical\n");
    else
        printf("Structures are NOT identical\n");

    return 0;
}

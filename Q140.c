#include <stdio.h>

enum Gender {MALE, FEMALE, OTHER};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int g;
    scanf("%s%d", p.name, &g);
    p.gender = (enum Gender)g;

    printf("Name: %s\n", p.name);
    if (p.gender == MALE) printf("Gender: Male\n");
    else if (p.gender == FEMALE) printf("Gender: Female\n");
    else if (p.gender == OTHER) printf("Gender: Other\n");
    else printf("Gender: Unknown\n");

    return 0;
}

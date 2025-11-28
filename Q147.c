#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee *e = (struct Employee*)malloc(n * sizeof(struct Employee));

    for (int i = 0; i < n; i++) {
        scanf("%s%d%f", e[i].name, &e[i].id, &e[i].salary);
    }

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    fwrite(e, sizeof(struct Employee), n, fp);
    fclose(fp);

    free(e);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    struct Employee temp;
    while (fread(&temp, sizeof(struct Employee), 1, fp) == 1) {
        printf("Name: %s ID: %d Salary: %.2f\n", temp.name, temp.id, temp.salary);
    }

    fclose(fp);
    return 0;
}

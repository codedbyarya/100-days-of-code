#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks, n;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter name, roll, marks: ");
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    printf("\nStored successfully!\n\nReading file:\n");
    fp = fopen("students.txt", "r");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3)
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);

    fclose(fp);
    return 0;
}

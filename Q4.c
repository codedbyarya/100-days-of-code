#include <stdio.h>
#define PI 3.1416
int main() {
    float r, area, circ;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = PI * r * r;
    circ = 2 * PI * r;
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circ);
    return 0;
}

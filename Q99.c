#include <stdio.h>
#include <string.h>

int main() {
    char date[20], month[3];
    char months[][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    scanf("%s", date);
    int d, m, y;
    sscanf(date, "%d/%d/%d", &d, &m, &y);
    printf("%02d-%s-%d", d, months[m-1], y);
    return 0;
}

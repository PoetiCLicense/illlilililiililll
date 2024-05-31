#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);

    printf("%d", (y % 4 == 0 ? ((y % 400 != 0) && (y % 100 == 0) ? 0 : 1) : 0));

    return 0;
}
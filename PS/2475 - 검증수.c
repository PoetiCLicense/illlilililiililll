#include <stdio.h>

int main() {
    int total = 0;

    int n;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        total += n*n;
    }

    printf("%d", total%10);

    return 0;
}
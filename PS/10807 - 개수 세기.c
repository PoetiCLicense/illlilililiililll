#include <stdio.h>

int main() {
    int n, x, v, cnt = 0;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    scanf("%d", &v);

    for (int i = 0; i < n; i++)
        if (array[i] == v)
            cnt++;

    printf("%d", cnt);

    return 0;
}
#include <stdio.h>

int main() {
    int n, m, temp;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &temp);
            printf("%d ", a[i][j] + temp);
        }
        printf("\n");
    }

    return 0;
}
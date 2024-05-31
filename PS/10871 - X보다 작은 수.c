#include <stdio.h>

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    int k;
    for (int i = 0; i < n; i++) {
        scanf("%d", k);
        if (k < x)
            printf("%d ", k);
    }
    
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000] = "";
    char first, last;
    int n, len = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", str);

        len = strlen(str);
        printf("%c%c\n", str[0], str[len-1]);
    }
}
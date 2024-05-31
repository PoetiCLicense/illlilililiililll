#include <stdio.h>

int main() {
    char s[100] = "";
    scanf("%s", s);


    for (int i = 0; i < 100; i++) {
        if (s[i] >= 97)
            s[i] -= 32;
        else
            s[i] += 32;
    }

    printf("%s", s);

    return 0;
}
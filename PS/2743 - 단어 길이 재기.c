#include <stdio.h>

int len(char s[]) {
    int length = 0;
    for (int i = 0; s[i]; i++)
        length++;

    return length;
}

int main() {
    char word[100] = "";

    scanf("%s", &word);
    printf("%d", len(word));

    return 0;
}
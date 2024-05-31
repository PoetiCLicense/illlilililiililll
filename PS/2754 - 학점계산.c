#include <stdio.h>

int main() {
    char grade[2];
    scanf("%s", &grade);
    float score = 0;

    if (grade[0] != 'F') {
        if (grade[0] == 'A')
            score += 4;
        else if (grade[0] == 'B')
            score += 3;
        else if (grade[0] == 'C')
            score += 2;
        else if (grade[0] == 'D')
            score += 1;

        if (grade[1] == '+')
            score += 0.3;
        else if (grade[1] == '-')
            score -= 0.3;
    }

    printf("%.1f", score);

    return 0;
}
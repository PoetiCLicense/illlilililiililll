#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d", &a, &b);
    if(a>b){
        printf(">");
    }
    else if(a<b){
        printf("<");
    }
    else{
        printf("==");
    }
}
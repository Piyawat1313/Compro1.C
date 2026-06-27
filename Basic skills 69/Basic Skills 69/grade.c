#include<stdio.h>

int main(){
    int c = 0;
    scanf("%d", &c);

    printf(c >= 80 ? "A" : "");
    printf(c >= 70 && c <= 79 ? "B" : "");
    printf(c >= 60 && c <= 69 ? "C" : "");
    printf(c >= 50 && c <= 59 ? "D" : "");
    printf(c >= 0 && c <= 49 ? "F" : "");

    return 0;
}

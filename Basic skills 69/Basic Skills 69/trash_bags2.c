#include<stdio.h>

int main(){
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    int plastic = 5;
    int bottle = 20;
    int paper = 7;

    int result = (n1 * plastic * 1) + (n2 * bottle * 5) + (n3 * paper * 2);
    printf("%d", result);

    return 0;
}

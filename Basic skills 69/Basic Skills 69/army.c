#include<stdio.h>
int main(){
    int x = 0;
    int y = 0;
    scanf("%d %d", &x, &y);

    int row = x / y;
    int mod = x % y;

    printf("%d %d", row, mod);
    return 0;
}

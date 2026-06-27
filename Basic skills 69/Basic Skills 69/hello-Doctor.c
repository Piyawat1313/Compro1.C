#include<stdio.h>
int main(){
    int x = 0;
    int y = 0;
    int z = 0;
    scanf("%d %d %d", &x, &y, &z);

    printf(x == 1 || y == 1 || z == 1 ? "Doctor Emergency!!!!!" : "Non-emergency.");

    return 0;
}

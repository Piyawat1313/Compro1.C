#include<stdio.h>
int main(){
    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    if(scanf("%d %d %d", &p1, &p2, &p3) != 3){
        return 0;
    }

    int z = (3 * p3) - p1 - p2;

    if(z <= 0){
        printf("0\n");
    }
    else{
        printf("%d\n", z);
    }
    return 0;
}

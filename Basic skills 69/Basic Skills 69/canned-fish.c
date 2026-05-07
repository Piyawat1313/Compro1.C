#include <stdio.h>

int main(){
    // fish sadeen = 3
    // tomato = 2
    // product = 1
    int fish, tomato;
    scanf("%d %d", &fish, &tomato);
    int pro1 = fish / 3;
    int pro2 = tomato / 2;

    int count = 0;
    if(pro1 < pro2){
        count = pro1;
    }
    else{
        count = pro2;
    }
    printf("Result: %d ", count);
    return 0;
}

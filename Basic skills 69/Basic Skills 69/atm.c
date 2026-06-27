#include<stdio.h>

int main(){

    int balance = 0;
    int widthDraw = 0;
    scanf("%d %d", &balance, &widthDraw);

    int remain = balance - widthDraw;

    if(remain < 0){
        printf("Unable to withdraw money.");
    }
    else{
        printf("%d", remain);
    }

    return 0;
}

#include<stdio.h>

int main(){
    int balance = 0;
    int menu = 0;
    int money = 0;

    scanf("%d %d %d", &balance, &menu, &money);

    int remain = balance -  money;
    int draw = balance + money;
    switch(menu){
        case 1:
            if(money > balance){
                printf("Sorry, you can not withdraw money.");
            }
            else{
                printf("%d", remain);
            }
        break;

        case 2:
            printf("%d", draw);
        break;
    }
    return 0;
}

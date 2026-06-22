#include<stdio.h>

int main(){

    int pin = 0;
    scanf("%d", &pin);
    for(int i = 2; i >= 0; i--){
        scanf("%d", &pin);
        if(pin != 785241 && i == 2){
            printf("Incorrect PIN. You have %d attempts left.\n", i);
        }
        else if(pin != 785241 && i == 1){
            printf("Incorrect PIN. You have %d attempt left.\n", i);
        }
        else if(pin != 785241 && i == 0){
            printf("Incorrect PIN. Your debit card is currently unavailable.\n");
            printf("The transaction has been cancelled.\n");
        }
    }

    char menu;

    scanf("%c", &menu);
    printf("============ MENU ============\n");
    printf("     [A] Withdrawal menu\n");
    printf("     [B] Deposit menu\n");
    printf("==============================\n");

    int w = 0;
    int d = 0;
    float balance = 9872.50;
    if(menu == 'A'){
       printf("[ Withdrawal menu]\n");
       scanf("%d", &w);
       if(w > balance){
            printf("Not enough money\n");
            printf("The transaction has been cancelled.\n");
       }
       else if(w % 100 == 0){
            printf("Withdrawal successful.\n");
            printf("Balance: %.2f Baht", (balance - w));
       }
       else{
            printf("The amount is incorrect\n");
            printf("The transaction has been cancelled.\n");
       }
    }
    else if(menu == 'B'){
        printf("[ Deposit menu ]\n");
        scanf("%d", &d);
        if(d > 100000){
            printf("Deposit limit exceeded\n");
            printf("The transaction has been cancelled.\n");
        }
        else if(d % 100 == 0){
            printf("Deposit successful\n");
            printf("Balance: %.2f Baht\n", (d + balance));
        }
        else{
            printf("The deposit amount is incorrect.\n");
            printf("The transaction has been cancelled.\n");
        }
    }
    else{
        printf("We don’t have this menu.");
    }

    return 0;
}

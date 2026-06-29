#include<stdio.h>

int main(){

    int money = 0;
    double tax = 0.05;
    double tax2 = 0.10;
    double tax3 = 0.15;
    double tax4 = 0.20;
    int fee = 0;
    scanf("%d", &money);

    if(money <= 150000){
        fee += 0;
        printf("Fee --> %d", fee);
    }
    else if(money >= 150001 && money <= 300000){
        fee += (money - 150000) * tax;
        printf("Fee --> %d", fee);
    }
    else if(money >= 300001 && money <= 500000){
        fee += (money - 300000) * tax2 + 7500;
        printf("Fee --> %d", fee);
    }
    else if(money >= 500001 && money <= 750000){
        fee += (money - 500000) * tax3 + 27500;
        printf("Fee --> %d", fee);
    }
    else if(money > 750000){
        fee += (money - 750000) * tax4 + 65000;
        printf("Fee --> %d", fee);
    }

    return 0;
}

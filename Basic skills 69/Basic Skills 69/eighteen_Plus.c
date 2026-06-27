#include<stdio.h>

int main(){
    int month = 0;
    int year = 0;
    scanf("%d %d", &month, &year);
    int welcome_month = month - 6;
    int years = 2024 - year;
    printf("Year 18: --> %d\n", years);
    printf("Sum Month: --> %d\n", welcome_month);
    if(years > 18){
        printf("Welcome");
    }
    else if(years == 18){
        if(month >= 6){
            printf("Get Out!");
        }
        else{
            printf("Welcome");
        }
    }
    else {
        printf("Get Out!");
    }


    return 0;
}

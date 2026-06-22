#include<stdio.h>

int main(){
    int day = 0;
    scanf("%d", &day);

    if(day < 0 || day > 7){
        printf("Invalid Value");
    }

    switch(day){
        case 1: printf("GYM CLOSED");
        break;

        case 2: printf("Pull Day");
        break;

        case 3: printf("Push Day");
        break;

        case 4: printf("Leg Day\n");
                printf("I can't do this anymore!");
        break;

        case 5: printf("Pull Day");
        break;

        case 6: printf("Push Day");
        break;

        case 7: printf("Cheat Day/n ");
                printf("NYAM NYAM");
        break;
    }


    return 0;
}

#include<stdio.h>

int main(){
    int round = 7;
    int count_Pull = 0;
    int count_Push = 0;
    int count_Leg = 0;
    int count_Cheat = 0;
    int day = 0;
    int more_day = 3;
    for(int i = 0; i < round; i++){
        scanf("%d", &day);
        switch(day){
            case 1: count_Pull++;
            break;

            case 2: count_Push++;
            break;

            case 3: count_Leg++;
            break;

            case 4: count_Cheat++;
            break;
        }
    }

    if(count_Cheat == 0){
        printf("BRO, YOU NEED SOME REST.\n");
    }
    if(count_Pull >= more_day){
        printf("YOU GONNA FLY WITH THAT WING?\n");
    }
    if(count_Push >= more_day){
        printf("BRO THINKS EVERY DAY IS CHEST DAY.\n");
    }
    if(count_Leg >= more_day){
        printf("BRO YOUR LEGS ARE CRYING.\n");
    }
    else{
        printf("PERFECT PLAN.\nLET'S GET THOSE GAINS!\n");
    }

    return 0;
}

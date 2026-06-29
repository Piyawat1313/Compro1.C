#include<stdio.h>
int main(){

    int time = 0;
    scanf("%d", &time);

    if(time < 0){
        printf("Can not be negative.");
    }

    int minute = time % 100;    //00 - 59
    int hour = time / 100;  //00 - 23
    int err = (hour > 23) ? 1 : 0;  //check hour error
    int err_minute = (minute > 59) ? 1 : 0;

    //check hour
    if(err == 1){
        printf("Hour error.\n");
    }
    //check minute
    if(err_minute == 1){
        printf("Minutes error.");
    }


    int total_minute = hour * 60 + minute;  //คำนวณนาทีที่จะถึงช่วงในแต่ละช่วงเช่น 05:00 - 10:00  ซึ่งเอาเลขชั่วโมงไปคูณ 60 แล้วบวกด้วย นาทีที่เราหามาได้

    //check morning
    if(total_minute >= 300 && total_minute <= 600){
        printf("Morning");
    }
    //check noon
    else if(total_minute >= 601 && total_minute <= 900){
        printf("Noon");
    }
    //check evening
    else if(total_minute >= 601 && total_minute <= 1139){
        printf("Evening");
    }
    //check night
    else{
        printf("Night");
    }



    return 0;
}

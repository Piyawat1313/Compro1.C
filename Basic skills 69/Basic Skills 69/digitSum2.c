#include<stdio.h>

int main(){

    int number = 0;
    int digits = 0;
    int sum = 0;
    int front = 0;

    while(scanf("%d", &number) && (number != -1)){
            if(number < 0){
                number = number * (-1);
            }

            digits = number % 10    //ดึงหลักหน่วย
            number = number / 10;   //ดึงเลขที่เหลืออกมาจากหลักหน่วย
        while(number > 0){
            front = number % 10;    //เอาตัวเลขสุดท้ายออก
            sum += front;   //เอาตัวที่เหลือ + ตัวที่เอาออกมา
            number /= 10;   //ตัดตัวที่เหลืออก
        }
        printf("%c\n", (char)sum * digits);
        sum = 0; //reset ในแต่ละรอบ
    }

    return 0;
}

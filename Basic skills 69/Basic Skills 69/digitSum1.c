#include<stdio.h>

int main() {

    int number = 0;
    int digits = 0;
    int sum = 0;
    scanf("%d", &number);

    //เลขต้องเป็นจำนวนบวกเท่านั้น
    abs(number);


    //ดึงเลขทุกหลักออกมา
    while(number > 0){
        digits = number % 10;   //ดึงเลขออกมาทีละหลัก
        number = number / 10;   //เอาเลขที่เหลือมาตัดให้ได้หลักที่ต้องการ
        sum += digits;
    }

    printf("Number is: --> %d", sum);


    return 0;
}

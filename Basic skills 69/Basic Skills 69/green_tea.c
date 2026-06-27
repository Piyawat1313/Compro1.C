#include<stdio.h>

int main(){
    int water = 0;
    int sugar = 0;
    scanf("%d %d", &water, &sugar);

    int volume = water / 500;
    int v_sugar = sugar / 20;
    int total = volume;
    if(sugar < total){
        total = sugar;
    }
    //คำนวณปริมาณน้ำเปล่าที่เหลือจากผลิตเสร็จ
    int water_use = total * 500;
    printf("Water Use --> %d\n", water_use);
    int remain = water - water_use;
    printf("Remain --> %d\n", remain);

    printf("%d", total);

    if(remain > 0){
        printf("water\n");
    }

    return 0;
}

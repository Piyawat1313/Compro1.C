#include<stdio.h>

int main(){
    int K;
    printf("Input Employers: ");
    scanf("%d", &K);

    int N;
    printf("Input Order shirts: ");
    scanf("%d", &N);

    //employer : 100
    int max_cap = (K * 100);
    int day = 1;
    int order = 0;
    int current = max_cap;  //อัตราการผลิตในแต่ละวัน
    for(int i = 0; i < N; i++){
        printf("Input Count Shirts: ");
        scanf("%d", &order);

        //loop ให้ Order ที่ต้องผลิตในแต่ละวันหมดก่อน
        while(order > 0){

            //จำนวน Order น้อยกว่า กำลังที่ผลิตในแต่ละวัน
            if(order <= current){   //กรณีที่แรงเหลือวันนั้นพอดี
                current -= order;   //ลดจำนวนกำลังผลิตในแต่ละวัน
                order = 0;  //Order หมดแล้ว
                printf("--> Day: %d\n", day);

                //กำลังการผลิตหมดพอดี
                if(current == 0){
                    day++;  //ทำในวันถัดไป
                    current = max_cap;  //reset กำลังการผลิตของวัน พรุ่งนี้
                }
            }

            //กรณีที่ Order เยอะเกินกว่ากำลังที่ผลิตในแต่ละวันล่ะ
            else if(order >= current){
                order -= current;   //ตัด Order เท่าที่กำลังที่มีในวันนั้น
                day++;  //ไปวันถัดไป
                current = max_cap;  // reset กำลังการผลิตในวันใหม่
            }
        }
    }
    return 0;
}

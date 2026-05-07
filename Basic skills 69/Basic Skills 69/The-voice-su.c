#include<stdio.h>

int main(){
    int N;
    printf("Input contestants: ");
    scanf("%d", &N);

    int K;
    printf("Input Oversightable committee: ");
    scanf("%d", &K);

    int gender = 0; //1 --> Men, 2 --> Women
    int score1 = 0; // คะแนนกรรมการคนที่ 1
    int score2 = 0; //คะแนนกรรมการคนที่ 2
    int count1 = 0; //จำนวนลูกทีมของกรรมการที่ 1
    int count2 = 0; //จำนวนลูกทีมของกรรมการคนที่ 2
    for(int i = 1; i <= N; i++){
        printf("Gender: ");
        scanf("%d", &gender);

        printf("Score1: ");
        scanf("%d", &score1);

        printf("Score2: ");
        scanf("%d", &score2);

        //check คะแนน อยู่ในช่วง 9 - 10
            //check เพศชาย
                //check จำนวนของลูกทีมกรรมการคนที่ 1
        if(score1 >= 9 && score1 <= 10 && gender == 1 && count1 < K){
            printf("contestants: %d --> director: 1\n", i);
            count1++;
        }

        //check คะแนน อยู่ในช่วง 9 - 10
            //check เพศหญิง
                //check จำนวนของลูกทีมกรรมการคนที่ 2
        else if(score2 >= 9 && score2 <= 10 && gender == 2 && count2 < K){
            printf("contestants: %d  --> director: 2\n", i);
            count2++;
        }

        //กรณีที่ไม่เช็คเพศ
        //check score1 9 - 10
            //จำนวน ทีมที่ 1 เต็มหรือยัง
        else if(score1 >= 9 && score1 <= 10 && count1 < K){
            printf("contestants: %d --> director: 1\n", i);
            count1++;
        }

        //check score2 9 - 10
            //check ทีมที่ 2  เต็มหรือยัง
        else if(score2 >= 9 && score2 <= 10 && count2 < K){
            printf("contestants: %d --> director: 2\n", i);
            count2++;
        }
    }

    return 0;
}

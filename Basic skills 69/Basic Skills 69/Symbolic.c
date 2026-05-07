#include<stdio.h>
int main(){
    //ข้อที่ 13
    int x_fish;
    scanf("%d", &x_fish);
    printf("Fish: %d\n", x_fish);

    int tomato = 200;
    printf("tomato: %d\n", tomato);

    int result = x_fish % tomato;
    printf("Result: %d\n", result);
    return 0;
}

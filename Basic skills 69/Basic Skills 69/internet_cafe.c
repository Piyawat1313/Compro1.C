#include<stdio.h>

int main(){
    int hour_service = 20;
    int member = 100;
    int sale = 0.10;
    int hour = 0;
    scanf("%d", &hour);

    int A = hour_service * hour;
    int B = (hour_service * hour * 0.9) + member;
    printf( A >= B ? "%d %d \nB", A, B : "%d %d \nA", A, B);

    return 0;
}

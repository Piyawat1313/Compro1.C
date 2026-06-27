#include<stdio.h>
int main(){
    double distance = 0;
    int fuel = 0;
    scanf("%lf %d", &distance, &fuel);

    double use = distance / fuel;
    printf("%.2lf", use);
    return 0;
}

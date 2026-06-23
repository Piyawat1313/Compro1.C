#include<stdio.h>

int main(){
    int mongKol = 0;
    int sum = 0;
    int count = 0;
    for(int i = 0; i < 15; i++){
        scanf("%d", &mongKol);
        if(mongKol > 0 && mongKol <= 100){
            sum += mongKol;
        }
        if(i == 14 && sum >= 100 && sum <= 399 || sum >= 601 && sum <= 1000 && count == 0){
            printf("%d \n%d", sum, count);
        }
    }
    while(sum >= 400 && sum <= 600){
        scanf("%d", &mongKol);
        if(mongKol <= 0 || mongKol > 100){
            count++;
        }
        else{
            sum += mongKol;
            count++;
        }
    }
    if(count > 0){
        printf("%d \n%d", sum, count);
    }
    return 0;
}

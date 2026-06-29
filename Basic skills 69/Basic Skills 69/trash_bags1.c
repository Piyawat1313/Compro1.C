#include<stdio.h>
int main(){
    int weight = 0;
    scanf("%d", &weight);
    int kk = 3;
    int check = (weight % kk != 0) ? 1 : 0;

    if(check){
        printf("Receive %d Baht", weight * kk);
    }
    else{
        printf("Sorry, we don't accept wet garbage.");
    }

    return 0;
}

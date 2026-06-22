#include<stdio.h>

int main(){

    int TRU = 1;
    int number = 0;
    int count = 0;
    for(int i = 0; i < 3; i++){
        scanf("%d", &number);
        if(number == 1){
            count++;
        }
    }

    if(count >= TRU){
        printf("Doctor Emergency!!!!!");
    }
    else{
        printf("Non-emergency.");
    }


    return 0;
}

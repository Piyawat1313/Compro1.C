#include<stdio.h>
 int main(){
    int tall = 0;
    scanf("%d", &tall);

    if(tall <= 0){
        printf("Error: Invalid Altitude");
    }
    else if(tall >= 1 && tall < 400){
        printf("In progress: %.1lf km remaining", (double)(400.0 - tall));
    }
    else if(tall == 400){
        printf("KnackSat-2 has reached orbit!");
    }
    else if(tall > 400){
        printf("Out of orbit: %.1lf km over", (double)(tall - 400.0));
    }

    return 0;
 }

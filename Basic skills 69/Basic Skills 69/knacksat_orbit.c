#include<stdio.h>
 int main(){
    float tall = 0.0;
    scanf("%f", &tall);

    if(tall <= 0){
        printf("Error: Invalid Altitude");
    }
    else if(tall >= 0.1 && tall < 400){
        printf("In progress: %.1lf km remaining", (400.0 - tall));
    }
    else if(tall == 400){
        printf("KnackSat-2 has reached orbit!");
    }
    else if(tall > 400){
        printf("Out of orbit: %.1lf km over", (tall - 400.0));
    }

    return 0;
 }

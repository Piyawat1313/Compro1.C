#include <stdio.h>

void main(){
    // input fish
    int fish;
    printf("Fish: ");
    scanf("%d", &fish);

    //input tomato
    int tomato;
    printf("Tomato: ");
    scanf("%d", &tomato);

    //how much product
    int result = (fish / 3);
    int result2 = (tomato / 2);
    printf("Result: %d\n", result);
    printf("Result: %d\n", result2);

    int count = 0;
    if(result <= result2){
        count = result;
    }
    else if(result2 < result){
        count = result2;
    }
    printf("Count: %d\n", count);


    //remaining
    int re_fish = fish - (count * 3);
    int re_tomato = tomato - (count * 2);
    printf("Remaining Fish: %d", re_fish);
    printf("Remaining Tomato: %d", re_tomato);
}

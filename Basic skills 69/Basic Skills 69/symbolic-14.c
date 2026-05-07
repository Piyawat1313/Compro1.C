#include <stdio.h>

int main(){
    int fish = 300;
    printf("Fish: %d\n", fish);

    int tomato;
    printf("Tomato: ");
    scanf("%d", &tomato);


    int result = fish / 3;
    int result2 = tomato / 2;
    int count = 0;
    if(result < result2){
        count = result;
        printf("Count: %d\n", count);
    }
    else{
        count = result2;
    }
    printf("Result: %d\n", count);

    return 0;
}

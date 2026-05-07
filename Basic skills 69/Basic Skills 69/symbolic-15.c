#include <stdio.h>

int main(){
    //input fish
    int fish; // int fish = 0;
    printf("Fish: ");
    scanf("%d", &fish);

    //input tomato
    int tomato;
    printf("Tomato: ");
    scanf("%d", &tomato);

    //calculate
    //method 1
    printf("Result: %d %% %d = %d\n", fish, tomato, fish % tomato);

    //method 2
    int result = fish % tomato;
    printf("Result: %d\n", result);
    return 0;
}

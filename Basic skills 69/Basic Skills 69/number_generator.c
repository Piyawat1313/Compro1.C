#include<stdio.h>

int main(){
    int number = 0;
    scanf("%d", &number);

    if(number < 0){
        printf("unable to work\n");
        return 0;
    }

    int mod = number % 10;

    if(mod > 5){
        mod += 99;
    }
    else{
        mod += 66;
    }

    int one = mod % 10;
    int ten = (mod / 10) % 10;
    int results = 0;

    results = ten + one;

    if(results % 2 == 0){
        results += 212;
    }
    else if(results % 2 != 0){
        results += 357;
    }

    printf("%d", results);

    return 0;
}

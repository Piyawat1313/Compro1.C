#include<stdio.h>

int main(){
    int order1 = 0;
    int total = 0;
    int result = 0;
    //scanf("%d %d", &order1, &total);
    while(1){
        scanf("%d %d", &order1, &total);
        if(order1 < 0 || order1 > 5){
            break;
        }
        if(total < 0){
            printf("Cancle Order :(\n");
            break;
        }

        switch(order1){
            case 1: printf("MatchaLatte\n");
                    result += 65 * total;
                    printf("%d\n", 65 * total);
            break;

            case 2: printf("Cappuccino\n");
                    result += 60 * total;
                    printf("%d\n", 60 * total);
            break;

            case 3: printf("Mocha\n");
                    result += 55 * total;
                    printf("%d\n", 55 * total);
            break;

            case 4: printf("PureMatcha\n");
                    result += 50 * total;
                    printf("%d\n", total * 50);
            break;

            case 5: printf("BlackCoffee\n");
                    result += 45 * total;
                    printf("%d\n", total * 45);
            break;

        }
    }
    printf("Total: %d", result);
    return 0;
}

#include<stdio.h>

int main(){

    int player1 = 0; int player2 = 0; int player3 = 0;
    scanf("%d%d%d", &player1, &player2, &player3);

    int max = 0;
    int temp = 0;

    if(player1 > player2 && player1 > player3){
        max = player1;
        //สลับค่า
        if(player2 < player3){
            temp = player2;
            player2 = player3;
            player3 = temp;
        }

        printf("Player 1 WIN\n%d %d %d", max, player2, player3);

    }
    else if(player2 > player1 && player2 > player3){
        max = player2;
        if(player1 < player3){
            temp = player1;
            player1 = player3;
            player3 = temp;
        }
        printf("Player 2 WIN\n%d %d %d", max, player1, player3);
    }
    else if(player3 > player1 && player3 > player2){
        max = player3;

        if(player1 < player2){
            temp = player1;
            player1 = player2;
            player2 = temp;
        }
        printf("Player 3 WIN\n%d %d %d", max, player1, player2);
    }

    return 0;
}

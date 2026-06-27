#include<stdio.h>

int main(){
    int position1 = 0;
    int position2 = 0;
    scanf("%d %d", &position1, &position2);

    int startX = 0;
    int startY = 0;
    scanf("%d %d", &startX, &startY);

    if(position1 < 1 || position1 > 8 || position2 < 1 || position2 > 8 || startX < 1 || startX > 8 || startY < 1 || startY > 8){
        printf("out of board.");
    }
    else if(startX == position1 || startY == position2){
        printf("Now Rook current position is %d %d", startX, startY);
    }
    else{
        printf("Sorry, you can't move to that position. Now Rook current position is %d %d", position1, position2);
    }

    return 0;
}

#include<stdio.h>

int main(){

    int tank = 0;
    int mage = 0;
    int healer = 0;

    scanf("%d %d %d", &tank, &mage, &healer);

    if(tank <= 0 || mage <= 0 || healer <= 0){
        printf("Your party can't play this event!\n");
        return 0;
    }

    int member = 0;
    int power = 0;
    int sum = 0;
    while(1){
      scanf("%d %d", &member, &power);
      if(member <= 0 || member > 3){
        sum = tank + mage + healer;
        printf("Let's fight with a dragon!\n");
        break;
      }

      if(member == 1){
        tank = power * 0.35 + tank;
        printf("--> %d %d %d\n", tank, mage, healer);
      }
      if(member == 2){
        mage = power * 0.35 + mage;
        printf("--> %d %d %d\n", tank, mage, healer);
      }
      if(member == 3){
        healer = power * 0.10 + healer;
        printf("--> %d %d %d\n", tank, mage, healer);
      }
    }

    int dragon = 0;
    scanf("%d", &dragon);

    dragon *= 5;
    printf("HP Dragon: %d\n", dragon);
    printf("Sum Team: %d\n", sum);

    if(sum >= dragon){
        printf("Victory!");
    }
    else{
        int remain = dragon - sum;
        printf("Try agian \nHp dragon = %d", remain);
    }


    return 0;
}

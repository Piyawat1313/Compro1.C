#include<stdio.h>

int main(){
    int number = 0;
    int gd = 0;
    scanf("%d %d", &number, &gd);

    int less_sixGD = 11000;
    int beetween_7_11 = 18000;
    int beetween_12_22 = 30000;
    int calculate_GD_more = 0;
    int gd_education = 22;
    int register_more = 1500;
    int calculate_summer = 0;
    if(number == 1){
        if(gd <= 6){
            printf("%d", less_sixGD);
        }
        else if(gd >= 7 && gd <= 11){
            printf("%d", beetween_7_11);
        }
        else if(gd >= 12 && gd <= 22){
            printf("%d", beetween_12_22);
        }
        else if(gd > 22){
            calculate_GD_more = (gd - gd_education) * register_more;
            printf("%d", calculate_GD_more);
        }
    }
    else if(number == 2){
        calculate_summer = register_more * gd;
        printf("%d", calculate_summer);
    }

    return 0;
}

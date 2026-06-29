#include<stdio.h>

int main(){
    int p1, p2;
    scanf("%d %d", &p1, &p2);

    if((p1 == 0 && p2 == 2) || (p1 == 5 && p2 == 0) || (p1 == 2 && p2 == 5)){
        printf("1");
    }
    else if((p1 == 0 && p2 == 0) || (p1 == 2 && p2 == 2) || (p1 ==  5 && p2 == 5)){
        printf("0");
    }
    else{
        printf("2");
    }
    return 0;
}

#include<stdio.h>

int main(){
    int lecture = 0;
    int lab = 0;
    scanf("%d %d", &lecture, &lab);

    int vat = 1000;
    int gd_lecture = 200;
    int gd_lab = 300;

    int result = (gd_lecture * lecture) + (gd_lab * lab) + vat;
    printf("%d", result);
    return 0;
}

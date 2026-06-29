#include<stdio.h>
#include<math.h>

int main(){
    double ac, bc, ab;
    scanf("%lf %lf", &ac, &bc);

    //หาความยาวของ AB
    //BC คือด้านตรงข้ามมุมฉาก
    ab = sqrt(bc * bc - ac * ac);

    if(ab < ac){
        printf("B\n");
    }
    else if(ac < ab){
        printf("C\n");
    }
    else{
        printf("B\n");
    }

    //หาระยะทางที่สั้นที่สุด
    double shortest = (ab < ac) ? ab : ac;
    printf("%.2lf\n", shortest);

    return 0;
}

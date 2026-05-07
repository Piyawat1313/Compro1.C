#include<stdio.h>

 int main(){
    int N;
    printf("Input Day Resevre Van: ");
    scanf("%d", &N);

    int day_a = 0;
    int day_b = 0;
    int day_c = 0;
    int resevre = 0;
    for(int i = 0; i < N; i++){
        printf("Resevre: ");
        scanf("%d", &resevre);
        if(day_a <= day_b && day_a <= day_c){
            printf("--> Result: A");
            printf("\n");
            day_a += resevre;
        }
        else if(day_b <= day_c){
            printf("--> Result: B");
            printf("\n");
            day_b += resevre;
        }
        else{
            printf("--> Result: C");
            printf("\n");
            day_c += resevre;
        }
    }
    return 0;
 }

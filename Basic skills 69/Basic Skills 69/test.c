#include <stdio.h>
#include <stdlib.h>

void main(){
//    int n;
//    scanf("%d", &n);
//    for(int i = 1; i <= n; i++){
//        for(int j = 1; j <= i; j++){
//            printf("*");
//        }
//        printf("\n");
//    }


// heart
    int n = 10;
    for(int i = n / 2; i <= n; i += 2){
        // ช่องว่างทางซ้ายของหัวใจที่รัก
        for(int j = 1; j < n - i; j += 2){
            printf(" ");
        }

        for(int j = 1; j <= i; j++){
            printf("*");
        }

        for(int j = 0; j <= n - i; j++){
            printf(" ");
        }

        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }


    for(int i = n; i >= 1; i--){
        for(int j = i; j < n; j++){
            printf(" ");
        }
        for(int j = 1; j<= (i * 2) - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");



    for(int i = n; i >= 1; i--){
        for(int j = i; j < n; j++){
            printf(" ");
        }
        for(int j = 1; j<= (i * 2) - 1; j++){
            printf("*");
        }
        printf("\n");
    }


    for(int i = 1; i <= n; i++){
        for(int j = i; j < n; j++){
            printf(" ");
        }
        for(int j = 1; j < (i * 2); j++){
            printf("*");
        }
        printf("\n");
    }
}


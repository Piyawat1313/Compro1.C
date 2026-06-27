#include<stdio.h>

int main(){
    char c = 0;
    scanf("%c", &c);

    if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'){
        printf("Alphabetic");
    }
    else if(c >= '1' && c <= '9'){
        printf("Number");
    }
    else{
        printf("Special");
    }
    return 0;
}

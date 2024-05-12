#include<stdio.h>

int main(){

    int digit;
    scanf("%d",&digit);
    int ans = digit / 1000;
    if(ans % 2 == 0){
        printf("EVEN\n");
    }else{
        printf("ODD\n");
    }
    return 0;
}
#include<stdio.h>

int main(){

    int taka;
    scanf("%d",&taka);
    if(taka >= 100){
        printf("Burger Khabo...\n");
    }else if(taka >=50){
        printf("Fuchka Khabo...\n");
    }else if(taka >=20){
        printf("Ice Cream Khabo...\n");
    }
    else{
        printf("Taka nai Khabona....");
    }
    return 0;
}
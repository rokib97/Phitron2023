#include<stdio.h>

int main(){

    int taka;
    scanf("%d",&taka);
    if(taka >= 5000){
        printf("Cox's Bazar Jab0...\n");
        if(taka >=10000){
            printf("Saint Martin Jabo...\n");
        }else{
            printf("Cox's Bazar ghure Chole ashb0...\n");
        }
    }else{
        printf("Kothaw Jabona.. money nai..");
    }
    return 0;
}
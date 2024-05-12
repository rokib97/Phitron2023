#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int leftmoney;
    if(n > 1000){
        printf("I will buy Punjabi\n");
        leftmoney = n - 1000;
        if(leftmoney >= 500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");

        }
    }else{
        printf("Bad luck!\n");
    }
    return 0;
}
#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    if(num>=0){
        if(num % 2 == 0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }else{
        printf("Please Input a positive number...");
    }
    
    return 0;
}
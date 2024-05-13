#include<stdio.h>

int main(){

    // using while loop with EOF 
    int n;
    // while (scanf("%d",&n) != EOF){
    //     if(n==1999){
    //         printf("Correct\n");
    //         break;
    //     }else{
    //         printf("Wrong\n");
    //     }
    // }

    // using do while 
    // do{
    //     scanf("%d",&n);
    //     if(n==1999){
    //         printf("Correct\n");
    //         break;
    //     }else{
    //         printf("Wrong\n");
    //     }
    // }
    // while (1);
    for (; ; ){
        scanf("%d",&n);
        if(n==1999){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    
    return 0;
}
#include<stdio.h>

int main(){

    int first,second,third;
    scanf("%d %d %d",&first,&second,&third);
    if(first <= second && second <= third){
        printf("%d ",first);
    }else if (second <= first && second <= third){
        printf("%d ",second);
    }else{
        printf("%d ",third);
    }
    if(first >= second && second >= third){
        printf("%d\n",first);
    }else if (second >= first && second >= third){
        printf("%d\n",second);
    }else{
        printf("%d\n",third);
    }
    return 0;
}
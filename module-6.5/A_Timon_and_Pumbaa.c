#include<stdio.h>

int main(){

    int a,b,sub;
    scanf("%d %d",&a,&b);
    sub = a-b;
    if(sub >= 0){
        printf("%d\n",sub);
    }else{
        printf("%d",0);
    }
    return 0;
}
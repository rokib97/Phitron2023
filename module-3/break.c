#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
       printf("%d\n",i);
        if(i == 10){
        break;
       }
    }
    return 0;
}
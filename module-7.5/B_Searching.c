#include<stdio.h>

int main(){

    int n,x;
    scanf("%d",&n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&myArr[i]);
    }
    scanf("%d",&x);
    // int ans = -1;
    for(int i=0; i<n; i++){
        if(myArr[i] == x){
            printf("%d\n",i);
            return 0;
        }
    }
    printf("-1");

    return 0;
}
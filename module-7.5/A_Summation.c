#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int myArr[n];
    long long int sum=0;
    for(int i=0; i<n; i++){
        scanf("%d",&myArr[i]);
    }
    for(int i=0; i<n; i++){
        sum+=myArr[i];
    }
    if(sum<0){
        sum *= -1;
    }

    printf("%lld",sum);
    return 0;
}
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
        if(myArr[i] > 0){
            myArr[i] = 1;
        }else if(myArr[i]<0){
            myArr[i] = 2;
        }else{
            myArr[i] = 0;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",myArr[i]);
    }
    return 0;
}
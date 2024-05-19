#include<stdio.h>
#include<limits.h>

int main(){

    int n;
    scanf("%d",&n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&myArr[i]);
    }
    int min = INT_MAX, pos;
    for(int i=0; i<n; i++){
        if(myArr[i] < min){
            min = myArr[i];
            pos=i+1;
        }
    }
    printf("%d %d\n",min,pos);
    return 0;
}
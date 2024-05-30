#include<stdio.h>
#include<limits.h>

int main(){

    int n;
    scanf("%d",&n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&myArr[i]);
    }
    int min = INT_MAX;
    int max = INT_MIN;
    int min_idx;
    int max_idx;
    int temp;
    for(int i=0; i<n; i++){
        if(myArr[i]<min){
            min = myArr[i];
            min_idx = i;
        }
        if(myArr[i]>max){
            max = myArr[i];
            max_idx =i;
        }
    }
    temp = myArr[min_idx];
    myArr[min_idx] = myArr[max_idx];
    myArr[max_idx] = temp;

    for(int i=0; i<n; i++){
        printf("%d ",myArr[i]);
    }
    return 0;
}
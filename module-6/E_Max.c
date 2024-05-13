#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int num;
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < n; i++){
        scanf("%d",&num);
        if(num > max){
            max = num;
        }
        if(num < min){
            min = num;
        }
    }
    printf("%d\n",max);
    printf("%d\n",min);
    return 0;
}
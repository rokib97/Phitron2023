#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int sumArr[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        scanf("%d",&sumArr[i]);
    }
    for(int i=0; i<n; i++){
        int value = sumArr[i];
        sum += value;
    }
    printf("%d\n",sum);

    return 0;
}
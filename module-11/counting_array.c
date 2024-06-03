#include<stdio.h>
#include<string.h>
int main(){

    int n;
    scanf("%d",&n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&myArr[i]);
    }
    int count[7] ={0}; //0 0 0 0 0 0 0
    for(int i=0; i<n; i++){
        int value = myArr[i];
        count[value]++;
    }
    int countLength = sizeof(count) / sizeof(count[0]);  // Calculate the length of the count array
    for(int i=0; i<countLength; i++){
        printf("%d....%d\n",i,count[i]);
    }
    return 0;
}
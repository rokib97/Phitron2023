#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int even_count = 0;
    int odd_count = 0;
    int positive_count = 0;
    int negative_count = 0;
    int num;
    for(int i=1; i<=n; i++){
        scanf("%d",&num);
        if(num%2 == 0){
            even_count++;
        }else{
            odd_count++;
        }
        if(num>0){
            positive_count++;
        }else if(num<0){
           negative_count++ ;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even_count,odd_count,positive_count,negative_count);
    return 0;
}
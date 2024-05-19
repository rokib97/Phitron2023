#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int value;
    int pos_sum=0;
    int neg_sum=0;
    for(int i=0; i<n; i++){
        scanf("%d",&value);
        if(value > 0){
            pos_sum += value;
        }else{
            neg_sum+=value;
        }
    }
    printf("%d %d",pos_sum,neg_sum);
    
    return 0;
}
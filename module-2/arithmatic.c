#include<stdio.h>

int main(){

    int a=10, b=3;
    int sum = a + b;
    int sub = a - b;
    int mult = a * b;
    float div = a*1.0 / b;
    int mod = a % b;
    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",mult);
    printf("%0.2f\n",div);
    printf("%d\n",mod);
    return 0;
}
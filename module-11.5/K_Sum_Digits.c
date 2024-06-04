#include<stdio.h>
#include<string.h>
int main(){

    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    int sum=0;
    for(int i=0; i<n;i++){
        int value = s[i]-'0';
        sum+=value;
    }
    printf("%d\n",sum);
    return 0;
}
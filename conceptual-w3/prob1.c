#include<stdio.h>
#include<string.h>
int main(){

    int a,b;

    scanf("%d",&a);
    char ch[a+1];
    getchar();
    fgets(ch,sizeof(ch)/sizeof(char),stdin);

    scanf("%d",&b);
    char ch1[b+1];
    getchar();
    fgets(ch1,sizeof(ch1)/sizeof(char),stdin);

    printf("%s %s",ch,ch1);

    
    return 0;
}